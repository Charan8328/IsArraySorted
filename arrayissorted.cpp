#include<bits/stdc++.h>
using namespace std;
bool print(int n,int a[]){
    for(int i=0;i<n;i++){
        if(a[i]<a[i+1]){
            return true;
        }
        else{
            return false ;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<print(n,a);
}