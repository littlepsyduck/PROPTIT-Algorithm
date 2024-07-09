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

void xuat(long k)
{
    k--;
    if(k==0){
		cout<<4;
		return;
	}
    if(k==1){
		cout<<7;
		return;
	}
    xuat(k/2);
    if(k%2==0){
		cout<<4;
	}
    if(k%2==1){
		cout<<7;	
	}
}
 
int main()
{
	fast();
	int k;
    cin>>k;
    xuat(k); 
}
