#include<iostream>
using namespace std;
//forward declaration
class Complex;
class Calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    int sumRealComplex(Complex ,Complex );
    int sumCompComplex(Complex ,Complex );
    
};
class Complex{
    int a,b;
    //individually declaring friends
    //friend int Calculator :: sumRealComplex(Complex,Complex);
    //friend int Calculator :: sumCompComplex(Complex,Complex);
    //Aliter: Declaring the entire class as friend
    friend class Calculator;
    public:
    void setnum(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printnum(){
        cout<<"The number is : "<<a<< " + " <<b<<"i"<<endl;
    }
};
int Calculator :: sumRealComplex(Complex o1, Complex o2){
    return (o1.a+o2.a);
}
int Calculator :: sumCompComplex(Complex o1, Complex o2){
    return (o1.b+o2.b);
}
int main(){
    Complex o1,o2;
    o1.setnum(1,4);
    o1.printnum();
    o2.setnum(2,7);
    o2.printnum();
    Calculator C;
    int res= C.sumRealComplex(o1,o2);
    int res1= C.sumCompComplex(o1,o2);
    cout<<"The sum of Real part is : "<<res<<endl;
    cout<<"The sum of Complex part is : "<<res1<<endl;
    return 0;
}