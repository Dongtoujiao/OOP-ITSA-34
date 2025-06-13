#include <bits/stdc++.h>
using namespace std;

long long arr[2000];

int main(){

    int n;
    cin >> n;
    arr[1] = 1;
    for(long long i = 2; i <= 1000; i++){
        for(long long j = i; j <= 1000 / i; j++){
            if(i * j <= 1000) arr[i * j] = 1;
        }
    }
    for(long long i = n - 1; i >= 0; i--){
        if(arr[i] == 0){
            cout << i << "\n";
            break;
        }
    }

    return 0;
}