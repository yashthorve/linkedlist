#include<stdio.h>
void toh(int,char,char,char);
int main()
{
    int n;
    printf("Enter the no of disks\n");
    scanf("%d",&n);
    toh (n,'a','b','c');
    
    return 0;
}
void toh(int n,char a,char b,char c)
{    
   
    if(n>=1){
        toh(n-1,a,c,b);
        printf("%d disks move %c to %c\n",n,a,c);
        toh(n-1,b,a,c);
       
}
}

