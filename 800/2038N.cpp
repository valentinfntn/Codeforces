#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=0;
    cin>> n;
    while(n--){
        string exp;
        cin>>exp;
        if (exp[1]=='>'){
            if (exp[0] < exp[2]) exp[1] = '<';
            else if (exp[0] == exp[2]) exp[1] = '=';
            cout<<exp<<el;
        }
        else if (exp[1]=='<'){
            if (exp[0] > exp[2]) exp[1] = '>';
            else if (exp[0] == exp[2]) exp[1] = '=';
            cout<<exp<<el;
        }
        else {
            if (exp[0] < exp[2]) exp[1] = '<';
            else if (exp[0] > exp[2]) exp[1] = '>';
            cout<<exp<<el;
        }
    }
    return 0;
}