#include <bits/stdc++.h>
#include "testlib.h"
using namespace std;
 
#define foru(i,a,b) for(int i=a;i<=b;++i)
#define ford(i,b,a) for(int i=b;i>=a;--i)
#define ii pair<int,int>
#define ll long long
#define fi first
#define se second
#define fill(a,b) memset(a,b,sizeof(a))
 
const int TEST=30;

mt19937_64 rd;

long Rand(long lo,long hi)
{
    assert(lo <= hi);
    return rd() % (hi - lo + 1) + lo;
}

void gentest(){
    long t = Rand(21, 50);
    cout << t << "\n";
    for(int i=1; i<=t; i++){
        long n, l;
            n=Rand(1, 100000), l=Rand(1, 1000000000);
            cout << n << " " << l << "\n";
            long ai;
            for(int i=1; i<=n; i++){
                ai=Rand(0, l);
                cout<< ai <<" ";
        }
        
    }
}

int main(int argc,char *argv[]){
    registerGen(argc,argv,0);
    foru(i,1+20,TEST+20){
        const char*c =("Test"+to_string(i)+".in").c_str();
        FILE *f=freopen(c,"w",stdout);
        gentest();
        fclose(f);
    }
}