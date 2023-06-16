#include <stdio.h>
#include <string.h>
int main()
{
  FILE *file;
  char name[50];
  int age,mblNumber,num;
  file = fopen("student.txt","a");
  if (file==NULL)
  {
    printf("File doesn't exist.\n");
  }
  else
  {
    printf("File is opened.\n");
    
    printf("Enter number of student : ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
      printf("Enter student's name : ");
      scanf("%s",&name);

      printf("Enter student's age : ");
      scanf("%d",&age);

      printf("Enter student's phone number : ");
      scanf("%d",&mblNumber);

      fprintf(file,"\n%s\t%d\t%d\n",name,age,mblNumber);

    }
    
    fclose(file);
  }
}