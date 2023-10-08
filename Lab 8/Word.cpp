//Word


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int low=0,up=0;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>=97)
            low++;
        else
            up++;
    }
    if(low>=up)
    {
        //for ( range_declaration : range_expression )

        for(auto x:s)
        {

            cout << (char)tolower(x);
        }

    }
    else
    {
        for(auto x:s)
        {

            cout << (char)toupper(x);
        }
    }


    return 0;
}
