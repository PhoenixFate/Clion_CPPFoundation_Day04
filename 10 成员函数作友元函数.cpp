//
// Created by Phoenix Fate on 2019-03-03.
//
#include <iostream>
#include <string>
using namespace std;

class Building3;

//只让visit作为building3的好朋友
//visit2 不可以访问building3的私有变量
class GoodGay3
{
public:
    GoodGay3();
    void visit();
    void visit2();
private:
    Building3 * building;
};



class Building3
{
    friend void GoodGay3::visit();
public:
    Building3();

public:
    string sittingRoom;
private:
    string bedRoom;
};

Building3::Building3()
{
    this->sittingRoom="客厅";
    this->bedRoom="卧室";
}






GoodGay3::GoodGay3()
{
    this->building=new Building3;
}

void GoodGay3::visit()
{
    cout<<"好基友正在访问："<<this->building->sittingRoom<<endl;
    cout<<"好基友正在访问："<<this->building->bedRoom<<endl;
}

void GoodGay3::visit2()
{
    cout<<"好基友正在访问："<<this->building->sittingRoom<<endl;
    //cout<<"好基友正在访问："<<this->building->bedRoom<<endl; //不行
}


void test1001()
{
    GoodGay3 gay3;
    gay3.visit();
}


int main()
{
    cout<<"---------------------10-------------------"<<endl;
    test1001();
    return 0;
}