#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int tong(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool smith(int n){
    int tong1 = tong(n); // tong chu so cua n
    int tong2 = 0;
    int tmp = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            while(n % i == 0){
                tong2 += tong(i);
                n /= i;
            }
        }
    }
    if(tmp == n) return false; // n la snt
    if(n > 1)
        tong2 += tong(n);
    return tong1 == tong2;
}


int main(){
    ll n; cin >> n;
    if(smith(n)) cout << "YES\n";
    else cout << "NO\n";
}