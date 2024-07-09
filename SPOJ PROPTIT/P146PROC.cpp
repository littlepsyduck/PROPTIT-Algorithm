#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

using namespace std;

const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}


int a[25];
int main()
{
	fast();
    int n=4;
	int a[n+5];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    if(a[0]==a[1]){
        if(a[1]==a[2]){
            if(a[2]==a[3]) cout<<3;
            else cout<<2;
        }
        else{
            if(a[2]==a[3]) cout<<2;
            else cout<<1;
        }
    }
    else{
        if(a[1]==a[2]){
            if(a[2]==a[3]) cout<<2;
            else cout<<1;
        }
        else{
            if(a[2]==a[3]) cout<<1;
            else cout<<0;
        }
    }
} 

