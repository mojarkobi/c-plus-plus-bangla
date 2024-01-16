#include <iostream>
#include <string>

int main()
{
    
    std::string name;

    std::cin >> name; // here type 'ashik ahmed' from terminal it receive only 'ashik' and ignore 'ahmed' because we use space

    std::cout << name; // here show only ashik

    std::string fullName;

    getline(std::cin,fullName);

    std::cout<<"\n" <<fullName;

    return 0;
}
