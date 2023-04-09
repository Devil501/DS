#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int arr[100][100],i,size,j,row,col;
 cout<<"Enter size of rows:-";
 cin>>row;
 cout<<"Enter size of colums:-";
 cin>>col;
 cout<<"Enter elements in array:-\n";
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
  cin>>arr[i][j];
 }
 }
 cout<<"Array is:-\n";
  for(i=0;i<row;i++)
 {
   for(j=0;j<col;j++)
   {
    cout<<arr[i][j]<<"\t";
   }
   cout<<"\n";
 }
 getch();
}