#include<bits/stdc++.h>
using namespace std;
bool isprime(int number){
       if(number < 2) return false;   // Handle 0 and 1

for(int i = 2 ; i<=sqrt(number); i++){
    if(number%i==0){ // ek baar bhi divisible hogya
        return false;
    }
}
return true;

}


int main(){ // sum of first n prime no 
    int n;
    cin>>n;
  int i =2;
int result =0;
int count = 0;
  if(n == 0){
        return 0;
    }
while(count<n){

      if(isprime(i)){
            result += i;   // Add the prime
            count++;       // One more prime found
        }

        i++; 

}
cout << result;

}