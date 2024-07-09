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
	int a, b, c;
	while(cin>>a>>b>>c)
	{
		if(a==0&&b==0&&c==0) return 0;
		else{
            if(pow(a, 2)+pow(b, 2)!=pow(c, 2)){
				if(pow(b, 2)+pow(c, 2)!=pow(a, 2)){
					if(pow(c, 2)+pow(a, 2)!=pow(b, 2)){
                        cout<<"wrong"<<"\n";
                    }
                    else cout<<"right"<<"\n";
				}
                else cout<<"right"<<"\n";
			}
            else cout<<"right"<<"\n";
		}
			
    }
			
} 
