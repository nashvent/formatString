#include <stdlib.h>
#include <stdio.h>
int main(int argc,char *argv []){
  char *addr;
  if(argc < 2){
    printf("Uso:\n %s <variable de entorno >\n",argv[0]);
    exit (0);
  }
  addr = getenv(argv [1]);
  if(addr == NULL)
    printf("La variable de entorno  %s no existe.\n", argv [1]);
  else
    printf(" %s esta  localizada en  %p\n", argv [1], addr);
  return 0;
}
