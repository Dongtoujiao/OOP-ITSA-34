#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, x;
    cin >> n;
    cout << "百元 " << n / 100 << "\n";
    n %= 100;
    cout << "十元 " << n / 10 << "\n";
    n %= 10;
    cout << "壹元 " << n << "\n";

    return 0;
}