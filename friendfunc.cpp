#include<iostream>
using namespace std;
class Complex{
      int a,b;
      public:
      void setnumber(int n1,int n2){
          b= n2;
          a= n1;
      }
      friend  Complex SumComplex(Complex o1,Complex o2);
      void printnum(){
          cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
      }
      void printsum(){
          cout<<"The sum is "<<a<<"+"<<b<<"i"<<endl;
      }
};
Complex SumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    Complex c1,c2;
    c1.setnumber(1,4);
    c1.printnum();
    c2.setnumber(5,6);
    c2.printnum();
    Complex sum= SumComplex(c1,c2);
    sum.printsum();
    return 0;
}
/*properties of friend function.
1) Not in the scope of class.
2)since it is not in the scope of the class,it cannot be called from the object of that class.
c1.sumComplex()==invalid.
3)Can be invoked without the help of any object.
4) Usually contains the objects as the argument.
5)Can be declared inside public or private section of a class.
6)It cannot access the members directly by their names and need object_name.member_name
to access any member.
*/