#include <iostream>

using namespace std;
using std::cout;

int main()
{
    for (int bottles(99); bottles > 0; bottles -= 1){
        if (bottles == 1){
            cout <<bottles<< " bottle of beer on the wall\n";
            cout <<bottles<< " bottle of beer\n";
            cout <<"Take one down, pass it around\n";
            cout <<"There are no more bottles of beer on the wall :-(\n\n";
        }
        else{
            cout <<bottles<< " bottles of beer on the wall\n";
            cout <<bottles<< " bottles of beer\n";
            cout <<"Take one down, pass it around\n";
            cout <<bottles - 1<< " bottles of beer on the wall\n\n";
        }
    }
}
