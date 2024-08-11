#include<iostream>
using namespace std;

int main()
{
    double mc;
    float tips,tax;
    cin>>mc>>tips>>tax;
    int total;
    double tot=mc+(mc*(tips/100))+(mc*(tax/100));
    total=tot;
    if((tot-total)>=0.5)
    {
        cout<<total+1;
    }
    else
    {
        cout<<total;
    }
}
