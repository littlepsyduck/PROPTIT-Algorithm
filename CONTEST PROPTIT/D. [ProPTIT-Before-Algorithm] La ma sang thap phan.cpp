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

char s[Nmax];
ll num[1005];
int main()
{
	fast();
	gets(s);
	int l=strlen(s);
    num['I'] = 1;
	num['V'] = 5;
	num['X'] = 10;
	num['L'] = 50;
	num['C'] = 100;
	num['D'] = 500;
	num['M'] = 1000;
    ll sum=num[s[0]];
	for( int i = 1; i <=l; i++){
		if(s[i-1]=='I'&&s[i]=='V'){sum=sum-num[s[i-1]]+4;continue;} 
		if(s[i-1]=='I'&&s[i]=='X'){sum=sum-num[s[i-1]]+9;continue;}
		if(s[i-1]=='X'&&s[i]=='L'){sum=sum-num[s[i-1]]+40;continue;}
		if(s[i-1]=='X'&&s[i]=='C'){sum=sum-num[s[i-1]]+90;continue;}
		if(s[i-1]=='C'&&s[i]=='D'){sum=sum-num[s[i-1]]+400;continue;}
		if(s[i-1]=='C'&&s[i]=='M'){sum=sum-num[s[i-1]]+900;continue;}
		sum+=num[s[i]]; 	 
	} 
	cout<<sum; 
	
}