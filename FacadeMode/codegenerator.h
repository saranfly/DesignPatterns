#ifndef CODEGENERATOR_H
#define CODEGENERATOR_H


class CodeGenerator
{
public:
    CodeGenerator();
    ~CodeGenerator();
    virtual void Visit(StatementNode*);
    virtual void Visit(ExpressionNode*);
    //...

protected:
    CodeGenerator(BytecodeStream&);
protected:
    BytecodeStream& _output;
};

#endif // CODEGENERATOR_H
