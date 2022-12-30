#include<iostream>
using namespace std;

int main(){
    //largest word in a sentence
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);//this function is used to input a sentence bcs to store it in the same sentence instead of storing it on another variable.
    cin.ignore();
    int i=0;
    int currenlen=0,maxlen=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currenlen>maxlen){
                maxlen=currenlen;
            }
            currenlen=0;
        }
        currenlen++;
        if(arr[i]=='\0'){
                break;
                i++;
            }
    }cout<<maxlen<<endl;
    return 0;
}