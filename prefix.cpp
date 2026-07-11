 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     int n;
     cin>>n;
     string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr , arr+n);
    string ans ;
    string first = arr[0]; // flower
    string last = arr[n-1];  // flqtyy
    for(int i =0; i<first.size();i++){
        if(first[i]==last[i]){
            ans = ans+first[i];
        }
        else{
            break;
        }
    } 
cout << ans;

 }





// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<string> arr(n);

//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     cout << endl;
// }