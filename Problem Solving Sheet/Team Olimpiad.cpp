#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],one[n],two[n],three[n],i,j,x=0,y=0,z=0,m,w;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        if(arr[i]==1){
            one[x]=i+1;
            x++;
        }else if(arr[i]==2){
          two[y] = i+1;
          y++;
        }else if(arr[i]==3){
           three[z] = i+1;
           z++;
        }
    }
    m = min(x,y);
    w = min(m,z);
    cout<<w<<endl;

    for(i=0; i<w; i++){
        cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
    }
}
