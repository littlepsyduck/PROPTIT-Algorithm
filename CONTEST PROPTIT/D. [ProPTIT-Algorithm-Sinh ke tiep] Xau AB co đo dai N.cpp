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
//Sinh nhị phân
//Các biến toàn cục và hàm khởi tạo cấu hình đầu
int n, a[Nmax]; //lưu cấu hình
int cnt; //check cấu hình cuối
void init(){
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}

//Hàm sinh cấu hình tiếp theo
void sinh(){
	int i=n; 
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}
	if(i==0) cnt=1;
	else a[i]=1;
	
}

void solve(){
	cin>>n;
	cnt=0;
	init();
	while(cnt==0){
		for(int i=1; i<=n; i++){
			if(a[i]){
				cout<<"B";
			}
			else{
				cout<<"A";
			}
		}
		cout<<" ";
		sinh();
	}
}

//Hàm main
int main()
{
	fast();
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	}
	
}
