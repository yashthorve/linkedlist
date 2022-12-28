#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],mul[2][2],i,j,k=1;
    printf("Enter the value of matrix A:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("Enter the value of matrix B");
     for (i = 0; i < 2; i++)
    {
        for (j = 0; j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    //multiplication
    for ( i = 0; i < 2; i++)
    {
        
        for (j = 0; j<2;j++)  
          {
            for (int k = 0; k < 2; k++)
            {
                mul[i][j]=a[i][k] * b[k][j];
            }
            
        } 

    }
    printf("Multiplication  of matrices=");
      for ( i = 0; i < 2; i++)
    {
        
        for (j = 0; j < 2;j++)    {
            printf("%d\n",mul[i][j]);
        }

    }
    

    
}