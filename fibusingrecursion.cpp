#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return 1;
    }
     return fib(n-1)+fib(n-2);
}
int main(){
    int x;
    cout<<"Enter the value of x : "<<endl;
    cin>>x;
    int res=fib(x);
    cout<<"The fibonacii of x is : "<<res<<endl;
    return 0;
}