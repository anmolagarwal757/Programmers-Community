#include<iostream>
using namespace;

int main()
{
  int size,no,count=0;
  cin>>size>>no;
  int a[size];
  for(int i=0;i<size;i++)
  {
      cin>>a[i];
      if(a[i]==no)
        count++;
  }
  if(count!=0)
    cout<<"YES";
   else 
    cout<<"NO";

  return 0;

}