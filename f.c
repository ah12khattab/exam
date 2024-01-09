#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
int main() {
int n,m;
n = fork();
if (n == -1) {
printf("stderr,fork has failed \n");
exit(1);
}
else if (n == 0)
{
printf("process son  : %d \n", getpid());
printf("parent :%d \n", getppid());
    sleep(2);

}
else {
        sleep(2);
printf(" parent  : %d \n", getpid());
m=fork();
if(m==0){
    printf("process grandson identification : %d \n", getpid());
printf("son :%d \n", getppid());
    sleep(2);

}
printf("end of the parent process \n");
}
}
// 1
// #include<stdio.h>
// #include<stdio.h>
// #include<stdio.h>
// #include<unistd.h>
// #include<sys/wait.h>
// int main(int args,char * argv[])
// {
//     printf("I am proces %d \nI Will Use Excel an ls -l command\n",getpid());
//     excel("/bin/ls","ls","-l",NULL);
//     printf("this line of cone never executed\n");
// }

// 2
// #include<stdio.h>
// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<sys/wait.h>
// void main(int args,char * argv[])
// {
//     printf("I am proces %d \nI WILL USE EXECLP an ls -l command\n",getpid());
//     execlp("ls","ls","-l",NULL);
//     printf("this line of cone never executed\n");    
// }

//3
// #include<stdio.h>
// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<sys/wait.h>
// int main(int args,char * argv[])
// {
//     char* par[2];
//     par[0]="ls";
//     par[1]=NULL;

//     printf("I Will Use EXECV \n");
//     if(execv("/bin/ls",par) == -1)
//         fprintf(stderr,"ERROR EXECV HAS FAILED \n");
//     printf("Is COMMAND WAS EXECUTED \n");
// }

//4
// #include<stdio.h>
// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<sys/wait.h>
// int main(int args,char * argv[])
// {
//     char* par[3];
//     par[0]="ls";
//     par[1]="-l";
//     par[2]=NULL;
//     printf("I Will Use EXECV \n");
//     if(execv("/bin/ls",par) == -1)
//         fprintf(stderr,"ERROR EXECV HAS FAILED \n");
//     printf("Is COMMAND WAS EXECUTED \n");
// }

//5
// #include<stdio.h>
// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<sys/wait.h>
// int main(int args,char * argv[])
// {
//     char* par[4];
//     par[0]="ls";
//     par[1]="-l";
//     par[2]="/home/moh";
//     par[3]=NULL;

//     printf("I Will Use EXECV \n");
//     if(execv("/bin/ls",par) == -1)
//         fprintf(stderr,"ERROR EXECV HAS FAILED \n");
//     printf("Is COMMAND WAS EXECUTED \n");
// }

//6
// #include<stdio.h>
// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<sys/wait.h>
// int main(int args,char * argv[])
// {        
//     int n;
//     char* par[3];
//     par[0]="ls";
//     par[1]="-l";
//     par[2]=NULL;
//     printf("I WILL USE EXECV \n");
//     n=fork();
//     if(n == -1)
//     {
//         fprintf(stderr,"ERROR EXECV HAS FAILED \n");
//         exit(3);
//     }
//     if(n == 0)
//     {
//         printf("I i am the child process \n");
//         if(execv("/bin/  ls",par) == -1)
//             fprintf(stderr,"ERROR EXECV HAS FAILED \n");
//     }
//     else
//     {
//         sleep(5);
//         printf("Is COMMAND WAS EXECUTED\n");
//     }
// }


//7
// #include<stdio.h>
// #include<stdio.h>
// #include<stdlib.h>
// #include<unistd.h>
// #include<sys/wait.h>
// int main(int args,char * argv[])
// {        
//     int n , val , info , r;
//     char* par[3];
//     par[0]="ls";
//     par[1]="-l";
//     par[2]=NULL;
//     printf("I WILL USE EXECV \n");
//     n=fork();
//     if(n == -1)
//     {
//         fprintf(stderr,"ERROR EXECV HAS FAILED \n");
//         exit(3);
//     }
//     if(n == 0)
//     {
//         printf("I i am the child process \n");
//         if(execv("/bin/  ls",par) == -1)
//             fprintf(stderr,"ERROR EXECV HAS FAILED \n");
//         exit(1);
//     }
//     else
//     {
//         val=wait(&info);
//         printf("Is COMMAND WAS EXECUTED wait =%d,info=%d\n",val,info);
//     }
// }

//8
// #include<stdio.h>
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<unistd.h>
// #include<sys/wait.h>
// int main(int args,char * argv[])
// {        
//     int i,n , val , info , r;
//     char* par[3];
//     par[0]="ls";
//     par[1]="ps";
//     par[2]="date";
//     printf("I WILL USE EXECV \n");
//     i=0;
//     while(i<3)
//     {
//         n=fork();
//  if(n == -1)
//     {
//         fprintf(stderr,"ERROR EXECV HAS FAILED \n");
//         exit(3);
//     }
//     if(n == 0)
//     {
//         printf("I i am the child process \n");
//         if(execlp(par[i],par[i],NULL) == -1)
//             fprintf(stderr,"ERROR EXECV HAS FAILED \n");
//         exit(1);
//     }
//     else
//     {
//         val=wait(&info);
//         printf("Is COMMAND WAS EXECUTED wait =%d,info=%d\n",val,info);
//     }
//     i++;
//     }
// }


//9
// #include<stdio.h>
// #include<stdio.h>
// #include<unistd.h>
// int main(int args,char * argv[])
// {        
//     int n;
//     n=fork();
//     if(n == 0)
//     {
//         printf("I i am the child process pid=%d ppid=%d \n");
//         if(execlp(par[i],par[i],NULL) == -1)
//             fprintf(stderr,"ERROR EXECV HAS FAILED \n");
//         exit(1);
//     }
//     else
//     {
//         val=wait(&info);
//         printf("Is COMMAND WAS EXECUTED wait =%d,info=%d\n",val,info);
//     }
//     i++;
//     }
// }