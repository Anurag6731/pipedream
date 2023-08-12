#include<stdio.h>
#define n 5
int s1[n],s2[n];
int top1=-1,top2=-1;
int count=0;
void push1(int data)
{
  if(top1==n-1){
    printf("\n queue is overflow you can't enter");
  }
  else
  {
    s1[++top1]=data;
  }
}
int  pop1()
{
  return s1[top1--];
}
void push2(int data)
{
  s2[++top2]=data;
}
int pop2()
{
  return s2[top2--];
}
void enqueue(int x)
{
  push1( x);
  count++;
}
void dequeue()
{
  if(top1==-1&&top2==-1)
  {
    printf("\n queue is underflow");
  }
  else{
    int i,a,b;
    for(i=0;i<count;i++){
      a=pop1();
      push2(a);
    }
    b=pop2();
    printf("\n deleted elements is %d",b);
    count--;
    for(i=0;i<count;i++){
     a=pop2();
      push1(a);
    }
  }
}
int peek()
{
  return(s2[top2]);
}
void display()
{
  int i;
  for(i=0;i<count;i++){
    printf("  %d",s1[i]);
  }
}
