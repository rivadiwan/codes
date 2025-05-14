#include<iostream>
using namespace std;
bool ans(int *a,int size,int key){
    if(size==0)
    return false;
    if(a[0]==key){
        return true;
    }
    else{
    bool rem=ans(a+1,size-1,key);
    return rem;
    }
}
int main(){
    int a[]={1,3,4,5,2};
    bool a1=ans(a,5,8);
    cout<<a1;
    return 0;
}