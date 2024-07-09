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

int count_divisors(int N)
{
    int cnt = 0;
    for (int i=1; i<=sqrt(N); i++)
        if (N % i == 0)
        {
            if(i%2==0)
			++cnt;
            int j = N / i;
            if (j != i){
				if(j%2==0)	++cnt;
			}  
			
        }

    return cnt;
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
		cout<<count_divisors(n);
		cout<<"\n";
	} 
}
