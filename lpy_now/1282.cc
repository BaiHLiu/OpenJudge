#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<cstdio>
#include<iomanip> 
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register 
#define LL long long 
#define pi 3.14
using namespace std;

void SayHello(int year = 2000, int month = 1, int day = 1);
int main()
{
    int yy, mm, dd;
    cin>>yy>>mm>>dd;
    SayHello(yy, mm, dd);
    SayHello(yy, mm);
    SayHello(yy);
    SayHello();
}

void SayHello(int year, int month, int day)
{
    cout<<"Hello, ";
    cout<<"today is ";
    cout<<year;
    cout<<"-";
    cout<<month;
    cout<<"-";
    cout<<day;
    cout<<".";
    cout<<endl;
}
/**************************************************************
	Problem: 1282
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

