/*  Alice and Bob play the following game. They choose a number N to play with. The rules are as follows :

1) Alice plays first, and the two players alternate.

2) In his/her turn, a player can subtract from N any proper divisor (not equal to N) of N. The number thus obtained is the new N.

3) The person who cannot make a move in his/her turn loses the game.

Assuming both play optimally, who wins the game ?*/


#include <iostream>
using namespace std;

int main() {

int t;
cout<<10;
cin>>t;
while(t--){
   long long int n;
    cin>>n;
if(n%2==0)
        cout<<"ALICE"<<endl;
    else
        cout<<"BOB"<<endl;
}
return 0;
}
