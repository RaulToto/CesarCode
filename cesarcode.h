#ifndef CESARCODE_H
#define CESARCODE_H

#include <string>
#include <iostream>
#include <algorithm>
class CesarCode
{
public:
    CesarCode();
    CesarCode(int );
    std::string encrypt(std::string);
    std::string decrypt(std::string);
private:
    int key;
    std::string alfabeto="abcdefghijklmnopqrstuvwxyz*";
};

#endif // CESARCODE_H
