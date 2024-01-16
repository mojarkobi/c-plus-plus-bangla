#include <iostream>
#include <limits>


int main() {

    std::cout << "Int Min " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Int Max " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Unsigned Int  Min " << std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout << "Unsigned Int Max " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "Long Int Min " << std::numeric_limits<long int>::min() << std::endl;
    std::cout << "Long Int Max " << std::numeric_limits<long int>::max() << std::endl;

    std::cout << "Unsigned Long Int Min " << std::numeric_limits<unsigned  long int>::min() << std::endl;
    std::cout << "Unsigned Long Int Max " << std::numeric_limits<unsigned  long int>::max() << std::endl;

}