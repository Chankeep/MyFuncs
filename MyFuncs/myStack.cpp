#include "myStack.h"
void myStack::push(int num)
{
    *p = num;
    size++;
    p++;
}
bool myStack::isempty()
{
    if (size == 0)
        return true;
    else
        return false;
}
void myStack::pop()
{
    if (isempty())
    {
        cout << "error" << endl;
        return;
    }
    else
    {
        p--;
        size--;
        cout << *p << endl;
        return;
    }
}
void myStack::top()
{
    if (isempty())
    {
        cout << "error" << endl;
        return;
    }
    else
    {
        this->p--;
        cout << *p << endl;
        this->p++;
        return;
    }
}