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
string s;
int n, a[Nmax];

void sinh(){
	int i=n-1; 
	while(i>=0&&s[i]=='1'){
		s[i]='0';
        i--;
	}
	if(i!=-1){
        s[i]='1';
    }
}

int main()
{
	fast();
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        n=s.size();
        sinh();
        cout<<s;
        cout<<"\n";
    }
	
}
