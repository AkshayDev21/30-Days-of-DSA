#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int n;
    cout<<"Enter a binary number "<<endl;
    cin>>n;

    int i =0, ans =0;

    while(n != 0){

        int digit = n & 10;

        if(digit == 0){
            ans = ans + pow(2, i);

        } 
        n = n/10;
        i++;

    }
    cout<<"Answer is "<<ans<<endl;

}
