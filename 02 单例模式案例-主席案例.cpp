//
// Created by phoenix on 3/1/2019.
//
#include <iostream>
using namespace std;

class Chairman
{
private:
    Chairman()
    {
        cout<<" \b已经创建了国家主席"<<endl;
    }
    Chairman(const Chairman & cm)
    {

    }
public:
    static Chairman*  instance()
    {
        return chairman;
    }
    void printChairman()
    {
        cout<<"printChairman()"<<endl;
    }
private:
    static Chairman *chairman;
};

Chairman* Chairman::chairman=new Chairman;

void test201()
{
    Chairman* chairman=Chairman::instance();
    chairman->printChairman();
    Chairman* c2=Chairman::instance();
    if(chairman==c2)
    {
        cout<<"the same chairman"<<endl;
    }

    //Chairman* cm3=new Chairman(*c2);
    //delete chairman;
    c2->printChairman();
}

void test202()
{
    Chairman* chairman=Chairman::instance();
    chairman->printChairman();
}

int main2()
{
    cout<<"----------------------------main()--------------------------"<<endl;
    test201();
    test202();
    return 0;
}

