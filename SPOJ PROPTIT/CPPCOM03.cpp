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

int n, k;
int a[30];
int cnt;
 
void in() {
	for (int i = 1; i <= n; i++)
 		a[i]=i;
}
 
void hoanvi() {
    int i=n-1;
    while(i>=1&&a[i]>a[i+1]){
        --i;
    }
    if(i==0){
        cnt=0;
    }
    else{
        int j=n;
        while(a[i]>a[j]) --j;
        swap(a[i], a[j]);
        reverse(a+i+1, a+n+1);

    }
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
        cnt=1;
        in();
        while(cnt){
            for(int i=1; i<=n ;i++){
                cout<<a[i];
            }
            cout<<" ";
            hoanvi();
        }
		cout<<"\n";
	} 
}
