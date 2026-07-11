#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    getline(cin , s);  // getline(source, destination);   ... terminal se s m daaldo 
vector<int>arr;
    stringstream ss (s); // break line into words 
string numb;
    while(getline(ss , numb , ',')){  // syntax getline(khase , khapr , kisbasis pr)
   arr.push_back(stoi(numb)); // stoi - conv string to integer 
    }
for(int a : arr){
    cout << a << " ";
}
}