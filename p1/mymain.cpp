#include<iostream>
using namespace std;
#include"myarea.h"

int main()
{
    double width,length;
    cout<<"请输入长和宽："<<endl;
    cin>>length>>width;
    cout<<"矩形的面积为:"<<rect(width,length)<<endl;
    cout<<"请输入圆的半径：";
    double r;
    cin>>r;
    cout<<"圆的面积为："<<circle(r)<<endl;
    system("pause");
}
