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

int main()
{
	fast();
	int n;
	cin>>n;
	if((n%4)%3!=0){
		cout<<-1;
		return 0;
	}
	int cnt1=n/4;
	int cnt2=0;
	if(n%4==3){
		cnt1--;
        cnt2++;
	}
    cnt2+=(cnt1/7)*4;
	cnt1%=7;
	for(int i=1; i<=cnt1; i++){
		cout<<4;
	}
	for(int i=1; i<=cnt2; i++){
		cout<<7;
	}
}
