#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char input;
	char input2;
	char input3;
	char input4;
	char input5;
	char input6;
	char input7;
	printf("Do you really want to install Lua?");
	scanf("%s", input);
	if (strcmp(input, "yes")) {
		printf("What Lua version?");
		scanf("%s", input2);
		printf("Downloading...");
		strcat(input3,"wget ");
		strcat(input3,"www.lua.org/ftp/lua-");
		strcat(input3,input2);
		strcat(input3,".tar.gz");
		system(input3);
		printf("Downloaded, compiling..");
		strcat(input4,"cd lua-");
		strcat(input4,input2);
		system(input4);
		system("cd src");
		printf("What operating system are you running? (lowercase)");
		scanf("%s",input6);
		printf("Compiling..");
		strcat(input7,"make ");
		strcat(input7,input6);
		system(input7);
		printf("Compiled.");
	}
	if (strcmp(input, "no")) {
		printf("I just wasted my time programming this then. Bye.");
		return 0;
	}
}
