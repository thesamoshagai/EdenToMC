

#include "EdenFileLoader.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	EdenFileLoader* efl = new EdenFileLoader();

	//Remember to unzip the eden file before using this on a download from the shared world server.  (add .zip to the file name and extract it)

	char worldFile[] = "FILE.eden";
	const char* outputWorld = "ConvertedWorld";

	printf("Hello world.\n");

	efl->convertToMinecraft(worldFile, outputWorld);
	printf("Minecraft world written to folder: %s\n", outputWorld);
	return 0;
}

