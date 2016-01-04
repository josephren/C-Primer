#include <iostream>
using namespace std;
int main() {
    cout << -30 * 3 + 21 / 5 << " expected " << -86 << endl;
    cout << -30 + 3 * 21 / 5 << " expected " << -18 << endl;
    cout <<  30 / 3 * 21 % 5  << " expected " << 0 << endl;
    cout << -30 / 3 * 21 % 4 << " expected " << -2 << endl;
}