#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string st1,st2;
    cin>>st1>>st2;
    int len = st1.length();
    for(int i=0;i<len;i++){
        if (towlower(st1[i]) < towlower(st2[i])) {
            cout<<"-1"<<el;
            return 0;
        }
        else if (towlower(st1[i]) > towlower(st2[i])){
            cout<<"1"<<el;
            return 0;
        }
    }
    cout<<"0"<<el;
    return 0;
}