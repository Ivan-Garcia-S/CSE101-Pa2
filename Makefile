#------------------------------------------------------------------------------
# Makefile for CSE 101 Programming Assignment 8
#
# make                   makes Arithmetic
# make BigIntegerTest        makes BigIntegerTest
# make clean             removes all binaries
# make checkArithmetic       checks Arithmetic for memory errors
# make checkBigIntegerTest          checks BigIntegerTest for memory errors
#------------------------------------------------------------------------------

Arithmetic : Arithmetic.o List.o BigInteger.o
	gcc -std=c11 -Wall -o Arithmetic Arithmetic.o List.o BigInteger.o

Arithmetic.o : Arithmetic.c List.h BigInteger.h
	gcc -std=c11 -Wall -c Arithmetic.c

BigIntegerTest : BigIntegerTest.o List.o BigInteger.o
	gcc -std=c11 -Wall -o BigIntegerTest BigIntegerTest.o List.o BigInteger.o

BigIntegerTest.o : BigIntegerTest.c List.h BigInteger.h
	gcc -std=c11 -Wall -c BigIntegerTest.c

ListTest: ListTest.o List.o
	gcc -std=c11 -Wall -o ListTest ListTest.o List.o

ListTest.o : ListTest.c List.h
	gcc -std=c11 -Wall -c ListTest.c

List.o : List.c List.h
	gcc -std=c11 -Wall -c List.c

BigInteger.o : BigInteger.c BigInteger.h
	gcc -std=c11 -Wall -c BigInteger.c

clean :
	rm -f Arithmetic ListTest BigInteger.o Arithmetic.o ListTest.o List.o BigIntegerTest.o BigIntegerTest

checkBigIntegerTest : 
	valgrind --leak-check=full BigIntegerTest

checkArithmetic:
	valgrind --leak-check=full Arithmetic
