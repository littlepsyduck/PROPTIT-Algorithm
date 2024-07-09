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
	int t;
	cin>>t;
	while(t--)
	{
		string a, b, c;
    	cin >> a;
    	int l = a.size();
		transform(a.begin(), a.end(), a.begin(), ::tolower);
		for (int i = 0; i < l; i++)
        {
            if (a[i] >= 'a' && a[i] <= 'c')
                b += '2';
            else if (a[i] >= 'd' && a[i] <= 'f')
                b += '3';
            else if (a[i] >= 'g' && a[i] <= 'i')
                b += '4';
            else if (a[i] >= 'j' && a[i] <= 'l')
                b += '5';
            else if (a[i] >= 'm' && a[i] <= 'o')
                b += '6';
            else if (a[i] >= 'p' && a[i] <= 's')
                b += '7';
            else if (a[i] >= 't' && a[i] <= 'v')
                b += '8';
            else if (a[i] >= 'w' && a[i] <= 'z')
                b += '9';
        }
        for (int i = l - 1; i >= 0; i--)
        {
            if (a[i] >= 'a' && a[i] <= 'c')
                c += '2';
            else if (a[i] >= 'd' && a[i] <= 'f')
                c += '3';
            else if (a[i] >= 'g' && a[i] <= 'i')
                c += '4';
            else if (a[i] >= 'j' && a[i] <= 'l')
                c += '5';
            else if (a[i] >= 'm' && a[i] <= 'o')
                c += '6';
            else if (a[i] >= 'p' && a[i] <= 's')
                c += '7';
            else if (a[i] >= 't' && a[i] <= 'v')
                c += '8';
            else if (a[i] >= 'w' && a[i] <= 'z')
                c += '9';
        }
        if (b == c)
            cout<<"YES\n";
        else
            cout<<"NO\n";
	}
	
}
