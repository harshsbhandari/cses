#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long 
#define float double
#define endl '\n'

bool palindromCheck(string s){
    map<char, int> mp;
    int countOdd = 0;
    for(auto i : s)
        mp[i]++;
    for(auto i : mp){
        if(i.second%2)
            countOdd++;
    }
    return countOdd <= 1 ? true : false;
}

void yo(){
    string s;
    cin>>s;

    if(!palindromCheck(s)){
        cout<<"NO SOLUTION";
        return;
    }
    string ans;
    for(int i = 0; i < s.length(); i++)
        ans.push_back('$');
    map<char, int> mp;
    for(auto i : s)
        mp[i]++;
    
    int i = 0, j = s.length()-1;
    char oddChar = '$';
    for(auto it : mp){
        int freq = it.second;
        if(it.second%2 == 0){
            // Fill from beginning
            int count = freq/2;
            while(count--){
                ans[i] = it.first;
                i++;
            }
            
            // Fill from ending
            count = freq/2;
            while(count--){
                ans[j] = it.first;
                j--;
            }
        }
        else
            oddChar = it.first;
    }
    // Placing the middle character if any
    for(int i = 0; i < ans.length(); i++){
        if(ans[i] == '$')
            ans[i] = oddChar;
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
