//
// Created by phoenix on 3/2/2019.
//
#include <iostream>
using  namespace std;

class Person6
{
public:
    void show()
    {
        cout<<"show()"<<endl;
    }
    void showAge()
    {
        if(this== nullptr)
        {
            return;
        }
        cout<<"age:"<<age<<endl;
    }
    int age;
};

void test601()
{
    Person6* p1=NULL;
    p1->show();
    p1->showAge();
}

int main6()
{
    test601();
    return 0;
}

