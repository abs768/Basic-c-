#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //spiral order print
    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;

    return 0;
}