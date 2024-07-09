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

int N;
string a[100009];
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		cin >> N;
    int n = 2;
    a[0] = "0";
    a[1] = "1";
    int k = 0;
    while (a[k].length() < N){
        a[n++] = a[k] + "0";
        a[n++] = a[k] + "1";
        k++;
    }
    for (int i = k; i < n; i++)
        cout << a[i] << " ";
	cout<<"\n";
	} 
	
}
