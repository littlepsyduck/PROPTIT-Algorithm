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

int BinToDec(ll binaryNumber)
{
    int p = 0;
    int decNumber = 0;
    while (binaryNumber > 0)
    {
        decNumber += (binaryNumber % 10) * pow(2, p);
        ++p;
        binaryNumber /= 10;
    }
    return decNumber;
}

int DecToOct(int number){
    int p = 0;
    int octNumber = 0;
    while(number > 0){
        octNumber += (number % 8) * pow(10, p);
        p++;
        number /= 8;
    }
    return octNumber;
}

int main()
{
	fast();
	string a;
	cin >> a;
    
	while (a.length() % 3 != 0)
		a = '0' + a;
	for (int i = 0; i < a.size(); i += 3)
	{
		string b = {};
		for (int j = i; j < i + 3; j++)
		{
            b += a[j];
        }	
		if (b == "000") cout <<0;
		else if (b == "001") cout <<1;
		else if (b == "010") cout <<2;
		else if (b == "011") cout <<3;
		else if (b == "100") cout <<4;
		else if (b == "101") cout <<5;
		else if (b == "110") cout <<6;
		else if (b == "111") cout <<7;
	}
}
