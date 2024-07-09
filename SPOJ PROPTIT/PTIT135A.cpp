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



int x[5][5];
int f[105];
int main()
{
	fast();
	int a, b, c;
    cin>>a>>b>>c;
    int s=0;
	for(int i=0; i<3; i++){
		cin>>x[i][0]>>x[i][1];
	}
    for(int i=0; i<3; i++){
		for(int j=x[i][0]; j<x[i][1]; j++){
            f[j]++;
        }
	}
	for(int i=0; i<=100; i++){
		if(f[i]==1){
            s+=a;
        }
        else if(f[i]==2){
            s+=2*b;
        }
        else if(f[i]==3){
            s+=3*c;
        }
	}
	cout<<s;

}
