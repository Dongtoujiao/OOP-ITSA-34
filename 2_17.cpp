#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, s;
    cin >> n >> s;
    double ans = 0;

    if(n <= 60) ans += n * s;
    else ans += 60 * s;
    n = max(0, n - 60);

    if(n <= 60) ans += n * s * 1.33;
    else ans += 60 * s * 1.33;
    n = max(0, n - 60);

    ans += n * s * 1.66;
    cout << fixed << setprecision(1) << ans << "\n";

    return 0;
}