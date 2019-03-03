//
// Created by phoenix on 3/2/2019.
//
#include <iostream>
using namespace std;

class Person7
{
public:
    Person7()
    {
        this->a=10;
        this->b=20;
    }

    void  show() const  //常函数
    {
        cout<<"a:"<<a<<endl;
        cout<<"b:"<<b<<endl;
        this->b=100;
        cout<<"b:"<<b<<endl;
    }

    int a;
    mutable int b;
};

void test701()
{
    Person7 p1;
    p1.show();

    //常对象 不允许修改对象属性
    const Person7 p2;
    //p2.a=200;
    p2.show();
}

int main()
{
    test701();
    return 0;
}

