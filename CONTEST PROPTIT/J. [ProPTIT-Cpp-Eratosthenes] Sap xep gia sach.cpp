#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

int isPrime[10000000]; 
ll a[10000000];
int cnt;
int f[10000000];
void sieve() {
	for(int i = 0; i <= 10000000;++i) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= 10000000; ++i) {
         if(isPrime[i] == true) {
             for(int j = i * i; j <= 10000000; j += i)
                 isPrime[j] = false;
        }
    }
}

void solve()
{

	int n;
	cin>>n;
	cout<< f[n]-f[n/2]+1 << "\n"; 
} 

int main()
{
	fast();
	sieve();
	for(int i=3; i<=10000000; i++)
	{
		
		if(isPrime[i]) f[i]=f[i-1]+1;
		else 
			f[i]=f[i-1];
	}	
	int t;
	cin>>t;
	while(t--)
	{
		solve(); 
	} 
}
//                                    .:^~!!7??JJJJYYYYJJJJ??7!!~^:.                                   
//                               :^~7?JJYYYYYYYYYYYYYYYYYYYYYYYYYYJJ?7~^:                              
//                          .:~7JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ7~:.                         
//                       .~7JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ7~.                      
//                    .~?JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ?~.                   
//                 .^7JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ7^.                
//               .~JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ~.              
//             .!JYYYYYYYYYYYYYYYYYYYYYYYYYYJYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ!.            
//            ~JYYYYYYYYYYYYYYYYYYYYYJJYY!:.^~~!?Y7::^~~!7?~:::~~~!?JYYYYYYYYYYYYYYYYYYYYYJ~           
//          ^?YYYYYYYYYYYYYYYYYYYYYYY^ ?YJ7~^^::^~!!7?Y?. .??^.:^:..^?JYYYYYYYYYYYYYYYYYYYYY?^         
//         !YYYYYYYYYYYYYYYYYYYYYYYY?  7YYYYJ7~^~~: .!Y!  :!!!!~:.^!^  :7YYYYYYYYYYYYYYYYYYYYY!        
//       .?YYYYYYYYYYYYYYYYYYYYYYYYY~   :7JYYJ77!~~~~!?7!~~~~~~7?!~~~~~~7?JJJYYYYYYYYYYYYYYYYYY?.      
//      :JYYYYYYYYYYYYYYYYYYYYYYYYYY~.?7: .~J^                             ..:~!?YYYYYYYYYYYYYYYJ:     
//     ^JYYYYYYYYYYYYYYYYYYYYYYYYYY!^7YYY?~:?.                                   :!JYYYYYYYYYYYYYJ^    
//    :JYYYYYYYYYYYYYYYYYYYYYYYYYYY!. .!JYYY~                                      .7YYYYYYYYYYYYYJ:   
//   .JYYYYYYYYYYYYYYYYYYYYYYYYYYY7:7?^  ^?J.                                        !YYYYYYYYYYYYYJ.  
//   7YYYYYYYYYYYYYYYYYYYYYYYYYYYY: 75YJ!.~!           ~???????????777!~:             ?YYYYYYYYYYYYY7  
//  ^YYYYYYYYYYYYYYYYYYYYYYYYYYYY7  .~?YYYJ:          .JYYYYYYYYYYYYYYYYY?.           ~YYYYYYYYYYYYYY^ 
//  ?YYYYYYYYYYYYYYYYYYYYYYYYYYYY~ !~. :!J7           ~YYYYYYYYYYYYYYYYYYY7           ^YYYYYYYYYYYYYY? 
// ^YYYYYYYYYYYYYYYYYYYYYYYYYYYYJ!~JYJ7: ?^          .JYYYYYYYYYYYYYYYYYYY7           ~YYYYYYYYYYYYYYY^
// 7YYYYYYYYYYYYYYYYYYYYYYYYYYYY~  .7YYYJ?           ~YYYYYYYYYYYYYYYYYYYY^           ?YYYYYYYYYYYYYYY7
// ?YYYYYYYYYYYYYYYYYYYYYYYYYYYJ :?..JYYY^           ?YYYYYYYYYYYYYYYYYYJ^           ^YYYYYYYYYYYYYYYY?
// JYYYYYYYYYYYYYYYYYYYYYYYYYYY?. :.:YYYJ           ^YYYYYYYYYYYYYYYYJ?~.           .JYYYYYYYYYYYYYYYYJ
// YYYYYYYYYYYYYYYYYYYYYYYYYYYYJJ7^. ^7Y~           7JJJJJJJ????77!~^.             :JYYYYYYYYYYYYYYYYYY
// JYYYYYYYYYYYYYYYYYYYYYYYYYY7. .~7!..J.           .....                         ^JYYYYYYYYYYYYYYYYYYJ
// ?YYYYYYYYYYYYYYYYYYYYYYYYYJ. !~. ~JJ!                                        :7YYYYYYYYYYYYYYYYYYYY?
// 7YYYYYYYYYYYYYYYYYYYYYYYYYJ..JYY~ !Y:                                     :~?YYYYYYYYYYYYYYYYYYYYYY7
// ^YYYYYYYYYYYYYYYYYYYYYYYYYY?. ~?7 ^7                               ..:^~7?YYYYYYYYYYYYYYYYYYYYYYYYY^
//  ?YYYYYYYYYYYYYYYYYYYYYYYJ^^!~.  .?^          .!!!!!!!!!!!!!!!777??JJYYYYYYYYYYYYYYYYYYYYYYYYYYYYY? 
//  ^YYYYYYYYYYYYYYYYYYYYYYY^ . !J77J?           ^YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY^ 
//   7YYYYYYYYYYYYYYYYYYYYY? :J: ..:J^           ?YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY7  
//   .JYYYYYYYYYYYYYYYYYYYY?: . :!~~?           :YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ.  
//    :JYYYYYYYYYYYYYYYYYYY777~. ^7Y~           7YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ:   
//     ^JYYYYYYYYYYYYYYYYY!  .!J!:.J.          :YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ^    
//      :JYYYYYYYYYYYYYYYJ..?^ ?YYJ!           !YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ:     
//       .?YYYYYYYYYYYYYYJ: ...JYYY:          .JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY?.      
//         !YYYYYYYYYYYYYYY?~. :7Y7           ~YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY!        
//          ^?YYYYYYYYYYYYYYYJ!: ?:           JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY?^         
//            ~JYYYYYYYYYYYYYYYYJJ^^^^^^^^^^^!YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ~           
//             .!JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ!.            
//               .~JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ~.              
//                 .^7JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ7^.                
//                    .~?JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ?~.                   
//                       .~7JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ7~.                      
//                          .:~7JYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYJ7~:.                         
//                               :^~7?JJYYYYYYYYYYYYYYYYYYYYYYYYYYJJ?7~^:                              
//                                    .:^~!!7??JJJJYYYYJJJJ??7!!~^:.                                   

 
