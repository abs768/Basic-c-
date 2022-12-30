#include<iostream>
#include<fstream>
using namespace std;
/*useful classes working with files in c++ are:
1. fstreambase
2. ifstream ---> Derived from fstreambase
3. ofstream ---> Derived from fstreambase
*/
//Inorder to work with c++ they are two ways two open a file:
//1. Using the constructor.
//2. Using the member function open() of the class 
int main(){
    string st= " Harry Bhai ";
    string st2;
    // opening files using constructor and writing it.
    // ofstream out("sample60.txt");//Write operation
    // out<<st;
    //opening files using constructor and reading it.
    ifstream in("sample60b.txt");
    // in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}