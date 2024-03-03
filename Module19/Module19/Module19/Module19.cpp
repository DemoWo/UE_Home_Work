#include <iostream>

class Animal
{
public:
    std::string Sound = "Voice";
    virtual void Voice()
    {
        std::cout << "Voice" << std::endl;
    }
};

class Dog : public Animal
{
public:
    virtual void Voice()
    {
        std::cout << "Woof!" << std::endl;
    }
};

class Cat : public Animal
{
public:
    virtual void Voice()
    {
        std::cout << "Myu!" << std::endl;
    }
};

class Fish : public Animal
{
public:
    virtual void Voice()
    {
        std::cout << "Bull!" << std::endl;
    }
};

int main()
{
    const int Arr = 3;
    Animal** animal = new Animal*[Arr];
    int Index = 0;
    animal[Index++] = new Dog;
    animal[Index++] = new Cat;
    animal[Index++] = new Fish;
    for (int i = 0; i < Arr; ++i) {
        animal[i]->Voice();
    }

    delete[] animal;
    return 0;
}

