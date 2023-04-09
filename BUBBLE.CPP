#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[100],i,j,size;
 cout<<"Enter size of array:-";
 cin>>size;
 cout<<"Enter elements in array:-";
 for(i=0;i<size;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<size-1;i++)
 {
 for(j=0;j<size-1-i;j++)
 {
  int temp;
  if(a[j]>a[j+1])
  {
   temp=a[j];
   a[j]=a[j+1];
   a[j+1]=temp;
  }
 }
 }
 cout<<"Sorted Array is:-\n";
  for(i=0;i<size;i++)
  {
   cout<<a[i];
  }
  getch();
}