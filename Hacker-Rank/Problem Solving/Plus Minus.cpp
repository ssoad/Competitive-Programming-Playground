#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int po=0,ne=0,ze=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            po++;
        }
        else if(arr[i]==0)
        {
            ze++;
        }
        else if(arr[i]<0)
        {
            ne++;
        }
    }

    double r1=0,r2=0,r3=0;
    r1=(double)po/n;
    r2=(double)ne/n;
    r3=(double)ze/n;
    printf("%.6f",r1);
    printf("\n%.6f",r2);
    printf("\n%.6f",r3);
}
