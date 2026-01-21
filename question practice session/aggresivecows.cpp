#include<iostream>
using namespace std;

bool amiabletoplaceccowswithmid( long long int stlloc[1000000],int n,int tc,int safedist){
  int cp=1;
  int prevcowkahanplacehaio=stlloc[0];//1
 for(int j=1;j<n;j++){
  if(stlloc[j]-prevcowkahanplacehaio>=safedist){
    cp++;
    prevcowkahanplacehaio=stlloc[j];
    if(cp==tc){
      return true;
    }


  }
}

return false;

}


 int main(){

  int n,c;
  cin>>n>>c;
  long long int stlloc[1000000];


  for (int i = 0; i <n; ++i)
  {
    cin>>stlloc[i];
  }

  sort(stlloc,stlloc+n);//1 2 4 8 9


  int s=0;
  int e=stlloc[n-1]-stlloc[0];
  int ans;

  while(s<=e){
  int mid=(s+e)/2;//4
  if(amiabletoplaceccowswithmid(stlloc,n,c,mid)){
    ans=mid;//3
    s=mid+1;

  }
  else{
    e=mid-1;
  }
}
cout<<ans<<endl;





    return 0;
 }


