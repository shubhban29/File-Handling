
#include<stdio.h>
#include<string.h>
int main()
{
  FILE *fp
  char input[20]="This is a test file";
  fp=fopen("Test.txt","w");
  if(fp==NULL)
    printf("File failed to open");
   else
   {
      printf("File Opened");
      if(strlen(input)>0)
      {
        fputs(input,fp);
        fputs(\n,fp)
      }
      fclose(fp);
      printf("Inputted Successfully");
      printf("File Closed");
   }
   return 0;
}
