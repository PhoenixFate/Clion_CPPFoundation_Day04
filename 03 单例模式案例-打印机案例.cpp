//
// Created by phoenix on 3/2/2019.
//

#include <iostream>
#include <string>
using  namespace std;

class Printer
{
private:
    Printer()
    {
        this->count=0;
        cout<<"private Printer()"<<endl;
    }
    Printer(const Printer& printer)
    {

    }

    static Printer* printer;
    int count;
public:
    static Printer* getInstance()
    {
        return printer;
    }

    void printText(string text)
    {
        ++count;
        cout<<text<<endl;
        cout<<" \b打印机使用了："<<this->count<<" \b次"<<endl;
    }
};

Printer* Printer::printer=new Printer();


void test301()
{
    Printer* printer=Printer::getInstance();
    printer->printText("abc");
    printer->printText(" \b离职申请");
    printer->printText("why");
}


int main3()
{
    test301();
    return 0;
}

