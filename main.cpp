#include <iostream>
#include "dynarr.h"

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
