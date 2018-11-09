#include <bits/stdc++.h>
using namespace std;
 
int BFS(vector<int> graph[],int start,int n)
{
   bool visited[n+1] = {0};
   queue<int> q;
 
   q.push(start);
   int counter = 0;
   int node;
 
   memset(visited,0,sizeof(visited));
 
   while(!q.empty())
   {
      node =    q.front();
      q.pop();
      visited[node] = 1;
 
      for(int i=0; i<graph[node].size() ;++i)
      {
         /*if already visted*/
         if(visited[graph[node][i]])
            return 0;
         else
         {
            /*adding to queue*/
            q.push(graph[node][i]);
         }   
      }
      ++counter;
   }
 
   if(counter != n)
      return 0;
   else
      return 1;
}
int main()
{
   ios::sync_with_stdio(false);
 
   int n,m,u,v;
   cin>>n>>m;
 
   vector<int> graph[n+1];
   for(int i=0; i<m; ++i)
   {
      cin>>u>>v;
      graph[u].push_back(v);
   }
 
   if(BFS(graph,1,n))
      cout<<"YES\n";
   else
      cout<<"NO\n";
 
   return 0;
}