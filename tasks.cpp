#include <iostream>
#include "tasks.h"

int main() {
    int choice;

    std::cout << "Выберите задание:\n";
    std::cout << "1 - Имена (1.3)\n";
    std::cout << "2 - Человек (1.2)\n";
    std::cout << "3 - Сотрудники и отделы (2.4)\n";
    std::cout << "4 - Список сотрудников отдела (3.4)\n";
    std::cout << "5 - Создание имен (4.5)\n";
    std::cout << "6 - Пистолет (5.1)\n";
    std::cout << "Ваш выбор: ";

    std::cin >> choice;

    switch (choice) {
    case 1: task1_3(); break;
    case 2: task1_2(); break;
    case 3: task2_4(); break;
    case 4: task3_4(); break;
    case 5: task4_5(); break;
    case 6: task5_1(); break;
    default:
        std::cout << "Неверный номер задания\n";
    }

    return 0;
}