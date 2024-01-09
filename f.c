#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
int main(int argc,char *argv[])
{
printf("dddd %d\n",getpid());
execl("/bin/ls","ls","-l",NULL);
printf("dddd\n");
}