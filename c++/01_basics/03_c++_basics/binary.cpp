#include <iostream>
#include <bitset>

using std::cout;
using std::endl;

int main()
{
    //char x = 0b01010101;
    bitset<8> y(0b01010101); 
    cout<<"Binary printing: " << y << endl;

    return 0;
}
