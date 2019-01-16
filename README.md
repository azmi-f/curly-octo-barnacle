# curly-octo-barnacle
the main file:
#include <iostream>
#include "dynarr.h"
#include"dynarr.cpp"

using namespace std;

int main()
{
    cout << "creating object" << endl;
    cout<<"enter the size of array"<<endl;
    int a;
    cin>>a;
    dynArr *obj = new dynArr(a);
    for(int i=0;i<a;i++)
    {

        obj->setValue(i, i+1);
    }
    int x,b;
    cout<<"enter the index"<<endl;
    cin>>b;
    x= obj->getValue(b);
    cout<<"value at index "<<b<<" is= "<< x <<endl;
    return 0;
}

the .cpp file:
#include "dynarr.h"
#include <iostream>
using namespace std;
dynArr:: dynArr()
{

    data = NULL ;
    size = 0;
}
dynArr :: dynArr(int s)
{

    data = new int[s];
    size = s;
}
dynArr :: ~dynArr()
{

  delete [] data;
}
int dynArr::getValue(int index)
{

    return data[index];
}
void dynArr:: setValue(int index, int value)
{

    data [index]=value;
}


the header file:
#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED


class dynArr
{
private:
    int * data;
    int size ;
public:
 dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int,int);
    int getValue(int);

};
#endif // DYNARR_H_INCLUDED
