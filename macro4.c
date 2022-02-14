//to write multiple line in macrocs using '\'
#include <stdio.h>
#define PRINT(i, limit)								 \
	while (i < limit) {								 \
		printf("Mit ");							 \
		i++;											 \
	}
int main()
{
	int i = 0;
	PRINT(i, 10);
	return 0;
}

