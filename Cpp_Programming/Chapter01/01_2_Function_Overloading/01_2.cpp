#include <iostream>
void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void swap(char *ch1, char *ch2) {
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}
void swap(double *db1, double *db2) {
    double temp = *db1;
    *db1 = *db2;
    *db2 = temp;
}
int main(void) {
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout << num1 << ' ' << num2 << std::endl;

    char ch1 = 'A', ch2 = '2';
    swap(&ch1, &ch2);
    std::cout << ch1 << ' ' << ch2 << std::endl;

    double db1 = 1.111, db2 = 5.555;
    swap(&db1, &db2);
    std::cout << db1 << ' ' << db2 << std::endl;
    return 0;
}