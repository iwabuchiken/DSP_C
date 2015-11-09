#include"wave.h"
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
	if(argc != 3){
		fprintf(stderr, "Usage: program <inputfile> <outputfile>\n");
		exit(1);
	}

	Sound *snd;

	if((snd = Read_Wave(argv[1])) == NULL){
		exit(1);
	}

	Sound_Reverse(snd);

	if(Write_Wave(argv[2], snd)){
		exit(1);
	}

	Free_Sound(snd);

	return 0;
}

