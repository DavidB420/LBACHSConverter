#define _CRT_SECURE_NO_WARNINGS //remove if not using msvc

#include "chs2lbaconv.h"

void getCHSPrompt()
{
	printf("Enter cylinder: ");
	scanf("%d", &cylinder);

	printf("Enter head: ");
	scanf("%d", &head);

	printf("Enter sector: ");
	scanf("%d", &sector);

	printf("Enter SPT (Sectors Per Track): ");
	scanf("%d", &SPT);

	printf("Enter HPC (Heads Per Cylinder): ");
	scanf("%d", &HPC);
}

void outputLBA()
{
	printf("\nLBA: %d", (cylinder * head + head) * SPT + (sector-1));
}