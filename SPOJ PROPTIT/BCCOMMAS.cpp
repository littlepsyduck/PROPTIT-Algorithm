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
	string s;
	cin>>s;
	for(int i=s.size()-3;i>0;i-=3){
        s.insert(i,1,',');
    } 
	cout<<s;
}
