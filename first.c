#include<stdio.h>
//#include<conio.h>
int main()
{
  int a[10], n, k, i, sum, j, count=0;
  printf("enter the no. of elements (range -> [2,100]) \n");
  scanf("%d",&n);
  {
    if(n>=2 && n<=100)
	{
      printf("enter the elements of the array\n");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
	
      printf("enter value of k (range -> [1,100])\n");
      scanf("%d",&k);
	  if(k>=1 && k<=100)
	  {
      printf("k=%d\nn=%d\n", k, n);
      printf("entered elements are:\t");
      for(i=0;i<n;i++)
      {
        printf("%d",a[i]); 
	    printf("\t");
      }

      for(i=0;i<n;i++)
       {
         for(j=i+1;j<n;j++)
	      {
	        sum=a[i]+a[j];
	        if(sum % k == 0)
	          {
	            count++;
	          }
	      }
       }
       printf("\npossible pairs are:\t %d",count);
       }
	
	   else
		 printf("\n------invalid input-------\n");
	}
	else
		printf("\n-----------invalid input----------\n");
  }
  //getch();
    return 0;
}