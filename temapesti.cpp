// temapesti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int numarPesti;

    // Citim numarul de pesti
    std::cout << "Introdu numarul de pesti: ";
    std::cin >> numarPesti;

    // Calculam cate ciorbe Trio se pot obtine
    int ciorbeTrio = numarPesti / 3;

    // Afisam rezultatul
    std::cout << "Numarul de ciorbe Trio pe care le puteti obtine este: " << ciorbeTrio << std::endl;

    return 0;
}

