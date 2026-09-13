#include <iostream>
using namespace std;
int main() {
    int A = 5, B = 10;
    int C = (A++ + ++B) * 2; // (5 + 11)*2 = 32
    cout << "A=" << A << " B=" << B << " C=" << C << endl; // SALIDA: 6, 11, 32
    return 0;
}
