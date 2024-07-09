#include <bits/stdc++.h>
using namespace std;

 
int ktradoixung(char str[]){
	 int length=strlen(str);
		int a=0, b=length-1; 
		while(a,b){
			if(str[a]!=str[b]){
				return 0; 
			}
			a++;
			b--; 
		}
		return 1; 
} 
 
char str[1000005];
int main(){ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t>0){
		cin>>str;
		int length=strlen(str);
		for(int i=0; i<length; i++){
			if(str[i]=='A'|| str[i]=='B' || str[i]=='C' || str[i]=='a' || str[i]=='b' || str[i]=='c') str[i]=2;
			else if(str[i]=='W'|| str[i]=='X' || str[i]=='Y' || str[i]=='Z' || str[i]=='w' || str[i]=='x' || str[i]=='y' || str[i]=='z') str[i]=3; 
			else if(str[i]=='D'|| str[i]=='E' || str[i]=='F' || str[i]=='d' || str[i]=='e' || str[i]=='f') str[i]=4; 
			else if(str[i]=='G'|| str[i]=='H' || str[i]=='I' || str[i]=='g' || str[i]=='h' || str[i]=='i') str[i]=5; 
			else if(str[i]=='J'|| str[i]=='K' || str[i]=='L' || str[i]=='j' || str[i]=='k' || str[i]=='l') str[i]=6; 
			else if(str[i]=='M'|| str[i]=='N' || str[i]=='O' || str[i]=='m' || str[i]=='n' || str[i]=='o') str[i]=7; 
			else if(str[i]=='P'|| str[i]=='Q' || str[i]=='R' || str[i]=='S' || str[i]=='p' || str[i]=='q' || str[i]=='r' || str[i]=='s') str[i]=8; 
			else if(str[i]=='T'|| str[i]=='U' || str[i]=='V' || str[i]=='t' || str[i]=='u' || str[i]=='v') str[i]=9;    
		} 
		if(ktradoixung(str)==1) cout << "YES";
		else cout << "No"; 
		t--;
		if(t>0) cout <<"\n";  
	}
}
	
 
