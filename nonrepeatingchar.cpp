#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    if(str.size()<=2){
        cout << "INVALID INPUT";
        return 0 ;
    }
    unordered_map<char , int>freq;
      unordered_map<char , int>index;

      // storing freq , index of char 
      for(int i =0 ; i<str.size(); i++){
        freq[str[i]]++;  // a -2 , c - 3 storing freq 
         if(index.find(str[i])== index.end()){  // yaani yeh char nhi aaya h abhi tk index  , to avoid multiple same char adding in index 
               index[str[i]] = i;  // eg - abaaabbb  - we just to store a - 0 , b-1 first time kb aaya vo char
         }
      }

      // to find non repeating char 
      // most repeating char 
      // first repeating char 


      // 1)  to find first  non repeating char  - freq should be 1 
      char non_repeat ;
      bool hasnonrepeat = false; // yeh isliye kyuki aagr non repeat nhi h toh hme null return krna h 
      // toh hmee isse pta chlega ki value return krni h ya phir null 
      for(int i =0 ; i<str.size(); i++){
        if(freq[str[i]]==1){
            non_repeat = str[i];
            hasnonrepeat = true;
            break;
        }
      }

// 2) most repeating char  - agr multiple char same time repeat horhe h toh jo char phle aarha h vo return kro
int maxcount  = INT_MIN;
char mostrepeating ;

for(int i = 0 ; i<str.size(); i++){
if(freq[str[i]] > maxcount){
maxcount = freq[str[i]];  // maxfreq ko store krrhe h ... abhi ke liye baad m check krege kaun phle aaya kaun baad m 
}   // w - 5 , e - 5 , g - 5 
}

int firstidx = INT_MAX;

for(auto &it : freq ){  // greq map pr iterate krrhe h 
    if(it.second == maxcount){ // kya us char ki freq max freq h 
        char alpha = it.first;   // ab us char ko nikal liya
      int curridx =   index[alpha];   // us char ka index 
        if(curridx < firstidx){
            mostrepeating = alpha;
            firstidx = curridx;
        }
   
    }

}


// 3) first repeating char 
char firstrepeating ;
bool hasfirstrepeat = false;
for(int i =0 ;i<str.size();i++){
    if(freq[str[i]]>1){
           firstrepeating = str[i];
           hasfirstrepeat = true;
           break;
    }
}

// checking 

hasfirstrepeat ? cout <<    firstrepeating  : cout << "None";
cout << endl;
hasnonrepeat ? cout <<   non_repeat  : cout << "None";
cout << endl;
cout << mostrepeating << endl;
}