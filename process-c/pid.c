#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {

  printf("ID de proceso: %d\n", getpid());
  printf("ID de proceso padre: %d\n", getppid());
  printf("ID de usuario propietario: %d\n", getuid());

  return 0;
}
