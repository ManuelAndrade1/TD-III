#include <iostream>
#include <vector>

using namespace std;

int sum_aux(const vector<int>& v, int i) {
    if (i == v.size()) return 0;
    else {
        int elem = v[i];
        return elem + sum_aux(v, i + 1);
    }
}

int sumatoria(const vector<int>& v) {
    return sum_aux(v, 0);
}


int main() {
    vector<int> v1 = {1, 2, 3, 4}; // Sumatoria: 10 , Productoria: 24
    vector<int> v2 = {1, 2, 3, 4, 5}; // Sumatoria: 15 , Productoria: 120
    vector<int> v3 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}; // 10 1s
    vector<int> v4 = {};

    cout << "La sumatoria de los elementos de v1 es: " << sumatoria(v1) << endl;
    cout << "La sumatoria de los elementos de v2 es: " << sumatoria(v2) << endl;
    cout << "La sumatoria de los elementos de v3 es: " << sumatoria(v3) << endl;
    cout << "La sumatoria de los elementos de v4 es: " << sumatoria(v4) << endl;  

}