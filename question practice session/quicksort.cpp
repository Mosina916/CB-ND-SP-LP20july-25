#include<iostream>
using namespace std;
int pivotkaindex(int *arr,int s,int e){

  int pivotele=arr[e];//5

  int i=s-1;
  int j;
  for(j=s;j<e;j++){
    if(arr[j]<=pivotele){
      i++;
      swap(arr[i],arr[j]);
      
    }
  }
  swap(arr[i+1],arr[e]);

  return i+1;




}
void quicksort(int s,int e,int arr[]){

  // base case
  if(s>=e){
    return;
  }



  // rec case


  int index=pivotkaindex(arr,s,e);//7
  quicksort(s,index-1,arr);

   quicksort(index+1,e,arr);


}

 int main(){


  // int arr[]={3,1,6,8,2,1,1,0,4,13,12,5};

  int arr[]={3,1,6,8,2,1,1,0,4,13,12,5};
  int n=sizeof(arr)/sizeof(int);
  quicksort(0,n-1,arr);

  for (int i = 0; i <n; ++i)
  {
    cout<<arr[i]<<endl;
  }

 


    return 0;
 }


