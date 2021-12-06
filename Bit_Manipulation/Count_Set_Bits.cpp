#include<iostream>
using namespace std;

int countSetBits(int n){
    int ans=0;
    while(n){
        if((n&1)==1){
            ans+=1;
        }
        n=n>>1;
    }
    return ans;
}

int main(){

    int n=12;
    cout<<"Number of set bit in "<<n<<" are : "<<countSetBits(n);

}