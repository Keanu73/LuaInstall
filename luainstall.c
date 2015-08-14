#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char input;
	char input2;
	printf("Do you really want to install Lua?");
	scanf("%s", input);
	if (strcmp(input, "yes")) {
		printf("What Lua version?");
		scanf("%s", input2);
		printf("Downloading...");
		
