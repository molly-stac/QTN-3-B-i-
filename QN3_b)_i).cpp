#include <iostream>
using namespace std;

int main() {
    double balance;
    int units;
    cout << "Enter the amount of money loaded onto your account (UGX): ";
    cin >> balance;

    cout << "Enter the number of water units consumed: ";
    cin >> units;

    cout << "You have loaded " << balance << " UGX onto your account." << endl;
    cout << "You have consumed " << units << " water units." << endl;

    return 0;
}

