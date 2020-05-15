/* Напишите программу, которая генерирует последовательность из 10 случайных чисел в диапазоне от 1 до 10, 
   выводит эти числа на экран и вычисляет их среднее арифметическое. */

#include <iostream>
#include <cstdlib>   // для функций выбора случайного числа srand() и rand()
#include <ctime>     // чтобы в randomize опираться на время запуска программы

int main()
{
    setlocale(LC_CTYPE, "rus");

    //аналог randomize с привязкой ко времени запуска:
    srand(static_cast<unsigned int>(time(0)));

    const unsigned number_of_numbers{ 10 };
    const unsigned min_number{ 1 };
    const unsigned max_number{ 10 };

    std::cout << "*** Случайные числа ***\n";
    unsigned summ{ 0 };
    for (unsigned i = 1; i <= number_of_numbers; i++)
    {
        unsigned rand_number{ rand() % max_number + min_number };
        std::cout << rand_number << " ";
        summ += rand_number;
    }
    std::cout << "\nСреднее арифметическое: " << static_cast<float>(summ)/number_of_numbers << std::endl;

    return 0;
}