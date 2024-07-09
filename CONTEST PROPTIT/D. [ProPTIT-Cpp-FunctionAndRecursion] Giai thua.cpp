#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,s;
    cin>>n;
    long long t=1;
    for(long long i=1; i<=n; i++){
        t=t*i%1000000007;
        s=t%1000000007;
    }
    cout<<s;
}
