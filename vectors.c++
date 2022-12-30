#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>vec1;//Zero length integer vector
    vector<char>vec2(4);//4-element character vector
    vector<char>vec3(vec2); //4-element character vector from vec2
    vector<int>v(6,3);//6-element vector of 3s
    vec2.push_back('5');
    display(v);
    int element,size;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     cout<<"Enter elements to add to this vector";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5,566);
    // display(vec1);
    cout<<v.size()<<endl;
    return 0;
}