#include<bits\stdc++.h>

using namespace std;

int main()
{
 int x,temp,s=0,d=0,i,j,t=1;


  cin >> x;
 int arr[x];

 for(i=0; i<x; i++){
     cin >> arr[i];
 }

  for(i=0; i<x; i++){
    if(t){
        if(arr[i]>arr[x-1]){
            s = s+ arr[i];
        }else{
           s = s+arr[x-1];
           i--;
           x--;
        }
        t = 0;
    }else{
       if(arr[i]>arr[x-1]){
            d = d+ arr[i];
        }else{
           d = d+arr[x-1];
           i--;
           x--;
        }
        t = 1;
    }

  }

  cout << s <<" "<< d;

}

