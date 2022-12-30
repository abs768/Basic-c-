#include<iostream>
using namespace std;
class A{
    public:
    int x;
    virtual void cunning(){
        cout<<"You are a cunning fellow"<<endl;
    }
};
class B:public A{
    public:
    int y;
    void cunning(){
        cout<<"You are not useful"<<endl;
    }

};
int main(){
    B *y;
    B x;
    y=&x;
    y->cunning();
    return 0;
}