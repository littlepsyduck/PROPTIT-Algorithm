#include <bits/stdc++.h>
using namespace std;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

bool snt(long long n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) {
            return false;
        }
    return n > 1;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t>0){
		long long n;
		cin>>n;
		int a=sqrt(n); 
		if(snt(a) && a*a==n) cout<<"YES";
		else cout<<"NO";
		t--;
		if(t>0) cout<<"\n"; 
	} 
}
