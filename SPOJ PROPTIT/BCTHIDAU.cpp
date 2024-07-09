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
string s;
int main()
{
	fast();
	int n;
	cin>>n;
    int cnt=0, x=Nmax;
	for(int i=0; i<n; i++)
	{

		string a;
        cin>>a;
        int b[5][2], c=0, xx=0;
        for(int i=0; i<4; i++){
            for(int j=0; j<2; j++){
                cin>>b[i][j];
            }
        }
        for(int i=0; i<4; i++){
            if(b[i][1]!=0){
                c++;
                xx+=b[i][1]+(b[i][0]-1)*20;
            }
        }
        if(c>cnt){
            cnt=c;
            x=xx;
            s=a;
        }
        else if(c==cnt){
            if(x>xx){
                x=xx;
                s=a;
            }
        }
	}
	cout << s<<" "<<cnt<<" "<<x; 
		 
}
