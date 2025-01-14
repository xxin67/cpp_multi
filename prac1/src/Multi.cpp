long Multi(int m,int n)
{   
    long mul = 1;
    for(m;m>n;m--)
    {
        mul *= m;
    }
    return mul;
}


