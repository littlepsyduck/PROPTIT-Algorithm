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

struct tregia
{
	string name;
	int dd, mm, yyyy;
    bool operator < (const tregia other)
	{
		if(yyyy == other.yyyy){
            if(mm==other.mm){
                return dd > other.dd;
            }
            else{
                return mm > other.mm;
            }
        }
		else
		return yyyy > other.yyyy;
	}
};

void input(tregia lst[] , int N)
{
    
	for(int i = 1 ; i <= N ; i++)
	{
		tregia x;
		cin>>x.name;
        cin >> x.dd >> x.mm >> x.yyyy;
        lst[i]=x;
    }
}

void output(tregia lst[] , int N)
{
    sort(lst+1, lst+N+1);
	cout << lst[1].name <<"\n";
	cout << lst[N].name <<"\n";
}

int main()
{
    fast();
    struct tregia lst[105];
    int N;
    cin >> N;
    input(lst, N);
    output(lst, N);
}