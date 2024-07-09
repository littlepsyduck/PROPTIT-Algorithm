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

int b[Nmax], c[Nmax]; 
int a[Nmax], x[Nmax];
int main()
{
	fast();
	string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        b[s[i]]++;
    }
    for(int i='A'; i<='F'; i++){
        if(b[i]!=0){
            c[i]=b[i];
        }
    }
    for(int i='A'; i<='F'; i++){
        if(c[i]!=0) cin>>a[i];
    }
    for(int i='A'; i<='F'; i++){
        if(c[i]!=0) cin>>x[i];
    }
    int sum;
    cin>>sum;
    int ans=0;
    while(sum>0){
        int cnt1=0;
        for(int i='A'; i<='F'; i++){
            if(a[i]>=c[i]){
                a[i]-=c[i];
            }
            else{
                sum-=(c[i]-a[i])*x[i];
                a[i]=0;
                if(sum>=0){
                    continue;
                }
                else{
                    cnt1++;
                    break;
                }
            }
        }
        if(cnt1==0){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans;
}
