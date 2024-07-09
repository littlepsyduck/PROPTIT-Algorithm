#include <bits/stdc++.h>
 using namespace std;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

struct sophuc 
{
	double a, b;
	
	
	friend sophuc operator + (const sophuc x, const sophuc y)
	{
		sophuc tong;
		tong.a = x.a + y.a;
		tong.b = x.b + y.b;
		return tong; 
	}
	friend sophuc operator - (const sophuc x, const sophuc y)
	{
		sophuc hieu;
		hieu.a = x.a - y.a;
		hieu.b = x.b - y.b;
		return hieu; 
	} 
	friend sophuc operator * (const sophuc x, const sophuc y)
	{
		sophuc tich;
		tich.a =(x.a * y.a) - (x.b * y.b);
		tich.b = (x.a * y.b) + (x.b * y.a);
		return tich; 
	}  
	friend istream& operator >> (istream& in, sophuc &x)
	{
		in >> x.a >> x.b;
		return in; 
	} 
	friend ostream& operator << (ostream& out, sophuc x)
	{
		if(x.a==0)
		{
			if(x.b==0){
				out << 0;
			}
			else if(x.b==1){
				out <<"i"; 
			} 
			else if(x.b==-1){
				out <<"-i"; 
			} 
			else{
				out << x.b <<"i";
			} 
		}
		else if(x.a>0)
		{
			if(x.b==0){
				out << x.a;
			}
			else if(x.b==1){
				out << x.a << " + i"; 
			} 
			else if(x.b==-1){
				out << x.a << " - i"; 
			}
			else if(x.b>0 && x.b!=1){
				out << x.a <<" + "<< x.b <<"i";
			}
			else{
				out << x.a <<" - "<< abs(x.b) <<"i";
			} 
		}
		else
		{
			if(x.b==0){
				out <<"-"<< abs(x.a);
			}
			else if(x.b==1){
				out << x.a <<" + i";
			}
			else if(x.b==-1){
				out << x.a <<" - i";
			}	
			else if(x.b>0 && x.b!=1){
				out << x.a <<" + "<< x.b <<"i";
			} 
			else{
				out << x.a <<" - "<< abs(x.b)<<"i";
			} 
		} 
		return out; 
	} 
};


int main()
{
	fast();
	int t;
	cin>>t;
	cin.ignore();
	while(t>0){
		sophuc a, b; 
		cin >> a >> b;
		sophuc c = a + b;
		sophuc d = a - b;
		sophuc e = a * b;
		cout << c <<"\n";
		cout << d <<"\n";
		cout << e;
		t--;
		if(t>0) cout <<"\n"; 
	} 
	  
}


