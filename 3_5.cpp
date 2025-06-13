#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    if(n < 10) cout << n * 100 << "\n";
    else if(n < 30) cout << n * 90 << "\n";
    else if(n < 100) cout << n * 80 << "\n";
    else cout << n * 70 << "\n";

    return 0;
}