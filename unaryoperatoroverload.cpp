#include<iostream>
using namespace std;
class Weight{
    private:
    int kg;
    public:
    Weight(){
        kg=0;
    }
    Weight(int x){
        kg=x;
    }
    void printWeight(){
        cout<<"Weight in KG is : "<<kg<<endl;
    }
    Weight operator ++(){
        Weight temp;
        temp.kg=++kg;
        return temp;
    }
    void operator ++(int){
        kg++;
    }
};
int main(){
    Weight o1,o2;
    o2=++o1;
    o2.printWeight();
    Weight obj;
    obj++;
    obj.printWeight();
    return 0;
}