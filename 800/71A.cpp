#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=0;
    cin>> n;
    while (n--){
        string str;
        cin>>str;
        int l = str.length();
        if (l > 10) str = str[0]+to_string(l-2)+str[l-1];
        cout<<str<<el;
    }
    return 0;
}