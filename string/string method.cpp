#include <iostream>
#include <string>
using namespace std;

int main()
{
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // here size() and length() method show output same
    cout << "The length of the txt string is: " << txt.size() << endl;
    cout << "The length of the txt string is: " << txt.length() <<endl;

    for (unsigned int i = 0; i < txt.length(); i++)
    {

        cout << i + 1 <<"." << txt[i] <<" "; 
    }

    return 0;
}
