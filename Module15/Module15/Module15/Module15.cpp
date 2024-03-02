#include <iostream>

void FindOddNumbers(int Limit, bool IsOdd)
{
    for (int i = 0 ; i  < Limit; ++i )
    {
        ( IsOdd && !(i % 2) || !IsOdd && (i % 2) ) && std::cout << i << std::endl;
    }
}

int main()
{
    FindOddNumbers(10, true);
}

