#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

void yo(){
    string s;
    cin>>s;
    int n = s.length(), ans = INT_MIN;

    if(n == 1){
        cout<<"1";
        return ;
    }

    // Simple implementation
    char x = s[0];
    int count = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == x)
            count++;
        else{
            x = s[i];
            count = 1;
        }
        ans = max(ans, count);
    }
    
    cout<<ans;
}

int32_t main(){
    fast;
    
    // int tt;
    // cin>>tt;
    
    // while(tt--)
        yo();
	
    return 0;
}
