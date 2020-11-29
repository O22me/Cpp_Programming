#include <iostream>

using namespace std;

void swap_pointer(int *(&ptr1), int *(&ptr2)) {
    int *temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main(void) {
    int number1 = 20;
    int number2 = 30;
    int *ptr1 = &number1;
    int *ptr2 = &number2;

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;

    swap_pointer(ptr1, ptr2);

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    
    return 0;
}