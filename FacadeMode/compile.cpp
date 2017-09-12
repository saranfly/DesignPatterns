#include "compile.h"

Compile::Compile()
{

}

Compile::~Compile()
{

}

Compile::Compile(istream &input, BytecodeStream &output)
{
    Scanner sanner(input);
    ProgramNodeBuilder builder;
    Parser parse;

    parse.Parse(sanner, builder);

    RISCCodeGenerator Generator(output);
    ProgramNode* parseTree = builder.GetRootNode();
    parseTree->Traverse(Generator);
}

