#define _CRT_SECURE_NO_WARNINGS //remove if not using msvc

#include "lba2chsconv.h"

void getLBAPrompt()
{
	printf("Enter SPT (Sectors Per Track): ");
	scanf("%d", &SPT);

	printf("Enter HPC (Heads Per Cylinder): ");
	scanf("%d", &HPC);

	printf("Enter sector value in LBA: ");
	scanf("%d", &lbaValue);
}

void outputCHS()
{
	printf("\n%s%d\n","Cylinder / Track: ",lbaValue / (HPC * SPT));
	printf("%s%d\n","Head: ",lbaValue % (HPC * SPT) / SPT);
	printf("%s%d\n","Sector: ", lbaValue % (HPC * SPT) % SPT + 1);
}