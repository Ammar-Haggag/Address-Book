#include <iostream>
int main()
{
    std::cout << "*--------------------*" << std::endl;

    std::cout << "| Number" <<"   |   "<< "ASCII |" << std::endl;

    unsigned char x; // for ASCII
    for(int i=0;i<=127;i++)
    {
        x=i;
     std::cout <<"| "<< i <<"   |   "<< x << " |" <<std::endl;
    }
    std::cout << "*-------------*" << std::endl;
    return 0;
}

