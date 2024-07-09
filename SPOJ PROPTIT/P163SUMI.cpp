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



int main()
{
	fast();
	int n;
	cin>>n;
	if (n>=1 && n<=9)
	{
		cout<<n;
	}
	else if (n>=10 && n<=189)
	{
		int sttCS=(n-9);
		int sttS;
		if (sttCS%2==0) sttS=sttCS/2;
		else sttS=((sttCS)/2)+1;
 
		int sttH;
		if (sttS%10==0) sttH=sttS/10;
		else sttH=(sttS/10)+1;
 
		int sttC;
		if (sttS%10==0) sttC=9;
		else sttC=(sttS%10)-1;
 
		if (sttCS%2==0) cout<<sttC;
		else cout<<sttH;
	}
	else if (n>=190 && n<=1989)
	{
		int sttCS=(n-189);
		int sttS;
		if (sttCS%3==0) sttS=sttCS/3;
		else sttS=((sttCS)/3)+1;
		int sttR;
		if (sttS%100==0) sttR=sttS/100;
		else sttR=(sttS/100)+1;
 
		int sttSR;
		if (sttS%100==0) sttSR=100;
		else sttSR=sttS%100;
 
		int sttH=(sttSR-1)/10;
 
		int sttC=(sttSR-1)%10;
 
		if (sttCS%3==0) cout<<sttC;
		else if (sttCS%3==2) cout<<sttH;
		else cout<<sttR;
	} 
}
