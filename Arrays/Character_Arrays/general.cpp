#include<iostream>
using namespace std;

int main(){

    char a[]="hi";
    cout<<a<<endl;

    char b[10]={'a','b'};
    cout<<b<<endl;

    char c[2]={'a','b'};
    cout<<c<<endl;

    char d[5];
    d[0]='d';
    d[1]='f';

    for(int i=0;i<5;i++)
    cout<<d[i];
    cout<<d<<endl;

// takes only one character
    // char ch=cin.get();
    // cout<< ch;

// now lets see what cin.getline has to offer
        // char cg[100];
        // cin.getline(cg,5,'_');
        // cout<<cg;
        // 
        // char cg[100];
        // cin.getline(cg,5,'_');
        // cout<<cg;

    return 0;
}