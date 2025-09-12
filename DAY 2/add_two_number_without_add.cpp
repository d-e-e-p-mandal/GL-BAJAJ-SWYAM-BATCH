#include <iostream>
using namespace std;

int add(int a, int b) {
    while (b != 0) {
        unsigned carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}


int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Sum = " << add(num1, num2) << endl;
    return 0;
}