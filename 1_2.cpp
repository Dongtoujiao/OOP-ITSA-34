#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin >> a;
    cout << a / 1000 << "\n" << (a / 100) % 10 << "\n" << (a / 10) % 10 << "\n" << a % 10 << "\n";

    return 0;
}