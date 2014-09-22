#include "liba.h"
#include <stdio.h>

extern void printmain();

class stest
{
public:
	stest() {
		printf("start sliba construct\n");
		doprintmain();
		printf("end sliba construct\n");
	}

private:
	
};

class test
{
public:
	test() {
		printf("start liba construct\n");
		doprintmain();
		printf("end liba construct\n");
	}

private:
	static stest *b;
};

stest *test::b = new stest();

static test a;

void printliba()
{
	printf("this is in liba\n");
}

void doprintmain()
{
	printf("main in liba\n");
	printmain();
	printf("main in liba end\n");
}

// void mytest()
// {
// 	printf("hello mytest\n");
// }
