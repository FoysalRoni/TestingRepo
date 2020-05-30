#include<bits/stdc++.h>

using namespace std;

int main()
{
  string stringx;
  int i,u=0,l=0;
  cin >> stringx;

  for(i=0; i<stringx.length(); i++){
       if(stringx[i]>='A' && stringx[i]<='Z'){
         u++;

       }else if(stringx[i]>='a' && stringx[i]<='z')
        l++;
  }

    for(i=0; i<stringx.length(); i++){
     if(u>l){
          stringx[i] = toupper(stringx[i]);
        }else{
         stringx[i] = tolower(stringx[i]);
        }
    }

  cout << stringx << endl;

}
