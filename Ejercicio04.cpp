#include <iostream>
using namespace std;
int main() {
    int Y = 4, X = 4;
    Y = ++X; // X=5, Y=5
    X = X++ + ++Y; // X = 5 + 6 = 11, Y=6
    cout << "X=" << X << " Y=" << Y << endl; // SALIDA: 11, 6
    return 0;
}
