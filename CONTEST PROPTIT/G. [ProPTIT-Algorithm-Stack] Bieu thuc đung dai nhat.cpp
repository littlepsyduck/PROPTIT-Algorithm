#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'
#define pb push_back
#define bop pop_back
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define test int t; cin >> t; while(t--)

using namespace std;

const int Nmax = 1e6;

string s;
stack<int>st;
int cnt;
void solve(){
	cin>>s;
	int length=s.size();
	for(int i=0; i<length; i++){
		if(s[i]=='(') st.push(i);
		else{
			if(st.empty())
			cnt++;
			else st.pop();
		}
	}
	cout<<cnt+st.size();
}

int main()
{
	fast
	//test{
		solve();
	//	cout<<"\n";
	//}
}
