#include <iostream>
#include<math.h>
using namespace std;
bool Codition2(float carbon){
if(carbon<0.7)
    return true;
}
bool Codition1(long long int hard){
if(hard>50)
    return true;
}
bool Codition3(long long int tensile){
if(tensile>5600)
    return true;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    long long int hard;
    float carbon;
   long long int tensile;
    cin>>hard>>carbon>>tensile;
    if(hard>50&&carbon<0.7&&tensile>5600){
        cout<<10<<endl;

    }
    else if(hard>50&&carbon<0.7){
        cout<<9<<endl;
    }
    else if(carbon<0.7&&tensile>5600){
        cout<<8<<endl;
    }
    else if(hard>50&&tensile>5600){
        cout<<7<<endl;
    }
    else if(hard>50||carbon<0.7||tensile>5600){
        cout<<6<<endl;
    }
    else{
        cout<<5<<endl;

    }

    }


	return 0;
}

