#include <iostream>

using namespace std;

int main() {
    //linea de codigo que mejora el rendimiento y la optimizacion de tiempo de compilacion para mejor resultado en los ejercicios de programación competitiva
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long mx = 0;
    long long ans = 0;

    if (n > 0) {
        cin >> mx;
        n--;
    }

    while (n > 0) {
        long long x;
        cin >> x;

        if (x < mx) {
            ans += (mx - x);
        } else {
            mx = x;
        }
        n--;
    }

    cout << ans << "\n";

    return 0;
}
