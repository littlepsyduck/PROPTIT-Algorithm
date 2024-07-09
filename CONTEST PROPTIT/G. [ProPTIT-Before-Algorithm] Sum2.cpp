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

ll a[Nmax];
int main()
{
	fast();
	int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll maxx=INT_MIN, sum=0;
    int begin=0, end=0, current=0;
    for (int i=0; i<n; i++){
        if (sum+a[i]<a[i]){
            current=i;
            sum=a[i];
        } else {
            sum+=a[i];
        }
        if (maxx<sum) {
            begin=current;
            end=i;
            maxx=sum;
        }
    }
    cout<<begin+1<<" "<<end+1<<" "<<maxx;
}