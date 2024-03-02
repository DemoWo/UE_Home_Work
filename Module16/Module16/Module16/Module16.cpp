#include <iostream>

#include <time.h>


int main()
{
    // Получение сегодняшней даты
    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    const int Row = 5;
    const int Column = 5;
    int Arr[Row][Column];

    // Наполнение массива данными
    for (int i = 0; i < Row; ++i) {
        int Index = i;
        for (int j = 0; j < Column; ++j) {
            Arr[i][j] = Index;
            ++Index;
        }
    }

    // Сумма данных находящихся по индексу даты в массиве
    int Summ = 0;
    for (int j = 0; j < Column; ++j) {
        Summ += Arr[buf.tm_mday % 5][j];
    }
    std::cout << "Summ = " << Summ << std::endl;
    return 0;
}
