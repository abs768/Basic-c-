#include<iostream>
using namespace std;
#include<cmath>
int main(){
    int n;
    cin>>n;
    int sum=0;
    int origin=n;
    while(n>0){
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(sum==origin){
        cout<<"An Armstrong Number";
    }
    else{
        cout<<"Not An Armstrong Number";
    }
    return 0;
}