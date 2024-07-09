#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007
#define foru(i,a,b) for(int i = a;i <= b;i++) 
#define ford(i,a,b) for(int i = a;i >= b;i--)
#define endl '\n'

using namespace std;

const int Nmax = 1e6;

int Prime[Nmax+1];
int p[Nmax + 1];
void Sieve(){
    Prime[1] = 1;
    for(int i = 2;i <= Nmax;i++){
        Prime[i] = 2;
    }
    for(int i = 2;i <= Nmax;i++){
        for(int j = i * 2;j <= Nmax;j += i){
            Prime[j]++;
        }
    }
    for(int i = 1;i <= Nmax;i++){
        int soUoc = Prime[i];
        if(Prime[soUoc] == 2){
            p[i] = 1;
        }
    }
    for(int i = 1;i <= Nmax;i++){
        p[i] = p[i] + p[i - 1];
    }
}

void solve(){
    int a,b;
    cin >> a >> b;
    cout << p[b] - p[a - 1] << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Sieve();
    int t = 1;
    cin >> t;cin.ignore();
    while(t--){
        solve();
    }
    return 0;
}
//
//                            .:^~!7?JJJJYYYYJJJJ?7!~^:.                           
//                       .^~7?JYYYYYYYYYYYYYYYYYYYYYYYYJ?7~^.                      
//                   .^!?JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ?!^.                  
//                .^7JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ7^.               
//              :!JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ!:             
//            ^?YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY?^           
//          ^?YYYYYYYYYYYYYYYYYYYJ!!77?JY7!!7?J?7!777?JYYYYYYYYYYYYYYYYY?^         
//        .7YYYYYYYYYYYYYYYYYY!^JJ~:^::~7~~7?^.^7^.:^.:!JJYYYYYYYYYYYYYYYY7.       
//       ^JYYYYYYYYYYYYYYYYYYJ. ?YYY?!^~~.:?Y: :77!~::~^.:7YYYYYYYYYYYYYYYYJ^      
//      !YYYYYYYYYYYYYYYYYYYY7 :.:7JY!~~^^^~!~^^^^^~~^^^^^~!7??JYYYYYYYYYYYYY!     
//     7YYYYYYYYYYYYYYYYYYYYJ!~Y?~.^7                          .:!JYYYYYYYYYYY7    
//    7YYYYYYYYYYYYYYYYYYYYYJ:.~?YJ?^                              ~JYYYYYYYYYY7   
//   !YYYYYYYYYYYYYYYYYYYYYY~~7:.:7?                                :JYYYYYYYYYY!  
//  ^YYYYYYYYYYYYYYYYYYYYYY? :YYJ~!~        :????????????7~.         ~YYYYYYYYYYY^ 
//  ?YYYYYYYYYYYYYYYYYYYYYY~ :.~?YJ.        !YYYYYYYYYYYYYYJ:        .JYYYYYYYYYY? 
// ^YYYYYYYYYYYYYYYYYYYYYYY!~Y7^ !!        .JYYYYYYYYYYYYYYY~        .JYYYYYYYYYYY^
// 7YYYYYYYYYYYYYYYYYYYYYY! .~YYJ?.        ~YYYYYYYYYYYYYYYJ.        ^YYYYYYYYYYYY7
// JYYYYYYYYYYYYYYYYYYYYYJ.:! ?YY7         JYYYYYYYYYYYYYY?:        .?YYYYYYYYYYYYJ
// YYYYYYYYYYYYYYYYYYYYYYY!:. 7YY:        ~YYYYYYYYYYJJ?!:          7YYYYYYYYYYYYYY
// YYYYYYYYYYYYYYYYYYYYYY!^~!^.~?         :^^^^^^^^::..           .7YYYYYYYYYYYYYYY
// JYYYYYYYYYYYYYYYYYYYY7 ^^.~??^                               .~JYYYYYYYYYYYYYYYJ
// 7YYYYYYYYYYYYYYYYYYYY? 7YJ.~J                             .:!JYYYYYYYYYYYYYYYYY7
// ^YYYYYYYYYYYYYYYYYYYY?!.:~.^~         .............:::^~!?JYYYYYYYYYYYYYYYYYYYY^
//  ?YYYYYYYYYYYYYYYYYY~ :!!^~?.        !JJJJJJJJJJJJJJYYYYYYYYYYYYYYYYYYYYYYYYYY? 
//  ^YYYYYYYYYYYYYYYYYJ ~~.^^7!        .JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY^ 
//   !YYYYYYYYYYYYYYYYJ^...~~7:        ~YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY!  
//    7YYYYYYYYYYYYYYY~^!~.:77         ?YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY7   
//     7YYYYYYYYYYYYY7 ^.7J!7:        ^YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY7    
//      !YYYYYYYYYYYY~ ^.!YY?         7YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY!     
//       ^JYYYYYYYYYYJ?^.:!Y^        :YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ^      
//        .7YYYYYYYYYYYYJ!:7         7YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY7.       
//          ^?YYYYYYYYYYYYYJ777777777JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY?^         
//            ^?YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY?^           
//              :!JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ!:             
//                .^7JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ7^.               
//                   .^!?JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ?!^.                  
//                       .^~7?JYYYYYYYYYYYYYYYYYYYYYYYYJ?7~^.                      
//                            .:^~!7?JJJJYYYYJJJJ?7!~^:.                           