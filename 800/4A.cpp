#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=0;
    cin>> n;
    if (n>2 && (n % 2 == 0)) cout<<"YES"<<el;
    else cout<<"NO"<<el;
    return 0;
}