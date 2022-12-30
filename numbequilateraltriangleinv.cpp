#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int rows;
    int cols;
    for(rows=1;rows<=n;rows++){
        for(int space=0;space<=n-rows;space++){
            cout<<" ";
        }
        for(cols=rows;cols>=1;cols--){
            cout<<cols;
        }
        for(cols=2;cols<=rows;cols++){
            cout<<cols;
        }
        cout<<endl;
    }
    for(rows=n;rows>=0;rows--){
        for(int space=0;space<=n-(rows-1);space++){
           cout<<" ";
        }
        for(cols=rows-1;cols>=1;cols--){
            cout<<cols;
        }
        for(cols=2;cols<=rows-1;cols++){
            cout<<cols;
        }
        cout<<endl;
    }
    return 0;
}