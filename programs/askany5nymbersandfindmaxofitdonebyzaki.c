#include <stdio.h>
int main() {
  int z ;
  int a,b,c,greatest ; 
  int d,e,f,g,zaki;
  int h,i,j,k,l, khan;
  printf("chose any number between 2 and 6 that u would like to give as number of inputs:");
  scanf("%d" ,&z);
  if (z==3)
  {
    printf("plese enter any 3 numbers :");
    scanf("%d %d %d",&a ,&b ,&c);
    printf("ypur numvers are :%d,%d,%d\n" , a,b,c);
     if (a>b)
   {
    greatest=a;
   }
   else if(b>c)
   {
    greatest=b;
   }
   else {
    greatest=c;
   
   }
    printf("greatest number is %d ", greatest);
  }
  else if (z==4)
  {
    printf("plese enter any 4 number :");
   scanf ( "%d %d %d %d" , &d,&e,&f,&g);
   printf("your numbers are: %d,%d,%d,%d\n",d,e,f,g);
   if (d>e)
   {
   zaki=d;
   }
   else if (e>f)
   {
    zaki=e;
   }
   else if (f>g)
   {
    zaki=f;
   }
   else {
    zaki=g;
   }
   printf("the greatest number: %d",zaki);
   
   
  }
   else if(z==5)
  {
     printf("plese enter any 5 numbers :");
    scanf("%d %d %d %d %d",&h,&i,&j,&k,&l);
    printf("your numbers are:%d,%d,%d,%d,%d\n" ,h,i,j,k,l);
    if (h>i)
    {
      khan=h;
    }
    else if (i>j)
    {
    khan=i;
    }
    else if (j>k)
5    {
      khan=j;
    }
    else if (k>l)
    {
       khan=k;
    }
    else{
      khan=l;
    }
    printf("the greate number is %d",khan);
  }
  
  else 
  {
      printf("ur number must be between 2 and 6 , btoh 2 and 6 are exclusive");
  }


  return 0;
  
}