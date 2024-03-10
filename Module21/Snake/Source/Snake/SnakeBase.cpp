// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeBase.h"
#include "SnakeElementBase.h"
#include "Interactable.h"


// Sets default values
ASnakeBase::ASnakeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElementSize = 100.f;
	MovementSpeed = 10.f;
	LastMoveDirection = EMovementDirection::DOWN;
}

// Called when the game starts or when spawned
void ASnakeBase::BeginPlay()
{
	Super::BeginPlay();
	SetActorTickInterval(MovementSpeed);
	AddSnakeElement(5);
}

// Called every frame
void ASnakeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
}

void ASnakeBase::AddSnakeElement(int ElementsNum)
{
	for (int i = 0; i < ElementsNum; i++) {
		FVector NewLocation(SnakeElement.Num() * ElementSize, 0, 0);
		FTransform NewTransform = FTransform(NewLocation);
		ASnakeElementBase* NewSnakeElement = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		NewSnakeElement->SnakeOwner = this;
		int32 ElementIndex = SnakeElement.Add(NewSnakeElement);
		FVector FirstLocation;
		if (ElementIndex == 0)
		{
			NewSnakeElement->SetFirstElemType();
			NewSnakeElement->MeshComponentCall(NewSnakeElement->MeshComponent);//MeshComponent->OnComponentBeginOverlap.AddDynamic(this, &ASnakeElementBase::HandleBeginOverlap);
			FirstLocation = NewSnakeElement->GetActorLocation();
		}
		if(ElementsNum == 1)
		{
			NewSnakeElement->SetActorLocation(FirstLocation);
		}
	}
}

void ASnakeBase::Move()
{
	FVector MovementVector(ForceInitToZero);
	MovementSpeed = ElementSize;

	switch (LastMoveDirection)
	{
	case EMovementDirection::UP:
		MovementVector.X += MovementSpeed;
		break;
	case EMovementDirection::DOWN:
		MovementVector.X -= MovementSpeed;
		break;
	case EMovementDirection::LEFT:
		MovementVector.Y += MovementSpeed;
		break;
	case EMovementDirection::RIGHT:
		MovementVector.Y -= MovementSpeed;
		break;
	default:
		break;
	}

	SnakeElement[0]->ToggleCollision();

	for (int i = SnakeElement.Num() - 1; i > 0; i--)
	{
		auto CurrenElement = SnakeElement[i];
		auto PrevElement = SnakeElement[i - 1];
		FVector PrevLocation = PrevElement->GetActorLocation();
		CurrenElement->SetActorLocation(PrevLocation);
	}
	SnakeElement[0]->AddActorWorldOffset(MovementVector);
	SnakeElement[0]->ToggleCollision();
}

void ASnakeBase::SnakeElementOverlapElement(ASnakeElementBase* OvelappedElement, AActor* OtherActor)
{
	if (IsValid(OvelappedElement))
	{
		int32 ElementIndex;
		SnakeElement.Find(OvelappedElement, ElementIndex);
		bool bisFirst = ElementIndex == 0;
		IInteractable* InteractableInterface = Cast<IInteractable>(OtherActor);
		if (InteractableInterface)
		{
			InteractableInterface->Interact(this, bisFirst);
		}
	}
}

