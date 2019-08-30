#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main (void)
{
  int i;
  int padre;

  padre = 1;
  for (i=0; i < 3; i++)
  {
    if (padre == 1)
      {
        if (fork() == 0) /* Proceso hijo */
        {
          printf( "Este es el proceso hijo %d, con ID: %d y padre ID: %d\n", i, getpid(), getppid() );
          padre = 0;
        }
        else /* Proceso padre */
        {
          printf("Este es el proceso padre con ID %d\n", getpid() );
          padre = 1;
        }
      }
  }
  return 0;
}
