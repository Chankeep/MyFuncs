#include <iostream>
#include "myStack.h"

int main()
{
    int n, num;
    std::cin >> n;
    myStack stk(n);
    string line;
    while (n--)
    {
        cin >> line;
        if (line == "push")
        {
            cin >> num;
            stk.push(num);
        }
        else if (line == "pop") stk.pop();
        else if (line == "top") stk.top();
    }
    return 0;
}
