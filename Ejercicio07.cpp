#include <iostream>
using namespace std;
int main() {
    int A = 7, B = 3;
    int C = A * 2 + B % 2; // 14 + 1 = 15
    A = A + B * 3 - C / 2; // 7 + 9 - 7 = 9
    B = C % 3 + A / 2; // 0 + 4 = 4
    cout << "A=" << A << " B=" << B << " C=" << C << endl; // SALIDA: 9, 4, 15
    return 0;
}
