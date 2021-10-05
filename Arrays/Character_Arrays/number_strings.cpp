#include<iostream>
using namespace std;

int main(){

    // int n;
    // char a[100];
    // cin>>n;
    // //this must take n inputs but it works n-1 times only.
    // for(int i=0;i<n;i++){
    //     cin.getline(a,100);
    //     cout<<a<<endl;
    // }

    int n;
    char a[100];
    cin>>n;
    // cin.get();
    cin.ignore();
    //this will take n inputs
    for(int i=0;i<n;i++){
        cin.getline(a,100);
        cout<<a<<endl;
    }


    return 0;
}

// reason -
// Example n=3
// when n=3 is taken input
// input buffer is as follows
// 3, ['\n' ]                  ---[x] means pointing here
// next statement is cin.getline which has a default delimiter of '\n' 
// hence it considers a whitespace as the input and moves ahead
// then lets say "hi" is inputted
// input buffer is as follows
// 3 , '\n' , "hi" , ['\n']
// and so on

// Now to resolve this-
// we use the cin.get() or cin.ignore() function which consumes this white space 

