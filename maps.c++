#include<iostream>
#include<map>
#include<string>
using namespace std;
//Map is an associative array
int main(){
    map<string, int>marksMap;
    marksMap["Harry"]=98;
    marksMap["Jack"]=59;
    marksMap["Rohan"]=2;
    marksMap.insert({{"Kozume",169},{"Kuroo",159}});
    map<string, int> :: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"The size is :  "<<marksMap.size()<<endl;
    return 0;
}