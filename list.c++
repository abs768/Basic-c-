#include<iostream>
#include<list>
using namespace std;
void display(list<int>&l){
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

}
int main(){
    list<int>list1;//List of 0 length
    // list<int>list2(7);//List is empty but the size is 7
    // list1.push_back(5);
    // list1.push_back(7);
    // list1.push_back(1);
    // list1.push_back(9);
    // list1.push_back(12);
    // display(list1);
    // list1.pop_front();
    // list1.remove(9);//removes the occurence of those elements which are being pushed up;
    // display(list1);
    // list1.sort();
    // display(list1);
    list <int> list2(3);
    list <int> :: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=6;
    iter++;
    *iter=9;
    iter++;
    display(list2);
    // list2.sort();
    // display(list2);
    // list1.merge(list2);
    // cout<<"List 1 after merging with list 2 : "<<endl;
    // display(list1);
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display (list1);
    list1.swap(list2);
    display(list2);
    return 0;
}