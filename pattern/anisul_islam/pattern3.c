/*------------------- Pattern 1 -----------------*/
// #include <stdio.h>
// int main()
// {
//   int n,row,col;
//   printf("Enter N = ");
//   scanf("%d", &n);
//   for(row=1;row<=n;row++)
//   {
//     for(col=1;col<=row;col++)
//     {
//       printf("%d ", col);
//     }
//     printf("\n");
//   }
//   for(row=n-1;row>=1;row--)
//   {
//     for(col=1;col<=row;col++)
//     {
//       printf("%d ", col);
//     }
//     printf("\n");
//   }
//   return 0;
// }

/*------------------- Pattern 2 -----------------*/
// #include <stdio.h>
// int main()
// {
//   int n,row,col;
//   // printf("Enter N = ");
//   scanf("%d", &n);
//   for(row=1;row<=n;row++)
//   {
//     for(col=1;col<=row;col++)
//     {
//       printf("%d ",row);
//     }
//     printf("\n");
//   }
//   for(row=n-1;row>=1;row--)
//   {
//     for(col=1;col<=row;col++)
//     {
//       printf("%d ",row);
//     }
//     printf("\n");
//   }  
//   return 0;
// }

/*------------------- Pattern 3 -----------------*/
// #include <stdio.h>
// int main()
// {
//   int n,row,col;
//   // printf("Enter N = ");
//   scanf("%d", &n);
//   for(row=1;row<=n;row++)
//   {
//     for(col=1;col<=row;col++)
//     {
//       printf("%c ",col+64);
//     }
//     printf("\n");
//   }
//   for(row=n-1;row>=1;row--)
//   {
//     for(col=1;col<=row;col++)
//     {
//       printf("%c ",col+64);
//     }
//     printf("\n");
//   }
//   return 0;
// }

/*------------------- Pattern 4 -----------------*/
#include <stdio.h>
int main()
{
  int n,row,col;
  // printf("Enter N = ");
  scanf("%d", &n);
  for(row=1;row<=n;row++)
  {
    for(col=1;col<=row;col++)
    {
      printf("%c ", row+64);
    }
    printf("\n");
  }
  for(row=n-1;row>=1;row--)
  {
    for(col=1;col<=row;col++)
    {
      printf("%c ", row+64);
    }
    printf("\n");
  }
  return 0;
}

/*------------------- Pattern 5 -----------------*/
// #include <stdio.h>
// int main()
// {
//   int n,row,col;
//   // printf("Enter N = ");
//   scanf("%d", &n);
//   for(row=1;row<=n;row++)
//   {
//     for(col=1;col<=row;col++)
//     {
//       printf("* ");
//     }
//     printf("\n");
//   }
//   for(row=n-1;row>=1;row--)
//   {
//     for(col=1;col<=row;col++)
//     {
//       printf("* ");
//     }
//     printf("\n");
//   }
//   return 0;
// }