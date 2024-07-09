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
	int a[10],cnt=0;
	for(int i=0;i<8;i++) cin>>a[i];
	for(int i=0;i<7;i++){
		if(a[i]>=a[i+1]){
			cnt++;
			break;
		}
	}
	if(cnt==0) cout<<"ascending";
	else{
		for(int i=0;i<7;i++){
			if(a[i]<=a[i+1]){
				cnt--;
                break;
			}
		}
		if(cnt!=0) cout<<"descending";
		else cout<<"mixed";
	}
}
