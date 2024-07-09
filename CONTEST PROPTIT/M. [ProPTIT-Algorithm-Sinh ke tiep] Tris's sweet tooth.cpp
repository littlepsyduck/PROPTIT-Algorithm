#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

int a[1000];
vector<int> v1, v2;

void Try(int i, int n, int s){
    if(i<=n){
        for(int j=0; j<=1; j++){
            s+=j*a[i];
            if(i==n){
                v2.pb(s);
            }
            else{
                Try(i+1, n, s);
            }
            s-=j*a[i];
        }
    }
}

void solve(){
    int n;
    int sum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        sum+=a[i];
    }
    Try(1, n/2, 0);
    v1=v2;
    v2.clear();
    Try(n/2+1, n, 0);
    sort(v2.begin(), v2.end());
    int res=1e9;
    for(auto i : v1){
        int val=*lower_bound(v2.begin(), v2.end(), sum/2-i);
        int anh=val+i;
        int em=sum-anh;
        res=min(res, abs(anh-em));
    }
    cout<<res;
}

int main()
{
	fast();
	solve();
}
