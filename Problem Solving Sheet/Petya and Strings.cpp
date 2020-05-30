#include<bits\stdc++.h>

using namespace std;

int main()
{
  string x,y;
  int i;
  cin >> x;
  cin >> y;


for(i=0; i< x.length(); i++){
    x[i] = tolower(x[i]);
    y[i] = tolower(y[i]);

}
if(x==y){
        cout << "0"<<endl;

    }else if(x>y){
        cout << "1"<< endl;
    }else{
      cout << "-1" << endl;
    }

}
