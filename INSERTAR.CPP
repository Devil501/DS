#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int arr[100],i,size,pos,elem;
 cout<<"Enter size of array:-";
 cin>>size;
 cout<<"Enter elements in array:-\n";
 for(i=0;i<size;i++)
 {
  cin>>arr[i];
 }
 cout<<"Etnter element you want insert:-";
 cin>>elem;
 cout<<"Enter position of element:-";
 cin>>pos;
 for(i=size;i>=pos;i--)
 {
  arr[i+1]=arr[i];
 }
 arr[pos]=elem;
 size++;
 cout<<"Array is:-\n";
  for(i=0;i<size;i++)
 {
  cout<<arr[i];
 }
 getch();
}