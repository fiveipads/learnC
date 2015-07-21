#include <stdio.h>

int main(int argc, char *argv[])
{

	char letter = 'L';
	char *word = "Word";
	char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };
	char **current_name = names;

	printf("This is a letter %c\n",letter);
	printf("This is a word %s\n",word);
	printf("This is a name %s\n", *current_name);
	
	return 0;
}
