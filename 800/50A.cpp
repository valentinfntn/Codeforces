#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m=0,n=0;
    cin>>m>>n;
    int res = m*(n/2) + (n%2)*(m/2);
    cout<<res<<el;
    return 0;
}
