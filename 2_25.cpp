#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double temp = (a - c) * (a - c) + (b - d) * (b - d);
    temp = sqrt(temp);
    cout << fixed << setprecision(2) << temp << "\n";

    return 0;
}