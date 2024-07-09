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
    int cnt=0;
	for(int i=0; i<s.size(); i++){
		if(a[s[i]]==0) cnt++, a[s[i]]++;
	}
	if(cnt%2==0) cout<<"CHAT WITH HER!";
	else cout<<"IGNORE HIM!";
}
