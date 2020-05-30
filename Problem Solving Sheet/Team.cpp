#include<bits/stdc++.h>

using namespace std;

int main()
{
  int p,v,t,x,i,countx=0;

  scanf("%d",&x);

  while(x--){
    scanf("%d %d %d",&p,&v,&t);
    if(p+v+t>=2){
        countx++;

    }

  }
 cout << countx<<"\n";
}
