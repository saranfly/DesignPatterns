#ifndef SCANNER_H
#define SCANNER_H
#include <iostream>
#include <istream>

class Scanner
{
public:
    Scanner();
    virtual ~Scanner();
    virtual Token& Scan();
private:
    istream& _inputSteream;
};

#endif // SCANNER_H
