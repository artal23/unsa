#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	pid_t pid = fork();
	if(pid<0){
		fprintf(stderr, "Forck failed!\n");
		return1;
	}
}
