#include <iostream>
using namespace std;
void printFibo(int n){
static int n1=0,n2=1,n3;
if(n>0){
n3=n1+n2;
n1=n2;
n2=n3;
cout<<n3<<" ";
	printFibo(n-1);
}
}
int main(){
int n;
cout<<"enter the term :";
cin>>n;
if(n>=2){
cout<<"0"<<" "<<"1"<<" ";
printFibo(n);
}else if(n=1){
cout<<"0 "<<"1";
}else{
cout<<0;}
}

