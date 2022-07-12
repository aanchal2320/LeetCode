// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to determine if graph can be coloured with at most M colours such
// that no two adjacent vertices of graph are coloured with same colour.
bool isvalid(int ind,int color[],bool graph[101][101],int n,int col){
   for(int i=0;i<n;i++){
       if(i!=ind&&graph[i][ind]==1 && color[i]==col){
           return false;
       }
   }
   return true;
}

bool solve(bool graph[101][101], int m, int n,int color[],int ind){
   if(ind==n){
       return true;
   }
   for(int i=1;i<=m;i++){
       if(isvalid(ind,color,graph,n,i)){
           color[ind]=i;
           if(solve(graph,m,n,color,ind+1)) return true;
           color[ind]=0;
           
       }
   }
   return false;
   
}

bool graphColoring(bool graph[101][101], int m, int n) {
   // your code here
   int color[n]={0};
  if(solve(graph,m,n,color,0))return true;
  return false;

}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        cout << graphColoring(graph, m, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends