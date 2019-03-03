//
// Created by Phoenix Fate on 2019-03-03.
//
#include <iostream>
#include <string>
using namespace std;

class Building2
{
    //让好基友类作为building的好朋友
    friend class GoodGay;
public:
    Building2();

public:
    string sittingRoom;
private:
    string bedRoom;
};

Building2::Building2()
{
    this->sittingRoom="客厅";
    this->bedRoom="卧室";
}

class GoodGay
{
public:
    GoodGay();
    void visit();
private:
    Building2 * building;
};

GoodGay::GoodGay()
{
    this->building=new Building2;
}

void GoodGay::visit()
{
    cout<<"好基友正在访问："<<this->building->sittingRoom<<endl;
    cout<<"好基友正在访问："<<this->building->bedRoom<<endl;
}


void test901()
{
    GoodGay goodGay;
    goodGay.visit();
}

int main9()
{
    test901();
    return 0;
}
