#include <iostream>
using namespace std;
int main() {
    int A = 10, B = 4;
    int C = A % B * 3 + B - 1; // 2*3+4-1 = 9
    cout << "C=" << C << endl; // SALIDA: 9
    return 0;
}
