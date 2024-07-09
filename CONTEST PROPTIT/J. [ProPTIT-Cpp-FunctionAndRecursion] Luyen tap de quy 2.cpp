#include<bits/stdc++.h>
using namespace std;

int t,p,q;
long long dequy(int p,int q){
    if (p==q) return 0;
    if (p>q) return 2*dequy(p-q,q)+2;
    return 2*dequy(p,q-p)+1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        cin >> p >> q;
        cout << dequy(p,q) << "\n";
    }
}
