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

void quickSort(int a[], int l, int r){
	int i = l, j = r;
    int pivot = a[(l+r)/2];
	while (i <= j){
		while (a[i] < pivot){
			i++;
		}
		while (a[j] > pivot){
			j--;
		}
		if (i <= j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (i < r){
		quickSort(a, i, r);
	}
	if (l < j){
		quickSort(a, l, j);
	}
}


int a[Nmax];
int main()
{
	fast();
	int n, k;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    quickSort(a,0,n-1);
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    cout<<a[k-1];
}
