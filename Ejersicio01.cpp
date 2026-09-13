include <iostream>
using namespace std;
int main() {
    int X = 10, Y = 4;
    X = X + Y; // 14
    Y = X - Y; // 10
    X = X - Y; // 4
    cout << "X=" << X << " Y=" << Y << endl; // SALIDA: 4, 10
    return 0;
}
