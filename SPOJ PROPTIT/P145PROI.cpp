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


int main()
{
	fast();
	string s;
    cin>>s;
    int h=0, t=0, n=0, j=0;
    ll cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a'&&s[i]<='z') t++;
        else if(s[i]>='0'&&s[i]<='9') n++;
        else h++;
        while(t>0&&n>0&&h>0&&i-j+1>=6){
            cnt+=s.size()-i;
            if(s[j]>='a'&&s[j]<='z') t--;
            else if(s[j]>='0'&&s[j]<='9') n--;
            else h--;
            j++;
        }
    }
    cout<<cnt;
}
