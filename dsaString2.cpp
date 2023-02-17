#include <bits/stdc++.h> 
vector<pair<char,int>> duplicate_char(string s, int n){
    // Write your code here.
    vector<int>mp(255);
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    vector<pair<char,int>>v;
    for(int i=0;i<255;i++){
        if(mp[i]>1){
          v.push_back(make_pair(char(i), mp[i]));
        }
    }
    return v;
}