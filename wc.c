#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  FILE *f = fopen(argv[2], "r");

  if(argc!=3)
  {
    fprintf(stderr, "Boris je GAY\n");
    return 1;
  }

  if (strcmp("-c", argv[1]) == 0||strcmp("-l", argv[1]) == 0|| strcmp("-w", argv[1])==0) {
    int i = 0;
    int c;
    while ((c = fgetc(f)) != EOF) {
    if(strcmp("-w",argv[1]) == 0 && isspace(c))
	    i++;
    else if(strcmp("-c", argv[1]) == 0)
	   i++;
    else if(strcmp("-l", argv[1]) == 0 && c == '\n')
        i++;
    }
    printf("%d\n", i);
  }
  return 0;
}
