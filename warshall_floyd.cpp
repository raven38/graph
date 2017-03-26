#include <algorithm>

using namespace std;

#define MAX_V 10
#define MAX_E 10

int d[MAX_V][MAX_V];
int V;

void warshall_floyd(){
  for(int i=0;i<V;i++)
    for(int j=0;j<V;j++)
      for(int k=0;k<V;k++)
	d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
}

