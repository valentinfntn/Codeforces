#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=0, res=0;
    cin>> n;
    while (n--){
        int P,V,T;
        cin>>P>>V>>T;
        int sum = P+V+T;
        if (sum>1) res ++;
    }
    cout<<res<<el;
    return 0;
}