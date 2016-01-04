#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vec;
    vec.push_back(2);
    cout << * vec.begin() << endl;
    cout << (* (vec.begin())) << endl;

    cout << * vec.begin() + 1 << endl;
    cout << (* (vec.begin())) + 1 << endl;
}