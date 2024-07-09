#include <bits/stdc++.h>
using namespace std;

int main(){
	char str[100005];
	gets(str);
	int length=strlen(str);
	int nN=0, nNA=0, nNAM=0;
	for(int i=0; i<length; i++){
		if(str[i]=='N'){
			nN+=1; 
		} 
		if(str[i]=='A'){
			nNA+=nN; 
		} 
		if(str[i]=='M'){
			nNAM+=nNA; 
		} 
	}
	cout << nNAM; 
} 
