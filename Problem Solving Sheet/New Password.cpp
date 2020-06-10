#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,i;
cin>>n>>k;
string s;
char a = 'a';
char b = 'a';
if(n==k){
for(i=1; i<=n; i++){
 s+= a;
 a++;
}
}
else{
for(i=1; i<=k; i++){
s+=a;
a++;
}
for(i=1; i<=(n-k); i++){
 s+=b;
 b++;
 if(i%k==0){
   b = 'a';
 }

}
}
cout << s<<endl;

}
