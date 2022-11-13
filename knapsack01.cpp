#include <bits/stdc++.h>
using namespace std;
int v[20][20];
int max(int a,int b){
return (a>b)?a:b;}

int main(){
int i,j,wt[20],pt[20],n,capacity;
cout<<"enter the no. of Items :";
cin>>n;
for(i=1;i<=n;i++){
cout<<"enter the weight and profit of the item: ";
cin>>wt[i]>>pt[i];
}

cout<<"enter the capacity of knapsack :";
cin>>capacity;

for(i=1;i<=n;i++)
v[i][0]=0;

for(j=1;j<=capacity;j++)
v[0][j]=0;

for(i=1;i<=n;i++)
for(j=1;j<=capacity;j++){
if(wt[i]>j){
v[i][j]=v[i-1][j];
}else
v[i][j]=max(v[i-1][j],v[i-1][j-wt[i]]+pt[i]);
}
cout<<"the table is :";
for(i=1;i<=n;i++)
for(j=1;j<=capacity;j++){
cout<<"\t"<<v[i][j];
cout<<"\n";}
cout<<"the maximum profit is :"<<v[n][capacity];
}
