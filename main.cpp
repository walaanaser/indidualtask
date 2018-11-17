#include <iostream>

using namespace std;


int game(int ar[],int s,int n ){
    if(n==s-1){
      return 0;
    }
    else{
      if(ar[n+1]<ar[n+2]){
        return ar[n+1]+game(ar,s,n+1);
      }
      else{
        return ar[n+2]+game(ar,s,n+2);
      }
    }

}

int main()
{
   int sizze;
   cout<<"enter the size of array : "<<endl;
   cin>>sizze ;
   int arr[sizze] ;
   cout<<"ARRAY"<<endl;
   for(int i=0 ;i<sizze;i++){
    if(i==0){
        arr[i]=0 ;
        cout<<arr[i]<<endl;
    }
    else{
      cin>>arr[i];
    }
   }
   cout<<game(arr,sizze,0);

    return 0;
}
