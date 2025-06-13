#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){

    int n, a;
    cin >> n;
    while(n--){
        cin >> a;
        if(a > 31) cout << "Value of more than 31\n";
        else cout << (long long)pow(2, a) << "\n";
    }

    return 0;
}