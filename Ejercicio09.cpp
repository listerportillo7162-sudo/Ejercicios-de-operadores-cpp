#include <iostream>
using namespace std;
int main() {
    int A = 7, B = 3;
    int C = ++A + B--; // A=8, C=8+3=11, B=2
    cout << "A=" << A << " B=" << B << " C=" << C << endl; // SALIDA: 8, 2, 11
    return 0;
}
