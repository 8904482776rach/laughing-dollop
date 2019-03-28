#include "max.h"
float max(char c,float a ,float b)
 {
     if(c=='+')
     {
         int s= a+b;
         return s;
     }
     if(c=='*')
     {
         int r= a*b;
         return r;
     }
     if(c=='-')
     {
         int u=a-b;
         return u;

     }
     if(c=='/')
     {
         float j=a/b;
         return j;
     }
 }
