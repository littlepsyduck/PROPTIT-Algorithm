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

vector< pair<int, int> > v;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}

int main()
{
	fast();
	int x, y, a, b;
    cin>>x>>y>>a>>b;
    for(int i=b; i<=y; i++){
        for(int j=max(a, i+1); j<=x; j++){
            v.pb({j, i});
        }
    }
    sort(v.begin(), v.end(), cmp);
    cout<<v.size()<<"\n";
    for(int i=0; i<v.size(); i++){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
}
