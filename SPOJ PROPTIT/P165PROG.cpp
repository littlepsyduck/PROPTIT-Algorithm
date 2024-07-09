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

int check(string a, string b){
	if(a[0]=='-'&&b[0]!='-') return 0;
	if(a[0]!='-'&&b[0]=='-') return 1;
	if(a==b) return 1;
	int l1=a.size(), l2=b.size();
	if(a[0]=='-'&&b[0]=='-'){
		if(l1==l2) return a>b;
		else return l1>l2;
	}
	if(l1==l2) return a>b;
	else return l1>l2;
}

int main()
{
	fast();
	string s;
	cin>>s;
    if(check(s, "-128")&&check("127", s)){
        cout<<"byte";
        return 0;
    }
    if(check(s, "-32768")&&check("32767", s)){
        cout<<"short";
        return 0;
    }
    if(check(s, "-2147483648")&&check("2147483647", s)){
        cout<<"int";
        return 0;
    }
    if(check(s, "-9223372036854775808")&&check("9223372036854775808", s)){
        cout<<"long";
        return 0;
    }
    else{
        cout<<"BigInteger";
    }
}
