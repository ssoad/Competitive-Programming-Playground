#include<iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    for(int i = 0; i < n; i++){
        int marks=0,c=0;
        cin >> marks;
        c=5-(marks%5);
        if(marks>=38&&(c < 3))
           {
               cout << marks + c << endl;
           }
        else
            {
                cout << marks << endl;
            }
}

}
