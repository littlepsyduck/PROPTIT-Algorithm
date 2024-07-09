#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define endl '\n'

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
	int A[5];
	int n=3;
    int x;
	for (int i = 1; i <= n; i++) {
		cin>>A[i];
	}
    for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if(A[j] < A[i]) {
				int temp =  A[i];
				A[i] = A[j];
				A[j] = temp; 
			} 
		} 
	}
	if(A[2]-A[1]>A[3]-A[2]){
        x=A[1]+(A[3]-A[2]);
    }
    else if(A[2]-A[1]<A[3]-A[2]){
        x=A[2]+(A[2]-A[1]);
    }
    else if(A[2]-A[1]==A[3]-A[2]&&A[3]+(A[3]-A[2])<=1000){
        x=A[3]+(A[3]-A[2]);
    }
    else 
        x=A[1]-(A[3]-A[2]);
    cout<<x;
}
