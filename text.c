#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "max.h"

int main()
{  //char c;
   printf("welcome to main :) \n ");
   assert(max('+',10,15)==25);
   assert(max('*',10,15)==150);
   assert(max('-',15,15)==0);
   assert(max('/',5,2)==2.5);
   printf("OK");
   return 0;
}
