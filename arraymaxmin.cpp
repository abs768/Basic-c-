#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxno=INT_MIN;//minimum value that is possible in a c++ compiler.
    int minno=INT_MAX;//maximum value that is possible in a c++ compiler.
    for(int i=0;i<n;i++){
        if(arr[i]>maxno){
            maxno=arr[i];
        }
        //maxno=max(maxno,arr[i]);
        if(arr[i]<minno){
            minno=arr[i];
        }
        //minno=min(minno,arr[i]);
    }
     cout<<maxno<<" "<<minno;
    return 0;
}