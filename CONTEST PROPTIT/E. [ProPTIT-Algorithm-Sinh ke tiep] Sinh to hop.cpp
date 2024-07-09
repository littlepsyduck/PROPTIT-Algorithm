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

//Sinh tổ hợp
//Các biến toàn cục và hàm khởi tạo cấu hình đầu
int n, k, a[Nmax]; //lưu cấu hình
int cnt; //check cấu hình cuối
void init(){
	for(int i=1; i<=k; i++){
		a[i]=i;
	}
}

//Hàm sinh cấu hình kế tiếp
void sinh(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i==0) cnt=1;
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
	}
}

void solve(){
    cin>>n>>k;
    cnt=0;
	init();
	while(cnt==0){
		for(int i=1; i<=k; i++){
			cout<<a[i];
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
