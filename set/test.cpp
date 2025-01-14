#include"set.h"

int main()
{
    setType a={0},b = {0},c = {0};
    unsigned x;
    cout<<"input the elements of set a,1-"<<32*N<<",until input 0:\n";
    setPut(a);
    cout<<"input the elements of set b,1-"<<32*N<<",until input 0:\n";
    setPut(b);
    cout<<"a=";
    setDisplay(a);
    cout<<"b=";
    setDisplay(b);
    cout<<"input x:";
    cin>>x;
    putX(a,x);
    cout<<"put"<<x<<"in a=";
    setDisplay(a);
    cout<<"c=a+b=";
    com(c,a,b);
    setDisplay(c);
    cout<<"c=a-b=";
    setdiff(c,a,b);
    setDisplay(c);
    if(inc(a,b))
    {
        cout<<"a<=b\n";
    }
    else    cout<<"not a<=b\n";
    cout<<"input x:";
    cin>>x;
    if(in(a,x))
    {
        cout<<x<<"in a\n";
    }
    else cout<<x<<"not in a\n";
}