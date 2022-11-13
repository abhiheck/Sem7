#include <bits/stdc++.h>
using namespace std;

//structure of a item with constructor
struct Item{
int profit, weight;
//constructor
Item(int profit,int weight){
this->profit=profit;
this->weight=weight;
}
};

bool cmp(Item a, Item b){
double r1=(double)a.profit/(double)a.weight;
double r2=(double)b.profit/(double)b.weight;
return r1>r2;
}

//function
double fknapsack(int W,struct Item arr[],int N){
sort(arr,arr+N,cmp);
double finalprofit=0.0;
for(int i=0; i<N;i++){
if(arr[i].weight<=W){
W -=arr[i].weight;
finalprofit += arr[i].profit;
}else{
finalprofit += arr[i].profit * ((double)W/(double)arr[i].weight);
break;}
}
return finalprofit;
}

int main(){
int W=50;
Item arr[]={{60,10},{100,20},{120,30}};
int N=sizeof(arr)/sizeof(arr[0]);
cout<<"maximum profit"<<fknapsack(W,arr,N);
return 0;
}
