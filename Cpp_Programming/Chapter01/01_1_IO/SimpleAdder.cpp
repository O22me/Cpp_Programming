#include <iostream>

int main(void) {
    int val1;
    std::cout << "First number input: ";
    std::cin >> val1;

    int val2;
    std::cout << "Second number input: ";
    std::cin >> val2;

    int result = val1 + val2;
    std::cout << "Sum result : " << result << std::endl;
    return 0;
}