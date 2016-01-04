#include <iostream>
using namespace std;
int main() {
    int prod = 2;
    for (int i = 1; i < 100; i++) {
        prod = prod * prod;
        cout << prod << endl;
    }
}