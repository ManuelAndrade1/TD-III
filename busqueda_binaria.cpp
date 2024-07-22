#include <iostream>
#include <vector>

using namespace std;

bool buscar_aux(const vector<int> & v, int elem, int d, int h) {
    if (d >= h) return false; 
    else if (d == h - 1) return v[d] == elem;
    else {
        int mid = (d + h) / 2;
        if (v[mid] == elem) return true;
        else if (v[mid] > elem) return buscar_aux(v, elem, d, mid);
        else return buscar_aux(v, elem, mid, h);
    }
}

bool buscar_dq(const vector<int> &v, int elem, int d, int h) {
    if (d >= h) return false;
    else if (d == h - 1) return v[d] == elem;
    else {
        int mid = (d + h) / 2;
        return buscar_dq(v, elem, d, mid) || buscar_dq(v, elem, mid, h);
    }
}

bool buscar(const vector<int> &v, int elem) {
    return buscar_dq(v, elem, 0, v.size());
}

int main() {
    vector<int> v1 = {}; 
    for (int i = 1; i <= 10; i++) v1.push_back(i);

    cout << "El numero 2 esta en v1: " << boolalpha << buscar(v1, 2) << endl;
    cout << "El numero 11 esta en v1: " << boolalpha << buscar(v1, 11) << endl;
}