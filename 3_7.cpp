#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x, ans;
    cin >> n;
    cin >> ans;
    n--;
    while(n--){
        cin >> x;
        ans = max(ans, x);
    }
    cout << ans << "\n";

    return 0;
}