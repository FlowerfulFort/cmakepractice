#include <iostream>
#include "foo.hpp"

int main(void){
    std::cout<<"Hello World!"<<std::endl;
    std::cout<<"3+5 = "<<sum(3,5)<<std::endl;
    std::cout<<"3-5 = "<<sub(3,5)<<std::endl;

    return 0;
}

