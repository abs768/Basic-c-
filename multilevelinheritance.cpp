#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
        cout<<"This is a Vehicle"<<endl;
    }
};
class fourwheeler:public vehicle{
    public:
    fourwheeler(){
        cout<<"Object with four wheels are inside"<<endl;
    }

};
class car:public fourwheeler{
    public:
    car(){
        cout<<"This is a car"<<endl;
    }
};
int main(){

    car();
    return 0;
}