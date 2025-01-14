#include"set.h"

void setPut(setType s)
{
    unsigned x;
    cin>>x;
    while(x)
    {
        putX(s,x);
        cin>>x;
    }
}

void setDisplay(const setType s)
{
    unsigned c,i;
    unsigned bitmask;
    if(Null(s))
    {
        cout<<"{ }"<<endl;
        return;
    }
    cout<<"{";
    for(i=0;i<N;i++)
    {
        bitmask = 1;
        for(c=1;c<=32;c++)
        {
            if(s[i]&bitmask)
            {
                cout<<i*32+c<<",";
                bitmask<<=1;
            }
        }
    }
    cout<<"\b\b}\n";
}

void putX(setType s,unsigned x)
{
    unsigned bitmask = 1;
    bitmask<<=((x-1)%32);
    s[(x-1)/32] = bitmask;
}

void com(setType c,const setType a,const setType b)
{
    for(int i=0;i<N;i++) c[i] = a[i] | b[i];
}

void setin(setType c,const setType a,const setType b)
{
    for(int i=0;i<N;i++) c[i] = a[i] & b[i];
}

void setdiff(setType c,const setType a,const setType b)
{
    for(int i=0;i<N;i++) c[i] = a[i] & (~(a[i] & b[i]));
}

bool inc(const setType a,const setType b)
{
    bool t = true;
    for(int i=0;i<N;i++)
    {
        if(a[i] | b[i] !=b[i]) t = false;
    }
    return t;
}
bool in(const setType s,unsigned x)
{
    unsigned bitmask = 1;
    bitmask <<= ((x-1)%32);
    if(s[(x-1)/32] & bitmask) return true;
    return false;
}

bool Null(const setType s)
{
    bool t = true;
    for(int i=0;i<N;i++)
    {
        if(s[i]) t = false;
    }
    return t;
}