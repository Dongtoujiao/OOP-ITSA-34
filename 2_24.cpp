#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if(a > b) swap(a, b);
        cout << (a + b) * (b - a + 1) / 2 << "\n";
    }

    return 0;
}