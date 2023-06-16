// <-----------------File Basic Structure & file write character(fputc)----------->
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     FILE *file;
//     char name[20] = "Abdullah Al Shaimon\n";
//     int length = strlen(name);
//     int i;
//     file = fopen("test.txt","a");

//     if (file==NULL)
//     {
//       printf("File doesn't exist\n");
//     }
//     else
//     {
//       printf("File is opened\n");
//       for(i = 0; i < length; i++)
//       {
//         fputc(name[i],file);
//       }
//       printf("File is written successfully\n");
//       fclose(file);
//     }
    
// }


// <--------File write string(fputs)---------->
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   FILE *file;
//   char name[20];
//   char age[20];
//   char university[20];
//   file = fopen("test.txt","a");
//   if (file==NULL)
//   {
//     printf("File doesn't exist.");
//   }
//   else
//   {
//     printf("File is opened.");
//     printf("Enter your name : \n");
//     gets(name);
//     fputs(name,file);
//     fputs("\n",file);

//     printf("Enter your age : \n");
//     gets(age);
//     fputs(age,file);
//     fputs("\n",file);

//     printf("Enter your university name : \n");
//     gets(university);
//     fputs(university,file);
//     fputs("\n\n",file);
    
//     printf("File is written successfully.\n");
//     fclose(file);
//   }
  
// }

// <--------File print(fprintf)-------->
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   FILE *file;
//   char name[20];
//   int age;
//   file = fopen("test.txt","a");
//   if (file==NULL)
//   {
//     printf("File doesn't exist.");
//   }
//   else
//   {
//     printf("File is opened.");
//     printf("Enter your name : \n");
//     gets(name);

//     printf("Enter your age : \n");
//     scanf("%d",&age);

//     fprintf(file,"Name = %s\nAge = %d\n",name,age);

//     printf("File is written successfully.\n");
//     fclose(file);
//   }
  
// }

// <----------Reading File(fgetc)------->
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   FILE *file;
//   char ch;
//   file = fopen("test.txt","r");
//   if (file==NULL)
//   {
//     printf("File doesn't exist.");
//   }
//   else
//   {
//     printf("File is opened.");

//     while (!feof(file))
//     {
//       ch = fgetc(file);
//       printf("%c",ch);
//     }
    
//     fclose(file);
//   }
// }

// <----------Reading File(fgets)------->
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   FILE *file;
//   char ch[40];
//   file = fopen("test.txt","r");
//   if (file==NULL)
//   {
//     printf("File doesn't exist.");
//   }
//   else
//   {
//     printf("File is opened.");

//     while (!feof(file))
//     {
//       fgets(ch,40,file);
//       printf("%s\n",ch);
//     }
//     fclose(file);
//   }
// }

// <----------Reading File(fscanf)------->
#include <stdio.h>
#include <string.h>
int main()
{
  FILE *file;
  char fname[40];
  char mname[40];
  char lname[40];
  int age;
  file = fopen("test.txt","r");
  if (file==NULL)
  {
    printf("File doesn't exist.");
  }
  else
  {
    printf("File is opened.\n");

    fscanf(file,"%s %s %s %d",&fname,&mname,&lname,&age);

    printf("%s %s %s %d\n",fname,mname,lname,age);
    
    fclose(file);
  }
}