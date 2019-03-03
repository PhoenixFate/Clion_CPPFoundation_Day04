//
// Created by Phoenix Fate on 2019-03-03.
//
#include <iostream>
#include <string>

using  namespace std;

class Building
{
    //为全局的好基友打开权限：友元函数；
    friend void goodkey(Building *building);
public:
    Building()
    {
        this->bedRoom = "卧室";
        this->sittingRoom = "客厅";
    }
public:
    string sittingRoom;
private:
    string bedRoom;


};

//全局函数 好基友；
//友元函数的目的：访问类中的私有变量
void goodkey(Building *building)
{
    cout<<"sittingRoom:"<<building->sittingRoom<<endl;
    cout<<"好朋友想访问卧室："<<building->bedRoom<<endl;
}


void test801()
{
    Building *building=new Building;
    goodkey(building);
}

int main8()
{
    test801();

    return 0;
}
