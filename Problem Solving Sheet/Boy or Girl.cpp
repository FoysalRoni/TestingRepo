#include<bits/stdc++.h>

using namespace std;

int main()
{
 char stringx[100];
 int i,j,countx = 0,res;

 cin.getline(stringx,100);

 for(i=0; i<strlen(stringx); i++){
    for(j=i+1; j<strlen(stringx); j++){
        if(stringx[i] == stringx[j]){
            countx++;
            break;

        }

    }

 }
  res = strlen(stringx)-countx;
  if(res%2==0){
    cout << "CHAT WITH HER!" << endl;
  }else{
     cout << "IGNORE HIM!" << endl;
  }

}
