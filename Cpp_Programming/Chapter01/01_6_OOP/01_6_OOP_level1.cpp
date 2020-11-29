#include <iostream>

#define NAME_LENGTH 100

using namespace std;

typedef struct {
    int account_number;
    int money;
    char name[NAME_LENGTH];
}account;

void PrintMenu() {
    cout << "-----Menu-----" << endl;
    cout << "1. Open account" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Show all account" << endl;
    cout << "5. Exit program" << endl;
    cout << "Select : ";
}

int main(void) {
    int select;
    while (true) {
        PrintMenu();
        cin >> select;
        switch (select) {
            case 5: return 0;
        }
    }
    return 0;
}