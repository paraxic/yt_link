#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>



int main(int argc, char * argv[])
{
	if(argc < 3)
	{
		fprintf(stderr,"File Name and Count required\n");
		exit(0);
	}
	char * prefix = NULL;
	if(argc > 3)
	{ 
	  prefix = malloc(sizeof(char) * 100);
	  strncpy(prefix,argv[3],strlen(argv[3])+1); 
	}
	FILE * fp = fopen(argv[1],"r");
	size_t print = atoi(argv[2]);
	size_t printed = 0;
	size_t sz;
	char * line= malloc(sizeof(char) * 100);
	while((getline(&line,&sz,fp) != -1)){
		if(printed == print){
			break;
		}
		if(prefix != NULL){
		  printf("%s%s",prefix,line);
		}else if(prefix == 0){
			printf("%s",line);
		}
		printed++;
	}
	return 0;
}
