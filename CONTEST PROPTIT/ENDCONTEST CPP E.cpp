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

struct hoahau
{
	string name;
	double height, weight;
    int id;
    bool operator < (const hoahau other)
	{
		if(height/weight == other.height/other.weight){
            if(height == other.height){
                return id < other.id;
            }
            else{
                return height > other.height;
            }
        }
		else
		    return height/weight > other.height/other.weight;
	}
};

void input(hoahau lst[] , int N)
{
    
	for(int i = 1 ; i <= N ; i++)
	{
		hoahau x;
        cin.ignore();
		getline(cin, x.name);
        cin >> x.height >> x.weight;
        x.id = i;
        lst[i] = x;
    }
}

void output(hoahau lst[] , int N)
{
    sort(lst+1, lst+N+1);
	for(int i = 1 ; i <= N ; i++)
	{
        cout << "SBD " << setfill('0') << setw(4) << lst[i].id << ": ";
		cout << lst[i].name << ", " << lst[i].height << ", " << lst[i].weight << "\n";
	}
}

int main()
{
    fast();
    struct hoahau lst[10005];
    int N;
    cin >> N;
    input(lst, N);
    output(lst, N);
}