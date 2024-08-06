#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

void yo(){
    int a, b;
    cin>>a>>b;
    // x+2y = a
    // 2x+y = b
    // Solve these equations, and get values of 'x' and 'y' in terms of 'a' and 'b'
    // As we are have those values present with us
    
    if((2*b-a >= 0) && ((2*b-a)%3 == 0) && (2*a-b >= 0) && ((2*a-b)%3 == 0))
        cout<<"YES";
    else
        cout<<"NO";

    cout<<endl;
}

int32_t main(){
    fast;
    
    int tt;
    cin>>tt;
    
    while(tt--)
        yo();
	
    return 0;
}
