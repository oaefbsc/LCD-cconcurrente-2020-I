#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
  int i = 0;

  switch(fork()) {

  /* código de error */
  case -1 :
    perror ("Error al crear el proceso");
    exit(-1);
    break;

  /* código para el hijo */
  case 0 :
    while (i<10){
      sleep (1);
      printf("\t\tSoy el proceso hijo: %d\n", i++);
    }
    break;

  /* código para el padre */
  default:
    while (i<10){
      printf("Soy el proceso padre: %d\n", i++);
      sleep (2);
    }
  };

  exit (0);

  return (0);
}
