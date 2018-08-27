#include <iostream>
#include "numbers.h"

int get_number() {
    int num;
    std::cout << "Number? ";
    std::cin >> num;
    return num;
}

int multiply(int x,int y) {
    return x * y;
}

void display_number(int z) {
    std::cout << "the result of multiplying those numbers is " << z << std::endl; 
}