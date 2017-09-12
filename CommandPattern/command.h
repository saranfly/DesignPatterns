#ifndef COMMAND_H
#define COMMAND_H


class Command
{
public:
    virtual void Execute() = 0;
    virtual ~Command();
protected:
    Command();
};

#endif // COMMAND_H
