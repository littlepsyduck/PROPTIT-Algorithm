#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

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
		int k;
		string a;
		cin>>k>>a;
		int l=a.size();
        int x=0;
		for(int i=l-2;i>=0;i--)
        {
			if(a[i]<a[i+1]){
				x=1;
				sort(a.begin()+i+1,a.end());
				for(int j=i+1;j<l;j++)
                {
					if(a[j]>a[i]){
						swap(a[i],a[j]);
						break;
					}
				}
				break;
			}
		}
		cout<<k<<" ";
		if(x==0) cout<<"BIGGEST";
		else cout<<a;
        cout<<"\n";
	}
}
