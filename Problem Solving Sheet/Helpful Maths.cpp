#include<bits/stdc++.h>
using namespace std;

int main()
{
  char x[101];
  cin>>x;
  int p=0,len = strlen(x);
  sort(x,x+len);
  for(int i=0; i<len; i++){
    if(x[i]=='+'){
        p++;
    }
  }
  for(int i=p; i<len; i++){
    cout<<x[i];
    if(i<len-1){
        cout<<"+";
    }
  }
}

