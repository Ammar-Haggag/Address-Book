#include <iostream>
#include <bitset> // to use bitset
int main()
{   int DecimalNum;
    std::cout<<"enter Decimal number: ";

    std::cin>>DecimalNum;
    std::string BinaryValue = std::bitset<8>(DecimalNum).to_string(); //conver decimal to binary
    std::cout<<"Binary Representation: "<<BinaryValue<<std::endl;

    char str[8]; // to get binary number as a string
    std::cout<<"enter Binary number: ";
    std::cin>>str;
    std::string binary_string=str; // convert array of char to string
    std::bitset<8> bits(binary_string); // convert binary to decimal
    unsigned long decimal_value = bits.to_ulong();
    std::cout<<"decimal Representation: "<<decimal_value;

    return 0;
}

