#include<iostream>
using namespace std;
int dec(int n){
    int b;
    while(n>0){
     b=dec(n-1);
    }
    return b;
}
int main(){
    int n=5;
    int a=dec(5);
    cout<<a<<" ";
}