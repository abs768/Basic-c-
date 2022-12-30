#include<iostream>
using namespace std;
inline pro(int a,int b){//inline deals with the draw back of normal function i.e the concept of overhead.
    return a*b;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<pro(x,y)<<endl;
    return 0;
}