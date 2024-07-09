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


int a[25];
int main()
{
	fast();
	int n;
    int x=1;
	while(cin>>n)
	{
		if(n==0) return 0;
		else{
			for(int i=1; i<=n; i++){
				cin>>a[i];
			}
			int cnt=0;
			int res=0;
			for(int i=1; i<=n; i++){
				if(a[i]!=a[1]){
					cnt++;
					break;
				}
			}
            cout<<"Case "<<x++<<": ";
			if(cnt!=0){
				int cnt1 = 0;
				for (int i = 1; i <= 1000; i++)
				{
					res = i;
					int tg = a[1];
					for (int k = 1; k <= n; k++)
					{
						if (k != n)
						{	
							if (a[k] > a[k + 1])
								a[k] = a[k] - a[k + 1];
							else
								a[k] = a[k + 1] - a[k];
						}
						else
						{
							if (a[k] > tg)
								a[k] = a[k] - tg;
							else
								a[k] = tg - a[k];
						}
					}
					int cnt2 = 1;
					for (int k = 1; k <= n; k++)
					{
						if (a[k] != a[1])
						{
							cnt2 = 0;
							break;
						}
					}
					if (cnt2 == 1)
					{
						cnt1 = 1;
						break;
					}
				}
				if (cnt1 == 1)
					cout << res << " iterations" <<"\n";
				else
					cout << "not attained" <<"\n";
			}
			else
				cout << "0 iterations" <<"\n";
	
		}
	}
} 

