#include<iostream>
using namespace std;
#define soads_game int main()


soads_game
{
   string a;
    bool r = true;
    char soad;
    cin >> a;

    for(int i = 1; i < a.length(); i++)
    {
        if(islower(a.at(i)))
        {
            r = false;
        }
    }

    if(r)
    {
        for(int j = 0; j < a.length(); j++)
        {
            if(islower(a.at(j)))
                soad = toupper(a.at(j));
            else
                soad = tolower(a.at(j));
            cout << soad;
        }
    }
    else
        cout << a;
    return 0;
    return 0;
}

