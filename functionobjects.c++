#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //Function objects (Functor) : A function that is wrapped in a class so that it is available like an object
    int arr[]={11,33,48,12,54,77};
    // sort(arr,arr+5);
    sort(arr,arr+6,greater<int>());
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}