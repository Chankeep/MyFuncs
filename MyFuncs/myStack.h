#pragma once
#include <iostream>
using namespace std;
class myStack
{
public:
    myStack() = default;
    myStack(int n) {
        n++;
        stk = new int[n];
        p = stk;
    }
    ~myStack() { delete[] stk; }
    void push(int num);
    void pop();
    void top();
    bool isempty();
private:
    int* stk;
    int* p;
    int size = 0;
};
