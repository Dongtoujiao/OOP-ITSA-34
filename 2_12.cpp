#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    cout << "NT10=" << n / 10 << "\n";
    n %= 10;
    cout << "NT5=" << n / 5 << "\n";
    n %= 5;
    cout << "NT1=" << n << "\n";
    
    return 0;
}