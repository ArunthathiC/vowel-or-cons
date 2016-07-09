#include<stdio.h>
void main(){
  char a,b[10]={a,e,i,o,u,A,E,I,O,U};
  scanf("%c",&a);
  for(i=0;i<sizeof(b[i])-1;i++){
    if(a==b[i])
      printf("The character is vowel");
    else
      printf("The Character is consonant");
      }
  }
