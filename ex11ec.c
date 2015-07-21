#include <stdio.h>

int main(int argc, char *argv[])
{
	//go through each string in argv

	int i = sizeof(argv)/sizeof(char);
	while(i > 0)
	{
		printf("arg %d: %s\n", i, argv[i]);
		i--;
	}

	// let's make our own array of strings
	char *states[] = {
		"California", "Oregon", "Washington", "Texas"
	};

	i = 4; // watch for this
	while(i >= 0) {
		printf("state %d: %s\n", i+1, states[i]);
		i--;
	}

	return 0;
}
