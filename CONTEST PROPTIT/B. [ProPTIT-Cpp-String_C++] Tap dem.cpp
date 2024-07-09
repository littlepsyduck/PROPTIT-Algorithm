#include <bits/stdc++.h>
using namespace std;

int am, khong, duong;
int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n; i++){
		char s[50]; 
		cin >> s; 
		int l=strlen(s);
		if(s[0]=='-') am+=1;
		else if(s[0]=='0') khong+=1;
		else if(s[0]>='1' && s[0]<='9') duong+=1; 	
		 
	} 
	cout << am << " " << duong; 
} 
