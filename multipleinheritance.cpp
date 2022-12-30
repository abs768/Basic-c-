//application: used in distributeddatabase.
#include <iostream>
using namespace std;
class sum1{
    protected:int n1;
};
class sum2{
    protected:int n2;
};
class show:public sum1,public sum2
{
    public:void total(){
        cout<<"Enter num1 : "<<endl;
        cin>>n1;
        cout<<"Enter num 2 : "<<endl;
        cin>>n2;
        cout<<"The sum is : "<<(n1+n2)<<endl;
    }
};
int main(){
    int n1,n2;
    cin>>n1>>n2;
    show x;
    x.total();
}