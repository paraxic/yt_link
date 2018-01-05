#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

//#chop https://github.com/paraxic/yt_link

int main(int argc, char * argv[])
{
	if(argc < 3)
	{
		fprintf(stderr,"File Name and Count required\n");
		exit(0);
	}
	FILE * fp = fopen(argv[1],"r");
	size_t print = (size_t)atoi(argv[2]);
	size_t printed = 0;
	size_t sz;
	char * line= malloc(sizeof(char) * 100);
	while((getline(&line,&sz,fp) != -1)){
	  if(printed != print){
		  printed++;
		  continue;
	  } else if(printed == print){
		  printf("https://www.youtube.com%s\n",line);
		  break;
	  }
	}
	return 0;
}
