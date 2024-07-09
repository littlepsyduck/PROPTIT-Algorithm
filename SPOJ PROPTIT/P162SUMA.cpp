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
int b[Nmax];
vector< pair <int, int> > v;
int main()
{
	fast();
	for(int i=1; i<=6; i++){
        cin>>a[i];
    }
    sort(a+1, a+6+1);
    a[7]=10;
    int cnt=1;
    for(int i=2; i<=7; i++){
        if(a[i]==a[i-1]){
            cnt++;
        }
        else{
            v.pb({a[i-1], cnt});
            cnt=1;
        }
    }
    int cnt0=0;
    for(int i=0; i<v.size(); i++){
        cnt0=max(cnt0, v[i].second);
    }
    if(cnt0<4){
        cout<<"Alien";
        return 0;
    }
    if(cnt0>4){
        if(cnt0==6) cout<<"Elephant";
        else cout<<"Bear";
        return 0;
    }
    if(v.size()==2) cout<<"Elephant";
    else cout<<"Bear";
}
