#include <stdio.h>
#include <unistd.h>

/*  Training usecase */

int main(){
	char charachter = getchar();
	char* const Arglist[3] = {"sleep","10",NULL} ;
	char* const Envlist[] = {NULL};
	int ret = execve ("/usr/bin/sleep",Arglist,Envlist);
	return 0 ;
}
