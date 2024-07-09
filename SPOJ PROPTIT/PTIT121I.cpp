#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

using namespace std;

typedef char xau[30];
const int Nmax = 1e6;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}



int main()
{
	fast();
	int Num,k;
    int *a;
    xau *x;
    cin>>Num;
    a=new int[Num+5];
    x=new xau[Num+5];
 
    for(int i=1;i<=Num;i++)
    {
        cin>>k>>a[i];
        cin>>x[i];
    }
    for(int i=1;i<=Num;i++)
    {
        cout<<i<<" ";
        for(char *p=x[i];*p;p++)
        {
            for(int j=1;j<=a[i];j++) cout<<*p;
        }
        cout<<"\n";
 
    }
  
}
