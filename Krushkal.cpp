#include <iostream>
#include <stdlib.h>

using namespace std;

int i, j, k, a, b, u, v, n, ne = 1;
int  m=0, cost[9][9], p[9];
int find(int);
int uni(int, int);

int main(){
int min;
  cout<<"Kruskal's Algorithm\n";
  cout<<"\nEnter the number of Vertices:";
  cin>>n;
  cout<<"\nEnter the Cost Adjacency Matrix:\n";

  for (i = 1; i<= n; i++) {
    for (j = 1; j <= n; j++) {
      cin>>cost[i][j];
      if (cost[i][j] == 0)
        cost[i][j] = 999;
    }
  }
  cout<<"The edges of Minimum Cost Spanning Tree are: \n";

  while (ne < n) {
    for (i = 1, min = 999; i <= n; i++) {
      for (j = 1; j <= n; j++) {
        if (cost[i][j] <min) {
          min = cost[i][j];
          a = u = i;
          b = v = j;
        }
      }
    }
    u = find(u);
    v = find(v);
    
    if (uni(u, v)) {
      cout<<endl<<ne++ << " edge "<<"("<<a<<" , "<<b<<")"<<" = "<<min;
      m += min;
    }
    cost[a][b] = cost[b][a] = 999;
  }
  cout<<"\nMinimum cost = "<<m;
}
int find(int i) {
  while (p[i])
    i = p[i];
  return i;
}
int uni(int i, int j) {
  if (i != j) {
    p[j] = i;
    return 1;
  }
  return 0;
}
