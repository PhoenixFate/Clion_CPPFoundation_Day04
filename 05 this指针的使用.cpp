//
// Created by phoenix on 3/2/2019.
//
#include <iostream>
using  namespace std;
class Person5
{
public:
    Person5()
    {

    }
    Person5(int age)
    {
        this->age=age;
    }
    void compareAge(Person5&p)
    {
        if(this->age==p.age)
        {
            cout<<" \b年龄相等"<<endl;
        }
        else
        {
            cout<<" \b年龄不相等"<<endl;
        }
    }
    Person5& addAge(Person5&p)
    {
        this->age+=p.age;
        return *this;
    }
    int age;
};

void test501()
{
    Person5 p1(10);
    cout<<"p1.age:"<<p1.age<<endl;
    Person5 p2(10);
    p1.compareAge(p2);
    p1.addAge(p2).addAge(p2).addAge(p2);
    cout<<"p1.age:"<<p1.age<<endl;

    cout<<"--------------------------------------------------------"<<endl;
    Person5 p9;
    cout<<"p9.age:"<<p9.age<<endl;
    Person5 *p8=new Person5;
    cout<<"p8.age:"<<p8->age<<endl;
    Person5 *p7=new Person5();
    cout<<"p7.age:"<<p7->age<<endl;
}

int main5()
{
    test501();
    return 0;
}

