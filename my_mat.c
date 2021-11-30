#include <stdio.h>
//#include <conio.h>
#define INFINITY 9999
#define MAX 10
extern FILE *fp;
extern int matrix[10][10];
int func1(){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            fscanf(fp,"%d", &matrix[i][j]);
        }
    }
    return 0;
}
int dijkstra(int n,int startnode, int destination)
{
int cost[MAX][MAX],distance[MAX];
int visited[MAX],count,mindistance,nextnode,i,j;
//count gives the number of nodes seen so far
//create the cost matrix
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(matrix[i][j]==0)
cost[i][j]=INFINITY;
else
cost[i][j]=matrix[i][j];
//initialize ,distance[] and visited[]
for(i=0;i<n;i++)
{
distance[i]=cost[startnode][i];
visited[i]=0;
}
distance[startnode]=0;
visited[startnode]=1;
count=1;
while(count<n-1)
{
mindistance=INFINITY;
//nextnode gives the node at minimum distance
for(i=0;i<n;i++)
if(distance[i]<mindistance&&!visited[i])
{
mindistance=distance[i];
nextnode=i;
}
//check if a better path exists through nextnode
visited[nextnode]=1;
for(i=0;i<n;i++)
if(!visited[i])
if(mindistance+cost[nextnode][i]<distance[i])
{
distance[i]=mindistance+cost[nextnode][i];
}
count++;
}
return distance[destination];
}
int func3(int source, int destination){
    // this algorithm implements djaksta's algorithm to find the shortest pathe
    int x = dijkstra(10,source,destination);  
    x = (x == INFINITY) || (x == 0) ? -1 : x;
    return x; 
}
 int func2(int i, int j){
     int answer = func3(i,j);
     if(answer == -1){
         return 0;
     }
     else{
         return 1;
     }
 }
 

