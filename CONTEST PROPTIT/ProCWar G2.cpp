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


vector<int> v;
int main()
{
	fast();
	string n;
	int k;
	cin>>n>>k;
    string n0=n;
    while(k--){
        int cnt=0;
        for(int i=0; i<n.size()-1; i++){
            if(n[i]>n[i+1]){
                n.erase(n.begin() + i);
                cnt=1;
                break;   
            }
        }
        if(cnt==0){
            n.erase(n.begin()+n.size()-1);
        }
    }
    cout<<n<<"\n";
    int j=0;
    for(int i=0; i<n0.size(); i++){
        if(n0[i]==n[j]) j++;
        else cout<<n0[i]<<" ";
    }
}
