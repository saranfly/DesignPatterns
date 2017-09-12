#ifndef COMPILE_H
#define COMPILE_H
#include <istream>
#include "parser.h"
#include "programnode.h"
#include "scanner.h"

class RISCCodeGenerator;
class BytecodeStream;
class Compile
{
public:
    Compile();
    ~Compile();

    virtual Compile(istream&input, BytecodeStream&output);
};

#endif // COMPILE_H
