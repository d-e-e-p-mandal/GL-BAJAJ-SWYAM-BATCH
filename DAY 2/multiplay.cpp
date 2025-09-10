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


int multiply(int a, int b) {
    int result = 0;

    bool negative = false;
    if (a < 0) {
        a = -a; negative = !negative; 
    }
    if (b < 0) { 
        b = -b; negative = !negative; 
    }

    while (b > 0) {

        if (b & 1) {
            result = add(result, a);
        }


        a <<= 1;   
        b >>= 1;   
    }

    return negative ? -result : result;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Product = " << multiply(num1, num2) << endl;
    return 0;
}