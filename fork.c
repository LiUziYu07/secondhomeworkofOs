#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
	pid_t pid;

	printf("I am the first process and my pid is %d,my parent process' pid is %d  \n",getpid(),getppid());

	pid = fork();

	if(0 == pid){
	printf("I am the child process and my pid is %d,bu my real pid is %d,and my parent's pid is %d \n",pid,getpid(),getppid());
	}
	else{
	printf("I am the parent process,and my child pid is %d,my pid is %d,my parent 's pid is %d \n",pid,getpid(),getppid());
	}

	return 0;
}
