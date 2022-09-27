#include <bits/stdc++.h>
using namespace std;


int main() {

     int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
      arr[i]=1;
   }
   for(int i=2;i<n;i++){
       int sum=0;
      for(int j=0;j<i;j++){
          sum=sum+arr[j];
      }
      arr[i]=sum;
   }
int p= n-1;
 long long int tmp=pow(2,p);
cout<<tmp*arr[n-1];

}
