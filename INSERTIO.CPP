#include<iostream.h>
#include<conio.h>
void main()
{

 clrscr();
 int arr[100],i,j=0,size,key;
 cout<<"Enter size of array:-";
 cin>>size;
 cout<<"Enter elements in array:-\n";
 for(i=0;i<size;i++)
 {
  cin>>arr[i];
 }
 for(i=1;i<size;i++)
 {
  key=arr[i];
  j=i-1;
  while(j>=0 && arr[j]>key)
  {
  arr[j+1]=arr[j];
  j=j-1;
  }
  arr[j+1]=key;
 }
 cout<<"Array is:-\n";
  for(i=0;i<size;i++)
 {
  cout<<arr[i]<<" ";
 }
 getch();

}