#include <iostream>
#include <vector>

using namespace std;

int funcion_6(int n) {
    return 1;
}

int funcion_5(int n) {
    if (n == 1) return 1;
    else {
        int res = funcion_6(n - 1);
        return res * n;
    }
}

int funcion_4(int n) {
    if (n == 1) return 1;
    else {
        int res = funcion_5(n - 1);
        return res * n;
    }
}

int funcion_3(int n) {
    if (n == 1) return 1;
    else {
        int res = funcion_4(n - 1);
        return res * n;
    }
}

int funcion_2(int n) {
    if (n == 1) return 1;
    else {
        int res = funcion_3(n - 1);
        return res * n;
    }
}

int funcion_1(int n) {
    if (n == 1) return 1;
    else {
        int res = funcion_2(n - 1);
        return res * n;
    }
}

int main() {
    int n = 5;
    int res = funcion_1(n);
    cout << "El resultado de la funcion aplicado a n = " << n << " es: " << res << endl;
    return 0;
}