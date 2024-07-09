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

bool cmp1(string a, string b){
	if(a.size() < b.size()) return true;
	else if(a.size()==b.size() && a < b) return true;
	return false;
}

bool cmp2(string a, string b){
	a.erase(0,1), b.erase(0,1);
	if(a.size()<b.size()&&a>b) return false;
	else if(a.size()==b.size()&&a<b) return true;
	else if(a.size()>b.size() &&a<b) return true;
	return true;
}

void solve(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token = "";
	vector<int> v;
	vector<string> tu, am, duong;
	while(getline(ss, token, ',')){
		if(token[token.size()-1]=='.') token.erase(token.size()-1, 1);
		if(token[0]==' ') token.erase(0,1);
		if(token[0]=='-'){
			v.pb(-1);
			am.pb(token);
		}
		else if(token[0]>='0'&&token[0]<='9'){
			v.pb(0);
			duong.pb(token);
		}
		else{
			v.pb(1);
			tu.pb(token);
		}
	}
	sort(tu.begin(), tu.end());
	sort(duong.begin(), duong.end(), cmp1);
	sort(am.begin(), am.end(), cmp2);
	int i=0, j=0, l=0;
	for(int k=0; k<v.size(); k++){
		if(v[k]==0){
			cout<<duong[i];
			i++;
		}
        else if(v[k]==1){
			cout<<tu[j];
			j++;
		}
        else{
			cout<<am[l];
			l++;
		}
        if(k==v.size()-1) cout<<".";
        else cout<<", ";
	}
}

int main()
{
	fast();
	int t;
	cin>>t;
    cin.ignore();
	while(t--){
		solve();
		cout<<"\n";
	}
}
