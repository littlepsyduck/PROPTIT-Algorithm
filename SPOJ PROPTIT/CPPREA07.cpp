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

bool cmp(string a, string b){
    return a+b>b+a;
}


int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        cin.ignore();
        vector<string> a(n);
		for(int i=0; i<a.size(); i++){
			cin>>a[i];
		}
		sort(a.begin(), a.end(), cmp);
		for(int i=0; i<a.size(); i++){
            cout<<a[i];
        }
		cout<<"\n";
	} 
}
