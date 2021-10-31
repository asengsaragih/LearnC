
#include <stdio.h>
#include <stdlib.h>
int main()
{
   char ch, file_name[25]="dataminuman.txt";
   FILE *fp;

  

   fp = fopen(file_name, "r"); // read mode

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("History Pembelian: \n");

   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);

   fclose(fp);
   return 0;
}