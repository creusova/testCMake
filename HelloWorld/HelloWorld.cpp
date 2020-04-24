#include "whatIsYourName.h"

void printHelloWorld()
{
    std::string Name = whatIsYourName();
    std::cout<<"Dear " << Name <<", we are breaking up"<<std::endl;
}
