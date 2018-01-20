// author: Mihai Oltean
// MIT license

#include <stdio.h>

bool read_file(const char* filename)
{
	FILE *f;
	f = fopen(filename, "r");
	if (f) {
		//...
		return true;
	}
	return false;
}

int main()
{
	if (read_file("test.txt")) {
		// computations
		// print results
	}
	else
		printf("Cannot read file ...\n");

	getchar();
    return 0;
}

