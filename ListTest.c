/*********************************************************************************
 * * Ivan Garcia-Sanchez, igarci33
 * * 2020 Spring CSE101 PA2
 * * ListTest.c
 * * *********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"List.h"

int main(int argc, char* argv[]){
   List A = newList();
   List B = newList();
   List C = newList();

   prepend(A,1);
   prepend(A,2);
   append(A,7);
   moveFront(A);
   insertBefore(A,5);
   printList(stdout,A);
   printf("\n");
 
   B = copyList(A);
   moveBack(B);
   set(B,10);
   insertAfter(B,11);
   printList(stdout,B);
   printf("\n");

   C = copyList(B);
   moveFront(C);
   set(C,100);
   insertAfter(C,101);
   printList(stdout,C);
   printf("\n");
   
   size_t num = 1;
   num -= 9;
   printf("%lu\n",num);

   long number = 000;
   printf("%ld",number);
}
