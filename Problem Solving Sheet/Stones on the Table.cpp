#include<bits\stdc++.h>

using namespace std;

int main()
{
 int x,i,j,count=0;
 cin >> x;

 char C[x];

 cin >> C;

 for(i=0; i<x; i++)
 {
   if(C[i]==C[i+1]){
    count++;
   }

}

cout << count;
}
