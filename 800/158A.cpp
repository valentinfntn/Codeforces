#include <bits/stdc++.h>
using namespace std;
#define el '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=0 ,k=0 ,res=0;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>> arr[i];
    }
    for (int j=0;j<n;j++){
        if (arr[j]>0 && arr[j]>= arr[k-1]) res++; 
    }
    cout<<res<<el;
    return 0;
}