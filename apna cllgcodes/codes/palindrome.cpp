#include<iostream>
using namespace std;
bool checkp(string &str,int i){
    int n=str.length()-1;
    if(i>(n-i)){
        return true;
    }
    if(str[i]!=str[n-i]){
        return false;
    }
    i++;
    checkp(str,i);
    
}
int main(){
    string s="racecar";
    bool a=checkp(s,0);
    if(a){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}