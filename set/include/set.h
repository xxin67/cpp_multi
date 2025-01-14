#include<iostream>
using namespace std;
const unsigned N = 4;
typedef unsigned setType[N];
void setPut(setType s);
void setDisplay(const setType s);
void putX(setType s,unsigned x);
void com(setType c,const setType a,const setType b);
void setin(setType c,const setType a,const setType b);
void setdiff(setType c,const setType a,const setType b);
bool inc(const setType a,const setType b);
bool in(const setType s,unsigned x);
bool Null(const setType s);