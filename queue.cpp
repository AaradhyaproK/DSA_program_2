#include<iostream>
using namespace std;
const int size=100;
template<class T>
void selection(T A[],int n){
  T temp;
  int i,j,min;
  for(i=0;i<=n-2;i++){
    min=i;
    for(j=i+1;j<n;j++){
      if(A[min]>A[j])
        min=j;
    }
    temp=A[i];
    A[i]=A[min];
    A[min]=temp;
  }
  cout<<"\nSorted List \n";
  for(i=0;i<n;i++)
    cout<<"\t"<<A[i];
}
int main(){
  int i,n,A[size];
  float B[size];
  cout<<"\nEnter element : ";
  cin>>n;
  cout<<"\nEnter elements";
  for(i=0;i<n;i++)
    cin>>A[i];
  selection(A,n) ; 

  cout<<"\nEnter element : ";
  cin>>n;
  cout<<"\nEnter elements";
  for(i=0;i<n;i++)
    cin>>B[i];
  selection(B,n) ; 
  return 0;
}