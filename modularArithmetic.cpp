#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

using ll = long long;

ll exp(ll x, ll n, ll m) {
    assert(n >= 0);
    ll res = 1;
    x %= m;
    while(n > 0) {
        if(n & 1) {
            res = (res * x) % m;
        }
        x = (x * x) % m;
        n >>= 1;
    }
    return res;
}


int main() {
    int t;
    cout << "Enter number of tests: ";
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        cout << "Enter a and b to calculate a^b mod 1e9 + 7: ";
        cin >> a >> b;
        cout << exp(a, b, 1e9 + 7) << "\n";
    }
    return 0;
}