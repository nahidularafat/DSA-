// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  
  
  int ma= 0;
  for(int i=0; i<n;i++)
  {
       ma= max(ma,a[i]);
  }
  
  int freq[ma+1] ={0};
  
  for(int i=0;i<n;i++)
  {
      freq[a[i]]++;
  }
  
  for(int i=0;i<ma+1;i++)
  {
      if(freq[i]!=0)
      {
          cout<<i<<"->" << freq[i]<<endl;
      }
  }
    return 0;
}
