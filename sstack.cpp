#include<iostream.h>
#include<conio.h>
int stack[100],n=100,top=-1;
void push(int val){
if(top>=n-1){
cout<<"Stack overflow"<<endl;
}
else{
top++;
stack[top]=val;
}
}
void pop(){
if(top<=-1){
cout<<"Stack underflow"<<endl;
}
else{
cout<<"The popped element is:-"<<stack[top]<<endl;
}
}
void display(){
if(top>=0){
cout<<"stack elements are:-";
for(int i=top;i>=0;i--){
cout<<stack[i]<<" ";
}
cout<<endl;
}
else{
cout<<"stack is empty";
}
}
int main(){
int ch,val;
clrscr();
cout<<"1.push in stack:-"<<endl;
cout<<"2.pop in stack:-"<<endl;
cout<<"3.display in stack:-"<<endl;
cout<<"4.exit"<<endl;
do{
cout<<"Enter choice:- "<<endl;
cin>>ch;
switch(ch){
case 1:{
cout<<"Enter valued to be push:-"<<endl;
cin>>val;
push(val);
break;
}
case 2:{
pop();
break;}
case 3:{
display();
break;
}
case 4:{
cout<<"exit"<<endl;
break;
}
default:{
cout<<"invalid choice"<<endl;
}
}
}
while(ch!=4);
return 0;
}