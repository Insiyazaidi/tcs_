#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ;
    int star =0;
    int ast =0;
    getline(cin , s);
    for(char a: s){
        if(a=='*'){
          star++;
        }
        else{

            ast++;
        }
    }
    if(star==ast){
        cout << "0";
    }
   else {
    cout << star-ast;
   }
  

}