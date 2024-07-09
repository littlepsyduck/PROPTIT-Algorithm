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


char s[Nmax];
int main()
{
	fast();
	string a;
    cin>>a;
    int i=1;
    while(cin>>s[i]){
        i++;
    }
    i--;
    sort(s+1, s+i+1);
    int j=i;
    for(int i=0; i<a.size()&&j>=1; i++){
        if(a[i]<s[j]){
            a[i]=s[j];
            j--;
        }
    }
    cout<<a;
}
