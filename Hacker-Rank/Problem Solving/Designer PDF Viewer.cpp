#include<iostream>
using namespace std;
int main()
{
    int l[26];
    for(int i=0;i<26;i++)
    {
        cin>>l[i];
    }
    getchar();
    string s;
    getline(cin,s);
    int m=0;
    for(int i=0;i<s.size();i++)
    {
        if(m<l[s.at(i)-97])
        {
            m=l[s.at(i)-97];
        }
    }

    cout<<m;

    return 0;
}
