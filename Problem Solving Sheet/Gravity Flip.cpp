#include<bits/stdc++.h>

using namespace std;

int main()
{
 int x;

 cin>> x;

 int arr[x],i,j,temp;

 for(i=0; i<x; i++)
 {
   scanf("%d",&arr[i]);

}
for(i=0; i<x; i++)
{
    for(j=0; j<x-i-1; j++){

        if(arr[j]>arr[j+1]){

            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

for(i=0; i<x; i++){
    printf("%d ",arr[i]);

}
cout << endl;

}
