#include<iostream>
using namespace std;
class Toll{
     public:
     int cars;
     float tollboothcollected;
     Toll(){
         cars=0;
         tollboothcollected=0;
     }
     void payingcar(float tollamt){
         tollboothcollected+=tollamt;
         cars++;
     }
     void nonpayingcar(){
         cars++;
     }
     void display(){
         cout<<cars<<tollboothcollected<<endl;
     }
};
int main(){
    Toll x;
    string VehicleNo;
    float TollAmt;
    int n,i;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>VehicleNo>>TollAmt;
        if(TollAmt>0){x.payingcar(TollAmt);}
        else{x.nonpayingcar();}
    }
    x.display();
    return 0;
}