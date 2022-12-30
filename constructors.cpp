#include <iostream>
using namespace std;
class Base

{

    int x;

public:
    Base()

    {

        cout << "Base default constructor";
    }
};

class Derived : public Base

{

    int y;

public:
    Derived()

    {

        cout < "Derived def. constructor";
    }

};
    int main()
    {
        Derived();
        return 0;
    }