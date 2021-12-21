// TODO: Your code here
#include <iostream>
using namespace std;

int main() {
    int total, subtotal, temp;
    total = subtotal = temp = 0;
    bool old_zero = false;
    while (true) {
        cin >> temp;
        if (temp) {
            old_zero = false;
            subtotal += temp;
        } else {
            if (old_zero) {
                cout << "Total " << total << endl;
                break;
            }
            cout << "Subtotal " << subtotal << endl;
            total += subtotal;
            subtotal = 0;
            old_zero = true;
        }
    }
    return 0;
}