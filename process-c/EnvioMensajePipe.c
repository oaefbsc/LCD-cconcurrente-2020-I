#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
   int pid,
       pipefd[2];
    
    char mensaje1[20],
         mensaje2[20];

    pipe(pipefd);
    pid = fork();
    if (pid) {
       printf("\n Soy el padre, dame mensaje:");
       gets(mensaje1);
       
       write(pipefd[1], mensaje1, strlen(mensaje1)+1);
       close(pipefd[0]);

       //write(pipefd[1], mensaje1, strlen(mensaje1)+1);
    }
    else{
       printf("\n Soy el hijo, ");
       //close(pipefd[1]);
       read(pipefd[0], mensaje2, 20);
       close(pipefd[1]);
       printf(" mensaje recibido: %s\n", mensaje2);
    }

   return(0);
}
