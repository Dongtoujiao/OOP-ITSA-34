#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, a, b;
    cin >> n >> a >> b;
    cout << max(n, max(a, b)) << "\n";

    return 0;
}