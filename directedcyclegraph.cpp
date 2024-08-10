// DAY27question3
//https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

#include<bits/stdc++.h>
using namespace std;

class Solution{

public:

bool dfs(vector<int>adj[],vector<int>&visited,vector<int>&pathvisited,int index){
      
      visited[index]=1;
      pathvisited[index]=1;
      
      for(auto &it:adj[index]){
          if(pathvisited[it]){
              return true;
          }
          else{
              if(!visited[it]){
                  if(dfs(adj,visited,pathvisited,it)){
                      return true;
                  }
              }
          }
      }
      pathvisited[index]=0;
      return false;
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        
        vector<int> visited(V,0);
        vector<int> pathvisited(V,0);
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                visited[i]=1;
                pathvisited[i]=1;
                
                if(dfs(adj,visited,pathvisited,i)==true){
                    return true;
                }
            }
        }
        return false;
    }
};