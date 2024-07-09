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
	int cnt1=n/3, cnt2=0;
	if(n%3==1) cnt1-=3, cnt2+=2;
	else if(n%3==2) cnt1-=1, cnt2+=1;
	if(cnt1<0){
		cout<<-1;
		return 0;
	}
	else{
		cnt1%=5;
		cnt2=(n-cnt1*3)/5;
		cout<<cnt1+cnt2;
	}
}
