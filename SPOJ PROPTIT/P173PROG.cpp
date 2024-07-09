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
    int t;
    cin>>t;
    while(t--){
        string s;
    cin>>s;
    if(next_permutation(s.begin(), s.end())) cout<<s;
    else cout<<"BIGGEST";
    cout<<"\n";
    }
}
	
