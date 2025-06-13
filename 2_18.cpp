#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    cout << n / 86400 << " days\n";
    n %= 86400;
    cout << n / 3600 << " hours\n";
    n %= 3600;
    cout << n / 60 << " minutes\n";
    n %= 60;
    cout << n << " seconds\n";

    return 0;
}