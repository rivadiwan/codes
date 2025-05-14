#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    int n=a.size();
    int ele=5;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==ele){
                vector<int>temp;
                temp.push_back(min(a[i],a[j]));
                temp.push_back(max(a[i],a[j]));
                ans.push_back(temp);
            }
            else if(a[i]+a[j]<ele){
                 vector<int>temp;
                temp.push_back(min(a[i],a[j]));
                temp.push_back(max(a[i],a[j]));
                ans.push_back(temp);
            }
        }
    }
    //sort(ans.begin(),ans.end());
   auto int i=ans.begin();
   for (;i!=ans.end();i++)
        cout << i << " ";
    return 0;
}