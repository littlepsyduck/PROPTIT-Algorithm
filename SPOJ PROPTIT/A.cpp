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

int check(string x){
	int l=0; 
	int r=x.size()-1;
    while(l<=r){
        if(x[l]!=x[r]){
		    return 0;
	    }
	    else{
	    	l++;
	    	r--;
	    }
    }
	return 1;
}


string a=".-";
string b="-...";
string c="-.-.";
string d="-..";
string e=".";
string f="..-.";
string g="--.";
string h="....";
string i="..";
string j=".---";
string k="-.-";
string l=".-..";
string m="--";
string n="-.";
string o="---";
string p=".--.";
string q="--.-";
string r=".-.";
string s="...";
string t="-";
string u="..-";
string v="...-";
string w=".--";
string x="-..-";
string y="-.--";
string z="--..";
string a1=".----";
string a2="..---";
string a3="...--";
string a4="....-";
string a5=".....";
string a6="-....";
string a7="--...";
string a8="---..";
string a9="----.";
string a0="-----";

string sss;
int main()
{
	fast();
	string ss;
	cin>>ss;
	if(ss.size()==0){
		cout<<"NO";
		return 0;
	} 
    string s0=" ";
	for(int ii=0; ii<ss.size(); ii++){
		if(ss[ii]=='a'||ss[ii]=='A'){
			sss+=a;
		}
		if(ss[ii]=='b'||ss[ii]=='B'){
			sss+=b;
		}
		if(ss[ii]=='c'||ss[ii]=='C'){
			sss+=c;
		}
		if(ss[ii]=='d'||ss[ii]=='D'){
			sss+=d;
		}
		if(ss[ii]=='e'||ss[ii]=='E'){
			sss+=e;
		}
		if(ss[ii]=='f'||ss[ii]=='F'){
			sss+=f;
		}
		if(ss[ii]=='g'||ss[ii]=='G'){
			sss+=g;
		}
		if(ss[ii]=='h'||ss[ii]=='H'){
			sss+=h;
		}
		if(ss[ii]=='i'||ss[ii]=='I'){
			sss+=i;
		}
		if(ss[ii]=='j'||ss[ii]=='J'){
			sss+=j;
		}
		if(ss[ii]=='k'||ss[ii]=='K'){
			sss+=k;
		}
		if(ss[ii]=='l'||ss[ii]=='L'){
			sss+=l;
		}
		if(ss[ii]=='m'||ss[ii]=='M'){
			sss+=m;
		}
		if(ss[ii]=='n'||ss[ii]=='N'){
			sss+=n;
		}
		if(ss[ii]=='o'||ss[ii]=='O'){
			sss+=o;
		}
		if(ss[ii]=='p'||ss[ii]=='P'){
			sss+=p;
		}
		if(ss[ii]=='q'||ss[ii]=='Q'){
			sss+=q;
		}
		if(ss[ii]=='r'||ss[ii]=='R'){
			sss+=r;
		}
		if(ss[ii]=='s'||ss[ii]=='S'){
			sss+=s;
		}
		if(ss[ii]=='t'||ss[ii]=='T'){
			sss+=t;
		}
		if(ss[ii]=='u'||ss[ii]=='U'){
			sss+=u;
		}
		if(ss[ii]=='v'||ss[ii]=='V'){
			sss+=v;
		}
		if(ss[ii]=='w'||ss[ii]=='W'){
			sss+=w;
		}
		if(ss[ii]=='x'||ss[ii]=='X'){
			sss+=x;
		}
		if(ss[ii]=='y'||ss[ii]=='Y'){
			sss+=y;
		}
		if(ss[ii]=='z'||ss[ii]=='Z'){
			sss+=z;
		}
		if(ss[ii]=='1'){
			sss+=a1;
		}
		if(ss[ii]=='2'){
			sss+=a2;
		}
		if(ss[ii]=='3'){
			sss+=a3;
		}
		if(ss[ii]=='4'){
			sss+=a4;
		}
		if(ss[ii]=='5'){
			sss+=a5;
		}
		if(ss[ii]=='6'){
			sss+=a6;
		}
		if(ss[ii]=='7'){
			sss+=a7;
		}
		if(ss[ii]=='8'){
			sss+=a8;
		}
		if(ss[ii]=='9'){
			sss+=a9;
		}
		if(ss[ii]=='0'){
			sss+=a0;
		}
       // if(ii<ss.size()-1) sss+=s0;
	}
    //cout<<sss;
	if(check(sss)==1) cout<<"YES";
	else cout<<"NO";
}