#ifndef SIMPLECOMMAND_H
#define SIMPLECOMMAND_H

template <class Receiver>
class SimpleCommand : public Command
{
public:
    typedef void (Receiver:: *Action)();
    SimpleCommand(Receiver* r, Action a):_receiver(r), _action(a){}
    virtual void Execute();
    ~SimpleCommand();
private:
    Receiver* _receiver;
    Action _action;
};

#endif // SIMPLECOMMAND_H
