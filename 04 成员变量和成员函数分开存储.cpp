//
// Created by phoenix on 3/2/2019.
//
#include <iostream>
using  namespace std;

class Person4
{

public:
    int age;
    void func()
    {

    }
    static int b;
    static void sfunc()
    {

    }
    double c;
};


void test401()
{
    cout<<"sizeof(Person):"<< sizeof(Person4)<<endl;
    Person4 p;
    cout<<"sizeof(p):"<<sizeof(p)<<endl;
    Person4 *p2=new Person4;
    cout<<"sizeof(p2):"<< sizeof(p2)<<endl;

}

void test402()
{
    Person4 p1;
    p1.func();
    Person4 p2;
    p2.func();
}

int main4()
{
    test401();
    test402();
    return 0;
}

