#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int res, n;
    for (int i=0;i<25;i++){
        cin>>n;
        if (n==1){
            res = abs(i/5 - 2) + abs(i%5 - 2);
            cout<<res<<el;
            break;
        }
    }
    return 0;
}