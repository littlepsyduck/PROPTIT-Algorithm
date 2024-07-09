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
    stack <char> st;
	while(getline(cin, s)){
		if(s==".") break;
		else{
            while(st.size()){
		        st.pop();
	        }
            int cnt=0;
	        for(int i=0; i<s.size(); i++){
		        if(s[i]=='(') st.push(s[i]);
		        if(s[i]=='[') st.push(s[i]);
		        if(s[i]==')'){
			        if(st.size()&&st.top()=='('){
				        st.pop();
			        }
			        else{
				        cout<<"no";
                        cnt++;
				        break;
			        }
		        }
		        if(s[i]==']'){
			        if(st.size()&&st.top()=='['){
				        st.pop();
			        }
			        else{
				        cout<<"no";
                        cnt++;
				        break;
			        }
		        }
	        }
            if(cnt==0){
                if(st.size()) cout<<"no";
		        else cout<<"yes";
            }
	        cout<<"\n";
        }
	}
}
