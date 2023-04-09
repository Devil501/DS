#include<iostream.h>
#include<conio.h>
 int arr[100],i,size;
void input()
{
  cout<<"Enter size of array:-";
 cin>>size;
 cout<<"Enter elements in array:-\n";
 for(i=0;i<size;i++)
 {
  cin>>arr[i];
 }

}
void output()
{
 cout<<"Array is:-\n";
  for(i=0;i<size;i++)
 {
  cout<<arr[i];
 }
}
void main()
{
 clrscr();
 input();
 output();
 getch();
}