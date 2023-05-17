

//Write a program of to sort the array using templates.//
#include<iostream>
 
#include<string.h>
 
using namespace std;
 
template<class t>
 
class array
 
{
 
    int size;
 
   t a[30];
 
public:
 
   void get()
 
  {
 
    cout<<"\n Enter the  array size";
 
    cin>>size;
 
    cout<<"\n Enter "<<size<<" elements";
 
    for(int i=0;i<size;i++)
 
     cin>>a[i];
 
  }
 
void print()
 
{
    cout<<"\n The sorted array is: ";
 
       for (int i=0;i<size;i++)
 
        cout<<a[i]<<"\t";
 
}
 
void sort()
 
{
 
  int i,j;
 
  t temp;
 
  for(i=0;i<size;i++)
 
    for(j=0;j<size-1;j++)
 
      if(a[j]>a[j+1])
 
        {
 
          temp=a[j];
 
           a[j]=a[j+1];
 
           a[j+1]=temp;
 
        }
 
}
 
};
 
int main()
 
{
 
    array<int>obj;
 
    array<char>objch;
 
    array<float>objfl;
 
    cout<<"\n sorting integers";
 
    obj.get();
    
    obj.sort();
 
    obj.print();
 
        cout<<"\n sorting characters";
 
    objch.get();
 
    objch.sort();
 
    objch.print();
 
        cout<<"\n sorting decial nums";
 
    objfl.get();
 
    objfl.sort();
 
    objfl.print();
 
    return 0;
 
}
