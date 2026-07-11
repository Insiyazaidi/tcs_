#include<bits/stdc++.h>
using namespace std;
int main(){
 // int ke baad string input le rhe ho cin.ignore () use kro 
    int totalincome =0 ;
     int totalexpense =0 ;
    cin >> totalincome;
    cin.ignore();
    unordered_map<string , int>mp;
    vector<string>v;  // order wise store krne ke liye expenses - food , grocery 
    while(true){
        string cat="";
        int exp;
        getline(cin , cat);
        if(cat=="done")break;
        cin>>exp;
        cin.ignore(); // ab phir se loop m next input string hoga isliye yha ignore likga 
        if(mp.find(cat)==mp.end()){  // agr vo map m nhi h 
            v.push_back(cat);
        }
        mp[cat] += exp;  // aur phle baar h toh add krdo , agr dursi baar h toh existing value m bhi add krdo 
          totalexpense = totalexpense+exp;
    }
    
    cout << totalexpense << endl;
    for(auto s : v){
 cout << s << " : " << mp[s] << endl; 
    }
}