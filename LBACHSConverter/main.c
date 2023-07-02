#include <stdio.h>
#include <ctype.h>
#include "lba2chsconv.h"
#include "chs2lbaconv.h"

int main()
{
	char userChoice;

	printf("LBA <-> CHS Converter\nWritten by David Badiei (c) 2023\nPlease choose your starting disk format (l) - LBA (c) - CHS: ");

	userChoice = toupper(getchar());

	switch (userChoice)
	{
		case 'L':
			getLBAPrompt();
			outputCHS();
			break;
		case 'C':
			getCHSPrompt();
			outputLBA();
			break;
		default:
			printf("Invalid choice given!\n");
			break;
	}

	return 0;
}