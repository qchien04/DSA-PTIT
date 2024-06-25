#include <iostream>

void swapNumbers(int* num1, int* num2) {
    int *temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int a = 5, b = 10;
    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;
    
    swapNumbers(&a, &b);
    
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;
    
    return 0;
}
