#include <_stdio.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
  if (argc < 2) {
    printf("Usage: cat [filename]\n");
    return 1;
  }

  for (int i = 1; i < argc; i++){
    FILE* file = fopen(argv[i], "r");
   
    if (file){
      int ch; 
      while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
      }
      fclose(file);
    } else {
      fprintf(stderr, "Unable to open file\n");
    }
  }
  
  return 0;
}
