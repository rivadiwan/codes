#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1)
    {
        return 1;
    }
    bool rest=sorted(arr+1,n-1);
    return(arr[0]<arr[1] && rest);
}
int main()
{
    int arr[]={1,2,3,4,5};
    cout<<sorted(arr,5);
    return 0;
} // namespace std

