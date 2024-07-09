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

ll a[Nmax];
int main()
{
	fast();
	int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int begin=0, end=0, current=0;


    ll sum1=0, sum2=INT_MIN;
    for (int i=0; i<n; i++){
        sum1+=a[i];
        end=
        if(sum2>=sum1){
            if(sum2==sum1)
        }
        if (sum+a[i]<a[i]){
            current=i;
            sum=a[i];
        } else {
            sum+=a[i];
        }
        if (maxx<=sum) {
            if (maxx==sum&&sum+a[i+1]<a[i+1]){
                if(a[begin]+a[end]>a[current]+a[i]){
                    begin=current;
                    end=i;
                }
            }
            else{
                begin=current;
                end=i;
            }
            maxx=sum;
        }
    }
    cout<<a[begin]<<" "<<a[end]<<" "<<maxx;
}

