#include<iostream>
using namespace std;
#include"myarea.h"

int main()
{
    double width,length;
    cout<<"�����볤�Ϳ�"<<endl;
    cin>>length>>width;
    cout<<"���ε����Ϊ:"<<rect(width,length)<<endl;
    cout<<"������Բ�İ뾶��";
    double r;
    cin>>r;
    cout<<"Բ�����Ϊ��"<<circle(r)<<endl;
    system("pause");
}
