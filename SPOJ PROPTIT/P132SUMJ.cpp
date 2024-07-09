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


int a[Nmax];
int main()
{
	fast();
	string s;
    cin>>s;
    int l=s.size();
    for(int i=0; i<l; i++){
        a[i+1]=s[i]-'0';
    }
    int t=0, r=0;
    for(int i=l; i>=2; i--){
        int cnt=0;
        for(int j=i-1; j>=1; j--){
            if(a[i]>a[j]){
                t=j;
                r=i;
                cnt++;
                break;
            }
        }
        if(cnt!=0) break;
    }
    if(t==0&&r==0) cout<<0;
    else{
        swap(a[t], a[r]);
        sort(a+t+1, a+l+1);
        for(int i=1; i<=l; i++){
            cout<<a[i];
        }
    }

}
