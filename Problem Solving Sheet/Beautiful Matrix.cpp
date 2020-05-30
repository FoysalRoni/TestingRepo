#include<bits/stdc++.h>

using namespace std;
int main()
{
   int x,i,j,res;
   for(i=1; i<=5; i++){
    for(j=1; j<=5; j++){
        cin>>x;
        if(x==1){
            res = abs(i-3)+abs(j-3);
        }
    }

   }
   cout<<res<<endl;

}

