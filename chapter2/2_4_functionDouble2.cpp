// 2_4_functionDoubleNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int readValue() {
    int num{};
    std::cout << "Enter Number: ";
    std::cin >> num;
    return num;
}

int doubleNumber(int numberInput) {
    
    return numberInput * 2;
}

int main()
{
    int num{ readValue() };

    std::cout << doubleNumber(num);
    
}