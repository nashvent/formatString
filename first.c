#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
  char buffer[64];
  int number = 50;
  if(argc != 2)
    return -1;
  strcpy(buffer , argv [1]);
  printf("Correcto:\n");
  printf("%s\n", buffer);
  printf("Incorrecto:\n");
  printf(buffer);
  printf("\n");
  printf("(-) Valor @ 0x %08x =  %d 0x %08x\n", &number , number , number);
  return 0;
}
