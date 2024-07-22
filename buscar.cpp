#include <iostream>
#include <vector>

using namespace std;

bool buscar_aux(vector<int> v, int elem, int i) {
    if (i == v.size()) return false;
    else {
        int iesimo = v[i];
        return (iesimo == elem)  || buscar_aux(v, elem, i + 1);
    }
}

bool buscar(vector<int> v, int elem) {
    return buscar_aux(v, elem, 0);
}

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {};

    cout << boolalpha << "El numero 10 aparece en v1: " << buscar(v1, 10) << endl;
    cout << boolalpha << "El numero 2 aparece en v1: " << buscar(v1, 2) << endl;
    cout << boolalpha << "El numero 3 aparece en v2: " << buscar(v2, 3) << endl; 
} 