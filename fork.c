#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
int global = 10;


/* Test Case 22222222 */

int main(int argc, char ** argv)
{
	printf("current PID = %d\n", getpid());
        
	int retPid = fork();
	int local = 100;
	global+= 20;
	if (retPid > 0)
	{
		printf("This is the parent\n the current PID = %d, the child pid = %d\n", getpid(), retPid);
		
		global++;
		local++;

		while(1)
		{

		printf("global = %d, local = %d\n", global, local);
		int status =0;	
		int childPid = wait(&status);


		printf("exit status = %d\n",WEXITSTATUS(status));
		printf("Child PID = %d\n",childPid);
		sleep(5);
		}
	}
	else if (retPid == 0)
	{

		int i =0;
		for( i =0; i < 3 ; i++)
		{

		printf("This is the Child\n, current PID = %d\n", getpid());
		printf("global = %d, local = %d\n", global, local);
		sleep(5);
		}
		exit(100);
	}
	else
	{

		perror("fork");
	}
}
