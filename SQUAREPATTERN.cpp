
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rows;
    int cols;
    int originalN=n;
    n=2*n;
    for(int rows=0;rows<=n;rows++){
        for(int cols=0;cols<=n;cols++){
            int atEveryIndex= originalN-min(min(rows,cols),min(n-rows,n-cols));
            cout<<atEveryIndex<<" ";
        }cout<<endl;
    }
    return 0;
}