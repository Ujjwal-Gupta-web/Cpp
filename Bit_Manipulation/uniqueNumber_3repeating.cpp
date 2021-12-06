#include<iostream>
using namespace std;

int main(){

    int arr[]={3,3,5,6,6,6,3};
    int n=(sizeof(arr)/sizeof(arr[0]));
    int cnt[64]={0};
    for(int i=0;i<n;i++){
        int pos=0;
        int no=arr[i];
        while(no>0){
            if((no&1)==1){
                cnt[pos]++;
            }
            pos++;
            no=no>>1;
        }
    }
    int ans=0;
    int p=1;
    for(int i=0;i<64;i++){
        cnt[i]%=3;
        cout<<cnt[i];
        ans+=cnt[i]*p;
        p*=2;
    }

    cout<<"\nThe required number is: "<<ans;

    return 0;
}

// 3 - 0 1 1
// 3 - 0 1 1
// 5 - 1 0 1
// 6 - 1 1 0
// 6 - 1 1 0
// 6 - 1 1 0
// 3 - 0 1 1
// ---------
//     4 6 4
// ---------
// ans = decimal of (4%3  6%3  4%3) = decimal of (1 0 1) = 5