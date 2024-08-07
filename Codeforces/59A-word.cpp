#include <iostream>
#define soads_game int main()
#define stop return 0;
using namespace std;

soads_game
{
   string a;
    int l=0,u=0;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        if (isupper(a.at(i)))
            u++;
        else if (islower(a.at(i)))
            l++;
    }

    if (u>l)
        transform(a.begin(), a.end(), a.begin(), ::toupper);
    else
        transform(a.begin(), a.end(), a.begin(), ::tolower);
    cout <<a<< endl;
    stop

}



