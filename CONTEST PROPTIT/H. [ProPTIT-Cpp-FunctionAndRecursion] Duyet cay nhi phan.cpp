#include<bits/stdc++.h>
using namespace std;

int n,a;
void trungtu(int n){
    if (n*2>a){
        cout << n << " ";
        return;
    }
    trungtu(n*2);
    cout << n << " ";
    trungtu(n*2+1);
}

void tientu(int n){
    if (n*2>a){
        cout << n << " ";
        return;
    }
    cout << n << " ";
    tientu(n*2);
    tientu(n*2+1);
}

void hautu(int n){
    if (n*2>a){
        cout << n << " ";
        return;
    }
    hautu(n*2);
    hautu(n*2+1);
    cout << n << " ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    a=pow(2,n)-1;
    trungtu(1);
    cout << "\n";
    tientu(1);
    cout << "\n";
    hautu(1);
}
