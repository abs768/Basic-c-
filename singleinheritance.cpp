/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//single inheritance.
//applications university grading system,employee and salary
#include <iostream>

using namespace std;
class base{
    public:
    int x;
    void getdata(){
        cout<<"Enter the value of x"<<endl;
        cin>>x;
    }
};
class derived:public base{
    int y;
    public:
    void readdata(){
        cout<<"Enter the value of y"<<endl;
        cin>>y;
    }
};
int main()
{
    
    int x,y;
    cin>>x>>y;
    derived z;
    z.getdata();
    z.readdata();
    return 0;
}
