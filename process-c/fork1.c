#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
  int pid;

  //if (pid = fork() == -1)
  //  perror("Error en la llamada a fork()\n");
  //else
  pid = fork();
  printf("pid: %d\n", pid);

  if (pid == 0)
        printf("Proceso hijo \n");
  else
        printf("Proceso padre \n");

  return 0;
}
