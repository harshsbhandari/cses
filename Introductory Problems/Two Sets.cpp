#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

// Good problem - resolve

void yo(){
    vector<int>arr;
    for(int i = 0; i <= 1e6; i++)
        arr.push_back((i*(i+1))/2);

    int n;
    cin>>n;

    int sum = (n*(n+1))/2;
    if(sum%2){
        cout<<"NO";
        return ;
    }
    cout<<"YES\n";

    vector<int>a;
    int low = 1, high = n;
    int halfSum = sum/2;

    int ind = lower_bound(arr.begin(), arr.end(), halfSum) - arr.begin();
    int difference = arr[ind] - halfSum;

    if(difference == 0){
        cout<<ind<<endl;
        for(int i = 1; i <= ind; i++){
            arr[i] = -1;
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<n-ind<<endl;
        for(int i = ind+1; i <= n; i++){
            if(arr[i] != -1)
                cout<<i<<" ";
        }
    }
    else{
        cout<<ind-1<<endl;
        for(int i = 1; i <= ind; i++){
            if(difference != i){
                arr[i] = -1;
                cout<<i<<" ";
            }
        }
        cout<<endl;
        cout<<n-ind+1<<endl;
        cout<<difference<<" ";
        for(int i = ind+1; i <= n; i++){
            if(arr[i] != -1)
                cout<<i<<" ";
        }
    }
}

int32_t main(){
    fast;
    
    // int tt;
    // cin>>tt;
    
    // while(tt--)
        yo();
	
    return 0;
}
