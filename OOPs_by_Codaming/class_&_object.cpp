#include <iostream>
#include <string>
using namespace std;

// class
class house 
{
private:
    // member variables
    int length = 0;
    int breadth = 0;

public:
    // member functions
    void setData (int x, int y) 
    {
        length = x;
        breadth = y;
    }

    void area ()
    {
        cout << length*breadth << endl;
    }
};

int  main () 
{
    house h1;

    h1.setData(500, 600);
    h1.area();

    return 0;
}