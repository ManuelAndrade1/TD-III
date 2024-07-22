#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 1) return 1;
    else {
        return factorial(n - 1) * n;
    }
}

int factorial_ciclica(int n) {
    int res = 1;
    while (n > 1) {
        res = res * n;
        n--;
    }
    return res;
}

int main() {
    cout << "El factorial de 5 es: " << factorial(5) << endl;
    cout << "El factorial de 6 es: " << factorial(6) << endl;

    cout << "El factorial de 5 es: " << factorial_ciclica(5) << endl;
    cout << "El factorial de 6 es: " << factorial_ciclica(6) << endl;
    return 0;
}