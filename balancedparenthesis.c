//program to check for balanced parentheses
#include<stdio.h>
#include<stdlib.h>
char stack[100];
int top=-1;
void push(char ch)
{
 stack[++top]=ch;
}
int  main()
{
  char exp[100],ch;
  int i;
  printf("Enter the expression");
  scanf("%s",exp);
  for(i=0;exp[i]!='\0';i++)
    {
      ch=exp[i];
      if((ch>='a'&& ch<='z') ||(ch>='A'&& ch<='Z') ||(ch>='0'&& ch<='9')||( ch=='+'||ch=='-'|| ch=='*' ||ch=='%'||ch=='/'))
           continue;
      if (ch=='(' ||ch=='[' ||ch=='{' )
               push(ch);
      else if((ch=='}'&& stack[top]=='{' )||( ch==')'&& stack[top]=='(')||(ch==']'&& stack[top]=='[') ) 
       top--;
       else
       {
         printf("Unbalanced");
           return 0;
       }
    
    }  
   if(top==-1)
    printf("Balanced");
 return 0;
}
