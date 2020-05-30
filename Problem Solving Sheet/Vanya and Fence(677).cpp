#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,h,cnt=0,a;
  scanf("%d %d",&n,&h);

  while(n--){

    scanf("%d",&a);
    if(a<=h){
        cnt++;
    }else{
     cnt+=2;
    }
  }
  printf("%d\n",cnt);
return 0;

}
