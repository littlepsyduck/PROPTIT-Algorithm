#include <bits/stdc++.h>
using namespace std;

void ten(char c[]){ 
	c[0]= toupper(c[0]); 
	for(int i=1;i<strlen(c);i++){ 
		c[i]= tolower(c[i]); 
	} 
} 
void HO(char c[]){ 
	for(int i=0;i<strlen(c);i++){ 
		c[i]=toupper(c[i]); 
	} 
}

int main()
{
	int t;
	scanf ("%d\n", &t);
	while (t>0){
		char s[1000], a[40][40];
		gets(s);
		int x=strlen(s), d=0;
		char *p=strtok(s, " ");
		while (p!=NULL){
			strcpy(a[d], p); 
			p=strtok(NULL," "); 
			d++; 	
		}
		HO(a[0]);
		for(int i=1; i<d; i++){
			ten(a[i]);
			cout<<a[i];
			if(i<d-1) cout <<" "; 
		} 
		cout<<", "<<a[0]; 
		t--;
		if (t>0) printf ("\n");
	}
}

