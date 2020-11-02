/*********************************************************************************
 * * Ivan Garcia-Sanchez, igarci33
 * * 2020 Spring CSE101 PA2
 * * BigIntegerTest.c
 * * *********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"List.h" 
#include"BigInteger.h"

int main(int argc, char* argv[]){
   BigInteger A = newBigInteger();
   BigInteger B = newBigInteger();
   BigInteger C = newBigInteger();
   BigInteger D = newBigInteger();
   BigInteger E = newBigInteger();
   BigInteger F = newBigInteger();
   BigInteger G = newBigInteger();
   BigInteger H = newBigInteger();   
   BigInteger I = newBigInteger();
   BigInteger J = newBigInteger();
   BigInteger K = newBigInteger();
   BigInteger L = newBigInteger();
   BigInteger M = newBigInteger();
   BigInteger N = newBigInteger();
   BigInteger O = newBigInteger();
   BigInteger P = newBigInteger();
   BigInteger Q = newBigInteger();
   BigInteger R = newBigInteger();
   BigInteger S = newBigInteger();
   BigInteger T = newBigInteger();
   BigInteger U = newBigInteger();
   BigInteger V = newBigInteger();
   BigInteger W = newBigInteger();


   printf("right before stringtobigint\n");
   A = stringToBigInteger("-10000");
   B = stringToBigInteger("1456788");
   C = stringToBigInteger("0000000");
   D = stringToBigInteger("+00023456");
   E = stringToBigInteger("-9");
   F = stringToBigInteger("7");
   G = stringToBigInteger("123456");
   H = stringToBigInteger("-1200000000043033");
   I = stringToBigInteger("00023456");
   T = stringToBigInteger("+102");
   U = stringToBigInteger("22");
   V = stringToBigInteger("-51");
   


   printBigInteger(stdout,A);
   printBigInteger(stdout,B);
   printBigInteger(stdout,C);
   printBigInteger(stdout,D);
   printBigInteger(stdout,E);
   printBigInteger(stdout,F);
   printBigInteger(stdout,G);
   printBigInteger(stdout,H);
   printBigInteger(stdout,I);
    
   J = sum(C,C);
   K = diff(D,I);
   L = sum(E,F);
   M = diff(H,A);
   N = diff(E,B);
   
   printf("right before pringbigint\n");
   printBigInteger(stdout,J);
   printBigInteger(stdout,K);
   printBigInteger(stdout,L);
   printBigInteger(stdout,M);
   printBigInteger(stdout,N);
   printBigInteger(stdout,U);
   printBigInteger(stdout,V);

   
   printf("before prod\n");
   O = prod(A,C);
   P = prod(T,F);
   Q = prod(E,H);
   R = prod(I,T);
   S = diff(F,H);
   W = prod(U,V);
   printf("after prod\n");
    
    printBigInteger(stdout,O);
   printBigInteger(stdout,P);
   printBigInteger(stdout,Q);
   printBigInteger(stdout,R);
   printBigInteger(stdout,S);
   printBigInteger(stdout,W);

   add(T,U,V);
   printf("T: ");
   printBigInteger(stdout,T);

   freeBigInteger(&A);
   freeBigInteger(&B);
   freeBigInteger(&C);
   freeBigInteger(&D);
   freeBigInteger(&E);
   freeBigInteger(&F);
   freeBigInteger(&G);
   freeBigInteger(&H);
   freeBigInteger(&I);
   freeBigInteger(&J);
   freeBigInteger(&K);
   freeBigInteger(&L);
   freeBigInteger(&M);
   freeBigInteger(&N);
   freeBigInteger(&O);
   freeBigInteger(&P);
   freeBigInteger(&Q);
   freeBigInteger(&R);
   freeBigInteger(&S);
   freeBigInteger(&T);
   freeBigInteger(&U);
   freeBigInteger(&V);
   freeBigInteger(&W);

}
