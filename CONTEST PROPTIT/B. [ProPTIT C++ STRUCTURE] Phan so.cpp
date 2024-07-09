#include <bits/stdc++.h>
 using namespace std;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

int ucln (long long a, long long b)
{
	while(b!=0)
	{
		long long tmp = a%b;
		a=b;
		b=tmp;
	}
	return a;
}

int bcnn (long long a, long long b)
{
	return (a*b)/ucln(a, b);
}

struct phanso 
{
	long long a, b;
	
	
	friend phanso operator + (const phanso x, const phanso y)
	{
		phanso tong;
		tong.a = x.a*(bcnn(x.b, y.b)/x.b) + y.a*(bcnn(x.b, y.b)/y.b);
		tong.b = bcnn(x.b, y.b);
		int c = ucln(tong.a, tong.b);
		tong.a=(tong.a)/c;
		tong.b=(tong.b)/c;
		return tong; 
	}
	friend phanso operator - (const phanso x, const phanso y)
	{
		phanso hieu;
		hieu.a = x.a*(bcnn(x.b, y.b)/x.b) - y.a*(bcnn(x.b, y.b)/y.b);
		hieu.b = bcnn(x.b, y.b);
		int c = ucln(hieu.a, hieu.b);
		hieu.a=(hieu.a)/c;
		hieu.b=(hieu.b)/c;
		return hieu; 
	} 
	friend phanso operator * (const phanso x, const phanso y)
	{
		phanso tich;
		tich.a = x.a * y.a;
		tich.b = x.b * y.b;
		int c = ucln(tich.a, tich.b);
		tich.a=(tich.a)/c;
		tich.b=(tich.b)/c;
		return tich; 
	}  
	friend phanso operator / (const phanso x, const phanso y)
	{
		phanso thuong;
		thuong.a = x.a * y.b;
		thuong.b = x.b * y.a;
		int c = ucln(thuong.a, thuong.b);
		thuong.a=(thuong.a)/c;
		thuong.b=(thuong.b)/c;
		return thuong; 
	}  
	
	friend istream& operator >> (istream& in, phanso &x)
	{
		in >> x.a >> x.b;
		return in; 
	} 
	friend ostream& operator << (ostream& out, phanso x)
	{
		if(x.a==0)
		{	
			out << 0;
		} 
		else if(x.a<0)
		{
			if(x.b<0){
				out << abs(x.a) <<"/"<< abs(x.b);
			}
			else if(x.b>0){
				out << x.a <<"/"<< x.b; 
			} 
			else if(x.b==-1){
				out << abs(x.a); 
			}
			else if(x.b==1){
				out << x.a;
			} 
		}
		else
		{
			if(x.b==1){
				out << x.a;
			}
			else if(x.b==-1){
				out <<"-"<< x.a;
			}	
			else if(x.b>0){
				out << x.a <<"/"<< x.b;
			} 
			else{
				out <<"-"<< x.a <<"/"<< abs(x.b);
			} 
		} 
		return out; 
	} 
};


int main()
{
	fast();
	phanso a, b; 
	cin >> a >> b;
	phanso c = a + b;
	phanso d = a - b;
	phanso e = a * b;
	phanso f = a / b;
	cout << c <<" "<< d <<" "<< e <<" "<< f;
	  
}


