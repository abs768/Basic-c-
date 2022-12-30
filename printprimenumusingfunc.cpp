#include<iostream>
using namespace std;
bool iprime(int n){
    for(int i =2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i =a;i<=b;i++){
        if(iprime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}