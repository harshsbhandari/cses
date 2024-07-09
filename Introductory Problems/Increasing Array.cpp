#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

void yo(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0; i < n; i++)
        cin>>arr[i];

    int count = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i-1]){
            count += (arr[i-1]-arr[i]);
            arr[i] = arr[i-1];
        }
    }
    
    cout<<count;
}

int32_t main(){
    fast;
    
    // int tt;
    // cin>>tt;
    
    // while(tt--)
        yo();
	
    return 0;
}
