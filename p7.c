#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
int visited[10],a[10][10],n; 
void dfs(int city) 
{ 
 int i; 
 visited[city]=1; 
 for(i=0;i<n;i++) 
 { 
 if(visited[i]==0 && a[city][i]==1) 
 { 
 printf("%d-->%d ",city,i); 
 dfs(i); 
 } 
 } 
} 
int main(){ 
 int i,j,src; 
 clock_t start,end; 
 double clk; 
 printf("ENTER THE NO. OF CITIES\n"); 
 scanf("%d",&n); 
 
 printf("ENTER THE MATRIX REPRESENTATION\n"); 
 for(i=0;i<n;i++) 
 { 
 for(j=0;j<n;j++) 
 { 
 scanf("%d",&a[i][j]); 
 } 
 visited[i]=0; 
 } 
 
 
 printf("ENTER SOURCE CITY\n"); 
 scanf("%d",&src); 
 
 printf("THE DEPTH-FIRST SEARCH PATH IS:\n"); 
 start=clock(); 
 dfs(src); 
 end=clock();
 clk=(double)(end-start)/CLOCKS_PER_SEC; 
 printf("\n"); 
 
 printf("TIME TAKEN FOR EXECUTION: %f\n",clk); 
} 
