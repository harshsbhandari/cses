#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

void yo(){
    int n;
    cin>>n;

    int sum = (n*(n+1))/2;
    
    for(int i = 0; i < n-1; i++){
        int x;
        cin>>x;
        sum -= x;
    }

    cout<<sum;
}

int32_t main(){
    fast;
    
    // int tt;
    // cin>>tt;
    
    // while(tt--)
        yo();
	
    return 0;
}
