#include <iostream>

int main()
{
    std::string Word;
    Word = "Lesson Unreal Engine";
    std::cout << "Word: " << Word << ", Length: " << Word.length() << std::endl;
    std::cout << "SymOne: " << Word[0] << ", SymEnd: " << Word[Word.length() - 1] << std::endl;
}
