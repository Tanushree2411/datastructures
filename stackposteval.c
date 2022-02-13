#include<stdio.h>     
#include<string.h>               
int stack[30];             
char post[30];             
int top=-1;                  
void pushstack(int tmp);       
void evaluate(char c);         
void main()
{
   int i,l;
   printf("Insert a postfix notation :: ");
   gets(post);                    
   l=strlen(post);               
   for(i=0;i<l;i++)
   {
      if(post[i]>='0' && post[i]<='9')
      {
          pushstack(i);             
      }
      if(post[i]=='+' || post[i]=='-' || post[i]=='*' ||
      post[i]=='/' || post[i]=='^')       
      {
          evaluate(post[i]);            
      }
   }                      
   printf("\n\nResult :: %d",stack[top]);
  
}

void pushstack(int tmp)          
{
   top++;                              
   stack[top]=(int)(post[tmp]-48);     
}

void evaluate(char c)       
{
   int a,b,ans;       
   a=stack[top];       
   stack[top]='\0';    
   top--;                
   b=stack[top];         
   stack[top]='\0';      
   top--;                
   switch(c)     
   {
      case '+':         
          ans=b+a;
          break;
      case '-':           
          ans=b-a;
          break;
      case '*':           
          ans=b*a;
          break;
      case '/':           
          ans=b/a;
          break;
      
      default:
          ans=0;      //else 0
   }
   top++;             //increment top
   stack[top]=ans;        //store the answer at top
}
