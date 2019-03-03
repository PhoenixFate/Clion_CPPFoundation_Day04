#include <iostream>
using namespace std;
class Person1
{
public:
    Person1()
    {
        cout<<"Person1()"<<endl;
    }
    static int age;//静态成员变量 共享数据  类内声明 类外初始化
private:
    static int other;//静态成员变量也是有权限的
public:
    //静态成员函数不可以访问普通的成员变量
    static void func(){
        cout<<"func()"<<endl;
    }
    static void fun2();
    void fun3();
};

int Person1::age=0;//静态成员变量 类外初始化
int Person1::other=10;

void Person1::fun2() {
    cout<<"fun2()"<<endl;
}

void Person1::fun3()
{
    cout<<"fun3()"<<endl;
}

void test101()
{
    //通过对象访问属性
    Person1 p1;
    p1.age =10;
    Person1 p2;
    p2.age=20;
    //共享数据
    cout<<"p1.age"<<p1.age<<endl;
    cout<<"p2.age"<<p2.age<<endl;
    //通过类名访问属性
    cout<<"Person1::age:"<<Person1::age<<endl;
    cout<<"Person1::age:"<<Person1::age<<endl;
    cout<<"private static:"<<endl;
    p1.func();
    p2.func();
    Person1::func();
    Person1::fun2();
    p1.fun3();
}


int main1()
{
    test101();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}