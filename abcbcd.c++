#include<iostream>
using namespace std;
int main()
{
    // While loop
    int n;
    cin>>n;
    int i,j;
    // for(i=0;i<n;i++){
    //     for(j=0;j<n;j++){
    //         cout<<"*";
    //     }cout<<endl;
    // }
    int x=65;
    i=0;
    while(i<n){
        j=0;
        while(j<n){
            cout<<char((x+1)+(i+j-1)); //related with the pattern 123,234,345;
            j+=1;
        }cout<<endl;
        i+=1;
    }
    return 0;
}