/* Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.*/

#include <iostream>
#include<math.h>
using namespace std;

int findGCD(int a ,int b){
if(b==0)
    return a;
 return findGCD(b,a%b);

}

int main() {
    int t;
    cin>>t;
    int val;
while(t--){
    int a,b;
    cin>>a>>b;
    val=findGCD(a,b);
        int lcm=(a*b)/val;
    cout<<findGCD(a,b)<<lcm<<endl;



}


	return 0;
}

