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
	string s;
	while(cin>>s)
	{
		if(s=="#") return 0;
		int y, n, a, p;
        y = n = a = p = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'Y')
                y++;
            if (s[i] == 'N')
                n++;
            if (s[i] == 'A')
                a++;
            if (s[i] == 'P')
                p++;
        }
		if(a>=(s.size()+1)/2) cout<<"need quorum"<<"\n";
		else if(y>n) cout<<"yes"<<"\n";
		else if(y<n) cout<<"no"<<"\n";
		else cout<<"tie"<<"\n";
	}
}
