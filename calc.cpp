#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;
    cout << a << "^" << b << " = " << pow(a, b) << endl;
    return 0;
}
