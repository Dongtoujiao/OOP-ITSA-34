#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){

    int w, h;
    cin >> w >> h;
    double temp_h = (double)h / 100;
    double temp = w / (temp_h * temp_h);
    cout << fixed << setprecision(2) << temp << "\n";
    
    return 0;
}