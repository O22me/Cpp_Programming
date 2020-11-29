#include <iostream>

int main(void) {
    int salary = 0;
    while (salary != -1) {
        std::cout << "Input salary(-1 to end) : ";
        std::cin >> salary;
        if (salary == -1) break;
        std::cout << "This month's salary : " << 50 + salary * 0.12 << std::endl;
    }
    std::cout << "Exit program" << std::endl;
    return 0;
}