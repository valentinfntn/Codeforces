#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=0, res=0;
    cin>> n;
    while(n--){
        string str;
        cin>> str;
        if (str[1]=='+') res++;
        else res--;
    }
    cout<<res<<el;
    return 0;
}