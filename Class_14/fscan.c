#include <stdio.h>

int main ()
{
  char str [80];
  float f;
  FILE * pFile;

  pFile = fopen ("myfile.txt","w+");
  fprintf (pFile, "%f %s", 3.1416, "PI\n");
  printf("ftell result before rewind: %ld\n",ftell(pFile));
  rewind (pFile);
  printf("ftell result after rewind: %ld\n",ftell(pFile));
  fscanf (pFile, "%f", &f);
  fscanf (pFile, "%s", str);
  fclose (pFile);
  printf ("I have read: %f and %s \n",f,str);
  return 0;
}