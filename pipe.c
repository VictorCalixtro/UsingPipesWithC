#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>



int main(int argc, char *argv[]){

    int fD[2];
    


    if(pipe(fD))
    {  return -1;
    }
pid_t pid = fork();

    if(pid <0)
    {
       fprintf(stdin, "fork failed"); 
       exit(-1);
    }

    else if(pid == 0)
    {



    close(1);
    dup(fD[1]);
    close(fD[0]);
    close(fD[1]);

    execl("pre","pre",NULL);


    }
    else
    {

     close(0);
     dup(fD[0]);
     close(fD[0]);
     close(fD[1]);

     execl("sort","sort",NULL);

     }


    close(fD[0]);
    close(fD[1]);

    return 0;
}




