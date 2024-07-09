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



int main()
{
	fast();
	int m,n;
	while(cin>>m>>n)
	{
        cin.ignore();
		if(m==0&&n==0) return 0;
        else{
            string b;
            vector<string> a;
            for(int i=0; i<m; i++){
                cin>>b;
                a.pb(b);
            }
            int x[m+5][n+5]={};
            for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    if(a[i][j]=='*'){
                        x[i][j]++;
					    x[i][j+1]++;
					    x[i][j+2]++;
					    x[i+1][j]++;
					    x[i+2][j]++;
					    x[i+2][j+2]++;
					    x[i+1][j+2]++;
					    x[i+2][j+1]++;
                    }
                }
            }
            for(int i=1;i<=m;i++){
			    for(int j=1;j<=n;j++){
				    if(a[i-1][j-1]=='*') cout<<"*";
				    else cout<<x[i][j];
			    }
			    cout<<"\n";
		    }
        }
	} 
}
