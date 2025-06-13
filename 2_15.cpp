#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    double ans = 0;

    if(n < 800) ans = n * 0.9;
    else if(n < 1500) ans = n * 0.81;
    else ans = n * 0.9 * 0.79;
    cout << fixed << setprecision(1) << ans << "\n";

    return 0;
}