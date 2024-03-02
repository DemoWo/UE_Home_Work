#include <iostream>
#include <string>

class Person
{
public:
    std::string NamePerson = "";
    int GlassesPerson = 0;
};

int main()
{
    int countArr;
    std::cout << "Input count Person: ";
    std::cin >> countArr;
    Person* person = new Person[countArr];
    Person input;

    for (int i = 0; i < countArr; ++i) {
        std::cout << "Input Name Person: ";
        std::cin >> input.NamePerson;
        person[i].NamePerson = input.NamePerson;
        std::cout << "Input Glasses Person: ";
        std::cin >> input.GlassesPerson;
        person[i].GlassesPerson = input.GlassesPerson;
    }

    for (int i = 0; i < countArr; ++i) {
        for (int j = i; j < countArr; ++j) {
            if (person[j].GlassesPerson > person[i].GlassesPerson) {
                input = person[i];
                person[i] = person[j];
                person[j] = input;
            }
        }
    }

    for (int i = 0; i < countArr; ++i) {
        std::cout << "NamePerson = " << person[i].NamePerson << ", GlassesPerson = " << person[i].GlassesPerson << std::endl;
    }
    delete[] person;
    return 0;
}