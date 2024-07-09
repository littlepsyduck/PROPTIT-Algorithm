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

struct hoi
{
    string t;
    double hpa;
    int y;
};

int main()
{
	fast();
	int n, k, m;
	cin>>n>>k>>m;
	double mp;
	cin>>mp;
	while(n--){
        string ten;
        double sum;
        cin>>ten>>sum;
        int z=0;
        hoi a[k+5];
        for(int i=1; i<=k; i++){
            cin>>a[i].t;
            a[i].y=0;
            for(int j=0; j<a[i].t.size(); j++){
                a[i].y+=a[i].t[j];
            }
            z+=a[i].y;
        }
        for(int i=1; i<=k; i++){
            a[i].hpa=(double)sum*a[i].y/z;
        }
        int b[m+5];
        for(int i=1; i<=m; i++){
            b[i]=i;
        } 
        while(1){
            double s1=0;
            for(int i=1; i<=m; i++){
                s1+=a[b[i]].hpa;
            }
            if(s1>mp){
                cout<<ten<<'\n';
                for(int i=1; i<=m; i++){
                    cout<<a[b[i]].t<<" "<<fixed<<setprecision(6)<<a[b[i]].hpa<<"\n";
                }
            }
            int i=m;
            while(b[i]==k-m+i&&i>0){
                i--;
            } 
            if(i==0){
                break;
            } 
            else{
                b[i]++;
                for(int j=i+1; j<=m; j++){
                    b[j]=b[j-1]+1;
                } 
            }
            
        }
    }
}
