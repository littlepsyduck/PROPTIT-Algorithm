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


string a[8]={"000","001","010","011","100","101","110","111"};
int main()
{
	fast();
	string s;
	cin >> s;
	while (s.size()%3!=0){
        s='0'+s;
    } 
	string s2="";
	for (int i=0;i<s.size();i++){
		s2=s2+s[i];
		if (i%3==2){
			for (int j=0;j<8;j++){
				if (s2==a[j]){
					cout<<j;
					s2="";
					break;
				}
			}
		}
	}
}
