#include <iostream>
#include <bitset>

int main(){

    unsigned short int data {0b10000000};

    std::cout << "data (dec) : " <<std::showbase <<  std::dec << data << std::endl;
    std::cout << "data (oct) : " <<std::showbase <<  std::oct << data << std::endl;
    std::cout << "data (hex) : " <<std::showbase <<  std::hex << data << std::endl;
    std::cout << "data (bin) : " << std::bitset<8>(data) << std::endl;
   
    return 0;
}