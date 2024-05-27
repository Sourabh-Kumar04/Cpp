#include <iostream>

int main ()
{
    // test compiler support 
    auto result = (10 <=> 20) > 0;    // <=> spaceshift operator
    std::cout << result << std::endl;
}