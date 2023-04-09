#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int arr[100],i,size;
 cout<<"Enter size of array:-";
 cin>>size;
 cout<<"Enter elements in array:-\n";
 for(i=0;i<size;i++)
 {
  cin>>arr[i];
 }
 cout<<"Array is:-\n";
  for(i=0;i<size;i++)
 {
  cout<<arr[i];
 }
 getch();
}