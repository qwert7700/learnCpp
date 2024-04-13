// 2_4_functionDouble.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int getUserInput() {

    int num{};
    std::cout << "Please enter a number: ";
    std::cin >> num;

    return num;
}

void doubleNumber(int num) {
    std::cout << num * 2 << '\n';
}
int main()
{
    /*Option 1 */
    //int num{ getUserInput() }
    //doubleNumber(num);

    /*Option 2 */
    // doing it this way is more concise but also makes it slighty less understandable
    doubleNumber(getUserInput());
}