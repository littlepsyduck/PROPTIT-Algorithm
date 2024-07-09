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

float s(int ax, int ay, int bx, int by, int cx, int cy){
	return (abs((ax-bx)*(ay-cy)-(ax-cx)*(ay-by))/2)*1.0;
}

int main()
{
	fast();
	int ax, ay, bx, by, cx, cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	float sum=s(ax, ay, bx, by, cx, cy);
	cout<<fixed<<setprecision(1)<<s<<"\n";
	int n; 
	cin>>n;
	int cnt=0;
	for(int i=1; i<=n; i++){
		int x, y;
		cin>>x>>y;
		float s1=s(x,y,ax,ay,bx,by);
		float s2=s(x,y,bx,by,cx,cy);
		float s3=s(x,y,cx,cy,ax,ay);
		if(s1+s2+s3==sum) cnt++;
	}
	cout<<cnt;
}
