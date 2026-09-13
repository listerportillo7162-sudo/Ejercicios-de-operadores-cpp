#include <iostream>
using namespace std;
int main() {
    int A = 12, B = 5;
    int C = A / B + A % B * 2; // 2 + 2*2 = 6
    cout << "C=" << C << endl; // SALIDA: 6
    return 0;
}
