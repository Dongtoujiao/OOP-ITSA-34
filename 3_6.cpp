#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x >= 50 && x <= 70) cout << x << "\n";
        else cout << "100\n";
    }

    return 0;
}