#include<iostream>
using namespace std;
class number{
      int a;
      public: number(){}
      number(int num){
          a=num;
      }
      //when no copy constructor is found,the compiler provides a default constructor to access.
    //   number(number &o){
    //       a=o.a;
    //       cout<<"Copy Constructor is called "<<endl; note:point to note is that even when we comment out the copy constructor it still executes its because a default copy constructor is provided to each and every object due to which it gets called and hence shows no error.
    //   }
      void display(){
          cout<<"The number for this object is "<<a<<endl;
      }
};
int main(){
    number x,y,z(45);
    x.display();
    y.display();
    z.display();
    number z1(z);//copy constructor is invoked.
    z1.display();
    z2=z;//copy constructor is not called.
    number z3=z;//copy constructor is invoked.
    return 0;
}