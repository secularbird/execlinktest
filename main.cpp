#include "liba.h"
#include <stdio.h>

class test2
{
public:
	test2() {
		printf("start construct\n");
		doprintmain();
		a = 100;
		printf("end construct\n");
	}

	int geta() {
		return a;
	}

private:
	int a;
};

static test2 a;

void printmain()
{
	printf("a is %d\n", a.geta());
	printf("this is in main\n");
}

int main(int argc, char const *argv[])
{
	printliba();

	mytest();

	doprintmain();
	/* code */
	return 0;
}
