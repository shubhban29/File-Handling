
#include<stdio.h>
#include<string.h>
int main()
{
  FILE *fp
  char output[20];
  fp=fopen("Test.txt","r");
  if(fp==NULL)
    printf("Failed to open file");
  else
  {
    printf("File Opened");
    while(fgets(output,20,fp)!=NULL)
    {
      printf("%s",output);
    }
    fclose(fp);
    printf("Data read successfully");
    printf("File Closed");
  }
  return 0;
}
