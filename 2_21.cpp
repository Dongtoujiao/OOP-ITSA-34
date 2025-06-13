#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, ans = 0;
    cin >> n;
    for(long long i = 1; i <= n; i++){
        if(i % 2 == 0 && i % 3 == 0 && i % 12 != 0)  ans += i;
    }
    cout << ans << "\n";

    return 0;
}