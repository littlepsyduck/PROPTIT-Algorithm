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

int tong(int n)
{
    int s=0;
    int cnt=0;
    while(n>0)
    {
        int a=n%10;
        s+=a;
        n/=10;
        cnt++;
    }
    s+=pow(cnt, 2);
    return s;
}

int main()
{
	fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=tong(n);
        while(x>9)
        {
            n=x;
            x=tong(n);
        }
        cout<<x<<"\n";
    }
}
