#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin >> a;
    while(a){
        cout << a % 10;
        a /= 10;
        if(a != 0) cout << ",";
    }
    cout << "\n";

    return 0;
}