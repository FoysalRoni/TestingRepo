#include<bits\stdc++.h>

using namespace std;

int main()
{
    string st;
    int i,c1,c2,s=0,start1,start2,temp;
    cin >> st;

        start1 = abs(26-(st[0]-97));
        start2 = abs(st[0]-97);
        if(start1>start2){
              s = s+start2;
        }else{
             s = s+start1;

        }

   for(i=0; i<st.length()-1; i++){
        temp = st[i+1]-st[i];
        if(temp<0){
            temp = temp*(-1);
        }
        if(temp>13){
            temp = 26-temp;
        }
       s = s+temp;
    }

   cout << s <<endl ;

}
