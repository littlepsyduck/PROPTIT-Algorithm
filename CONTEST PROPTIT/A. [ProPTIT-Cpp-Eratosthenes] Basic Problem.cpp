#include <bits/stdc++.h>
using namespace std;

void fast() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0); 
}

bool snt(long n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) {
            return false;
        }
    return n > 1;
}

int main()
{
	fast();
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		if(snt(n)) cout<<"YES";
		else cout<<"No";
		t--;
		if(t>0) cout<<"\n"; 
	} 
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