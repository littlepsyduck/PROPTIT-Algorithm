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

typedef unsigned long long ull;
typedef unsigned int uint;
uint p[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23 }; //Tạm thời chỉ cần 9 số nguyên tố vì n <= 1000;
uint c[9];
uint remain; // = n/((c0+1)*(c1+1)*...*(c(i-1) + 1))
ull result; // kết qủa, số nhỏ nhất có n ước
 
void find(int i, ull m) {
    m *= p[i];
    uint minx = min(c[i-1], remain-1);
    for( uint j = 1; j <= minx && m < result; ++j, m*=p[i]) {
            if(!(remain % (j+1))) {
                c[i] = j;
                remain /= (j+1);
                if(1 == remain) {
                         result = m; // cập nhật số nhỏ nhât
                 } else find(i+1, m);
                 // trả lại trạng thái
                 remain *= (j+1);
            }
     }
}

void solve(){
    cin>>remain;
    find(0,1);
    cout<<result<<"\n";
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	} 
}
