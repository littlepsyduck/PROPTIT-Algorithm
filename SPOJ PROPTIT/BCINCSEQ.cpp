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


int a[10005];
int main()
{
	fast();
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int cnt=1;
    int s=1;
	for(int i=0; i<n-1; i++){
	    if(a[i+1]>=a[i])	cnt++;
        else{
            if(cnt>s) s=cnt;
            cnt=1;
        }
				
	}
	cout<<s;
}
