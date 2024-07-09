#include <bits/stdc++.h>
using namespace std;


int a[1005];
char str[100005];
int main(){
	int t;
	cin>>t;
	while(t>0){
		cin>>str;
		long long s=0;
		long long sum=0; 
		int length=strlen(str); 
		for(int i=0; i<length; i++){
			if(str[i]>='A' && str[i]<='Z'){
				a[(int)str[i]]++;
				sum+=s; 
				s=0;	
			}else{
				s=s*10+(str[i]-48);  
			}  
		}
		sum+=s; 
		for(int i='A'; i<='Z'; i++){
			while(a[i]>0){
				cout << (char)i;
				a[i]--; 
			} 
		}
		cout << sum;
		t--;
		if (t>0) printf ("\n");
	} 
} 
