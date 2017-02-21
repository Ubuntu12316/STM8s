#include <stdio.h>
#include <stdlib.h>
struct BOOK
{
	int i;
	int j;
};
struct BOK
{
	int i;
	int j;
	void (*p)(struct BOOK);
};


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() 
{
	struct BOK i;
	return 0;
}

void Fun(struct BOOK i)
{
	i.i = 213;
	printf("hello\n");
}
