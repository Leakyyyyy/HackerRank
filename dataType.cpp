#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int chisl;
    long dlin;
    char a;
    float drob;
    double mnogo;
    cin >> chisl >> dlin >> a >> drob >> mnogo;
    cout << chisl << endl << dlin << endl << a << endl;
    cout << fixed;
    cout.precision(3);
    cout << drob << endl;
    cout << fixed;
    cout.precision(9);
    cout << mnogo << endl;
    return 0;
}
