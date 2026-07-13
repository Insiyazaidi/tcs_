#include<bits/stdc++.h>
using namespace std;
 vector<vector<pair<int , int>>>adj;
 vector<int>dijkstra(int source , vector<int>&parent , int vertices){
    vector<int> dist(vertices + 1, INT_MAX);
    dist[source] =0;
    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>>pq;  // ascending order m store kro 
    pq.push({0 , source}); // this stores distance , vertex 
while(!pq.empty()){
    int d = pq.top().first;
    int u = pq.top().second;
    pq.pop();
    if(d>dist[u])continue;
    for(auto edge: adj[u]){
        int v = edge.first;
        int weight = edge.second;
        if(dist[u] +weight <dist[v]){  // agr vo chota h 
             dist[v] = dist[u]+weight;
             parent[v] = u;
             pq.push({ dist[v] ,v});
        }
    }
}
return dist;

}

void printpath(vector<int>parent , int target){
    if(parent[target]==-1){
       cout << target;
       return; 
    }

printpath(parent , parent[target]);
cout << " -> " << target;


}
int main(){

   
int vertices;
int edges ;
cin >> vertices;
cin>>edges;  // total no of lines in graph 
// taking input kaun kis se connected hai + weight 
adj.resize(vertices+1);
for(int i =0 ; i<edges ; i++){
    int u , v , weight;
    cin >> u >> v >> weight;
    adj[u].push_back({v , weight}) ;  // u se v jaane m kitna weight lgega ,, 0 - {1 , 3} means 0 to 1 jaane m 3 weight lgega 
    adj[v].push_back({u, weight}) ;
}
int source , destination ;
cin >>source >> destination ;
vector<int>parent(vertices+1 , -1);
vector<int>dis = dijkstra(source , parent , vertices);
 cout << "shortest distance from"  << source << "to" << destination <<  "is" ;
 printpath(parent , destination);
 cout << endl;
cout << "total weight" << endl;
cout << dis[destination];
}

// Nodes numbered 1 to V → use vertices + 1.
 // Nodes numbered 0 to V−1 → use vertices.


