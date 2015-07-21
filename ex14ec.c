#include <stdio.h>
#include <ctype.h>
#include <string.h>
// forward declarations
void print_letters(char arg[], int lengthOfString);

void print_arguments(int argc, char *argv[])
{
	int i = 0;
	int lengthOfString;
	for(i = 0; i < argc; i++){
		lengthOfString = strlen(argv[i]);
		printf("Number of bytes in arg %i: %i",i,lengthOfString);
		print_letters(argv[i],lengthOfString);
	}
}

void print_letters(char arg[], int lengthOfString)
{

	int i = 0;

	for(i = 0; i <= lengthOfString; i++) {
	char ch = arg[i];

		if((isgraph(ch) || isblank(ch)) && !isalpha(ch)){
			printf("'%c' == %d ", ch, ch);
		}
	}
	printf("\n");
}
int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}
