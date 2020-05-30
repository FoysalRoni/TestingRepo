#include <bits/stdc++.h>
using namespace std;

int main(){
 int x,cnt1=0,cnt2=0;
 char name;

 cin>> x;
 while(x--){

    cin>> name;
    if(name=='A'){
        cnt1++;
    }else{
       cnt2++;
    }
 }

 if(cnt1>cnt2){
    cout << "Anton\n";
 }else if(cnt2>cnt1){
   cout << "Danik\n";
 }else{
  cout << "Friendship\n" ;
 }

return 0;
}
