#include<iostream>
using namespace std;
int SUm(int *a,int size){
    if(size==0)
    return 0;
    if(size==1)
    return a[0];
   int rem=SUm(a+1,size-1);
   int sum=a[0]+rem;
    
    return sum;
}
int main(){
    int a[]={1,2,3,4,5};
    int size=5;
   int ans = SUm(a,size);
   cout<<ans;
   return 0;
}