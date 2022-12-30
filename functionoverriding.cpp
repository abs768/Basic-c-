#include<iostream>
using namespace std;
class Animal{
    public:
    void makeSound(){
        cout<<"Animals Sound"<<endl;
    }
};
class Dog:public Animal{
    public:
    void makeSound(){
        cout<<"Bow Bow!!!"<<endl;
    }
};
class Cat: public Animal{
    public:
    void makeSound(){
        cout<<"Meow Meow!!!"<<endl;
    }
};
int main(){
    Cat prince;
    prince.makeSound();
    return 0;
}