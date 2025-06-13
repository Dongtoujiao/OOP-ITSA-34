#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, b, h;
    cin >> t >> b >> h;
    double temp = (t + b) * h;
    cout << "Trapezoid area:" << fixed << setprecision(1) << temp / 2 << "\n";

    return 0;
}