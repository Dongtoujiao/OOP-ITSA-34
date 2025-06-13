#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){

    int a;
    cin >> a;
    for(long long i = 0; i < 5; i++){
        int temp = a / (int)pow(10, 4 - i);
        temp %= 10;
        while(temp--) cout << "*";
        cout << "\n";
    }
    

    return 0;
}