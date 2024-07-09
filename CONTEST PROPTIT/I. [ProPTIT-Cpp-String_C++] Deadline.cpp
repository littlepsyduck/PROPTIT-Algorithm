#include <bits/stdc++.h>
 using namespace std;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

 
int main()
{
	fast();
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s1, s2, a;
		getline(cin, s1);
		getline(cin, s2);
		stringstream ss(s2);
		int cnt=0, vt=0;
		while(ss>>a)
		{ 
			if (a==s1)
			{
				cout<<vt+1<<' ';
				cnt=1;
				vt+=a.size();
			} 
		else
		{
			vt+=a.size();
		} 
		vt++;
	}
	if (cnt==0) cout<<-1;
	cout<<"\n";
	}
}

