#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(long long i = 1; i <= n; i += 2){
        if(i != 1) cout << " ";
        cout << i;
    }
    cout << "\n";

    return 0;
}