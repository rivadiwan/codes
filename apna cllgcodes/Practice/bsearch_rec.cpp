#include<iostream>
using namespace std;
int solve(int*arr,int s,int e,int k){
    if(s>e)
    return -1;
   int mid=s+(e-s)/2;
    if(arr[mid]==k)
    return mid;
    if(arr[mid]<k){
        return solve(arr,mid+1,e,k);
    }
    else{
        return solve(arr,s,mid-1,k);
    }
    return 0;
}
int main(){
    int a[]={1,3,4,5,7,8};
    int k=4;
    int a1=solve(a,0,6,k);
    cout<<a1;
    return 0;
}