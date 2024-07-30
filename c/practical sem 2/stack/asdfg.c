#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/****IMPLEMENTATION OF STACK****/
#define max 100
int stack_arr[max];
int stack[max];
int top=-1;
// int first=-1;
/***/
int isfull(){
if(top==max-1){
return 1;
}
else{
return 0;
}
}
int isempty(){
if(top==-1){
return 1;
}
else{
return 0;
}
}
void push(int data){
// if(top==max-1)
if(isfull()){
printf("stack overflow \n");
return;
}
top+=1;
stack_arr[top]=data;
}
int pop(){
// if(top==-1)
if(isempty()){
printf("stack underflow \n");
exit(1);
}
int value=stack_arr[top];
top=top-1;
return value;
}
int peek(){
if(isempty()){
printf("stack underflow \n");
exit(1);
}
return stack_arr[top];
}
void print(){
int i;
if(top==-1){
printf("stack underflow \n");
return;
}
for(i=top;i>=0;i--){
printf("%d",stack_arr[i]);
printf("\n");
}
}
int main(){
// int data;
// push(1);
// push(2);
// push(3);
// push(4);
// // data = pop();
// data = pop();
// printf("%d \n",data);
// print();
// return 0;
int choice,data;
while(1){
printf("\n");
printf("1. push \n");
printf("2. pop \n");
printf("3. print the top element \n");
printf("4. print all the elements of stack \n");
printf("5. quit \n");
printf("enter your choice: ");
scanf("%d",&choice);
switch (choice)
{
case 1:
printf("enter element to be pushed : ");
scanf("%d",&data);
push(data);
break;
case 2:
data=pop();
printf("deleted element is : %d \n",data);
break;
case 3:
printf("the topmost element of stack is: %d \n",peek());
break;
case 4:
print();
break;
case5:
exit(1);
default:
printf("wrong choice \n");
}
}
return 0;
}