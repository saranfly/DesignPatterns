#include <iostream>
#include "process.h"
#include "myiteratorptr.h"
using namespace std;

int main()
{
    class Employee;
    MyList<Employee*>* listEmployees;
    MyListIterator<Employee*> IterForword(listEmployees);

    PrintEmployees(IterForword);

    ///////////////////////////////////////////////////////
    MyIteratorPtr<Employee*> iterEmployee();


    return 0;
}

