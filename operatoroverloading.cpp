#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    complex(int r,int i){
        real=r;
        imag=i;
    }
    void getdata(){
        cin>>real>>imag;
    }
    void print(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    //operator overloading syntax.
    complex operator+(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};
int main(){
    complex c1;
    c1.getdata();
    complex c2;
    c2.getdata();
    complex c3;
    c3=c1+c2;//c3=c1.add(c2).
    c3.print();
    return 0;
}
//operators which cannot be overloaded
//scope operator(::)
//sizeof
//member selector-(.)
//member pointer selecter-(*)
//ternary operator-(?:)