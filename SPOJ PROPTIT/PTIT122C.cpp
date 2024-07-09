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

string cong(string x, string y)
{
    string s="";
    
    while (x.size()<y.size()){
        x='0'+x;
    } 
    while (x.size()>y.size()){
        y='0'+y;
    } 
 
    int du=0;
 
    for (int i=x.size()-1;i>=0;i--){
        int res=(x[i]-48)+(y[i]-48)+du;
        du=res/10;
        s=char(res%10+48)+s;
    }
    if (du!=0){
        s=char(du+48)+s;
    }
    return s;
}
 
string nan(string x, int y)
{
    string s="";
 
    int du=0;
    for (int i=x.size()-1;i>=0;i--){
        int res=(x[i]-48)*y+du;
        du=res/10;
        s=char(res%10+48)+s;
    }
    if (du!=0){
        s=char(du+48)+s;
    }
    return s;
}
 
string nhan(string x, string y)
{
    string s="",k="";
 
    for (int i=y.size()-1;i>=0;i--){
        s=cong(s,nan(x,y[i]-48)+k);
        k=k+"0";
    }
    while (s[0]=='0'&&s.size()>1){
        s.erase(0,1);
    } 
    return s;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		string s="1";
		for(int i=2; i<=n; i++){
			string c=to_string(i);
			s=nhan(s, c);
		}
		int cnt=0;
		for(int i=0; i<s.size(); i++){
			if(s[i]-'0'==x) cnt++;
		}
		cout<<cnt<<"\n";
	}
}
