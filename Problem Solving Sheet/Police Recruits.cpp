#include<bits\stdc++.h>

using namespace std;

int main()
{
  int x,i,val,r=0,count=0 ;
  cin >> x;

  for(i=0; i<x; i++)
  {
      cin >> val;

      if(val>0){
        r = r+val;
      }else{
         r = r+val;
         if(r<0){
            count++;
            r=0;
         }

      }

  }
  cout << count << endl;

}
