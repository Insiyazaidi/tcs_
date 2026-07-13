#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; // no of test cases 
    cin>>t;
      cout << "Number of test cases = " << t << endl;
    while(t>0){
             int n;
        cin>>n;

        cout << "\nReading test case..." << endl;
        cout << "n = " << n << endl;

        vector<int>arr(n);
        int x , y;
        cin>> x >>  y ; // range 
         cout << "x = " << x << ", y = " << y << endl;
        for(int i = 0 ;i<n;i++){ // taking input in array 
            cin>>arr[i];
        }
             cout << endl;
int count = 0;
        for(int i =0 ; i<n ;i++){
            for(int j = i+1;j<n;j++){
                string s1 = (to_string(arr[i])+ to_string(arr[j])); // eg 5 , 15 will be 515 
                int sum1 = stoi(s1);
                if(sum1>=x && sum1<=y){
                    count++;
                }


                if(arr[i]!=arr[j]){    // considering reverse concationation 
                    string s2 = (to_string(arr[j])+ to_string(arr[i])); // same can be 155
                int sum2= stoi(s2);
                if(sum2>=x && sum2<=y){
                    count++;
                }
                }
            }


        }

   cout << " count " << count << endl;
 t--;
    }

}