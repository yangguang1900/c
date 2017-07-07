#include <stdio.h>

int main()
{
	char tbb;
	tbb = getchar();
	tbb = (tbb>='A'&&tbb<='Z')?tbb+32:tbb;
	putchar(tbb);
	
	return 0;
}