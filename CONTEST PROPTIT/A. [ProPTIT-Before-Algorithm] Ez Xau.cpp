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
	string s;
	cin>>s;
	for (int i=0; i<s.size(); i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]-=32;
        }
    }
	cout<<s;
}
