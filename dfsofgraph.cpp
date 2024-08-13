// DAY30
//https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
 public:
    // Function to return a list containing the DFS traversal of the graph.
    
    void dfs(int start,vector<int> adj[],int visited[],vector<int> &liststore){
        
        visited[start]=1;
        liststore.push_back(start);
        
        for(auto it:adj[start]){
            
            if(!visited[it]){
                dfs(it,adj,visited,liststore);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int visited[V]={0};
        int start=0;
        vector<int>liststore;
        dfs(start,adj,visited,liststore);
        
        return liststore;
    }
};