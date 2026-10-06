#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long n;
    cin >> n;

    long long tot = (n * (n + 1)) / 2;

    for (int i = 0; i < n - 1; i++) {
        long x;
        cin >> x;
        tot -= x;
    }

    cout << tot << "\n";

    return 0;
}
