#include"head.h"

long Fabricate(int m,int n)
{
    return Multi(m,1) / (Multi(n,1) * Multi(m-n,1));
}