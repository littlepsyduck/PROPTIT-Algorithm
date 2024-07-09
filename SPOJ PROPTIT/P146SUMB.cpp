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
	int a;
	scanf("%d", &a); 
    for(int i = 0-a; i <= a; i++) {
        for(int j = 0-a; j <= a; j++) {
            if(abs(i)+abs(j)<=a) cout<<a-abs(i)-abs(j)<<" ";
            else cout<<"  ";
        } 
        cout<<"\n";
    }
}
