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
	int n;
	while(cin>>n){
		if(n==0) return 0;
		else{
            string s1, s2, s;
		    cin>>s1>>s2>>s;
		    int cnt=1;
		    while(cnt<=50){
			    string ss="";
			    for(int i=0; i<s1.size(); i++){
				    ss=ss+s2[i]+s1[i];
			    }
			    if(ss==s){
				    cout<<cnt<<"\n";
				    break;
			    }
			    for(int i=0; i<ss.size()/2.0; i++){
				    s1[i]=ss[i];
				    s2[i]=ss[i+(ss.size()/2.0)];
			    }
			    cnt++;
		    }
		    if(cnt>50) cout<<-1<<"\n";
	    }
    }
}
