
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cont=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
            cont++;
    }
    if(cont==4 || cont==7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
