#include<stdio.h>
int main()
{
int x,y,z,n;
printf("enter x");
scanf("%d",&x);
printf("enter y");
scanf("%d",&y);
printf("enter the case\n");


scanf("%d",&n);
switch(n)
{
    case 1:z=x<y;
           if(z==1)
           {
           printf("TRUE");
           }
           else{printf("FALSE");
           }
           break;
    case 2:z=x>y;
           if(z==1)
           {
           printf("TRUE");
           }
           else{printf("FALSE");
           }
           break;
    case 3:z=x<=y;
          if(z==1)
           {
           printf("TRUE");
           }
           else{printf("FALSE");
           }
               break;
    case 4:z=(x*x-y)>(y*y-x);
           if(z==1)
           {
           printf("TRUE");
           }
           else{printf("FALSE");
           }
           break;
    case 5:z=(x*x*x)<(y*x*x);
            if(z==1)
           {
           printf("TRUE");
           }
           else{printf("FALSE");
           }
           break;
    case 6:z=((x*y)!=(y*x));
          if(z==1)
           {
           printf("TRUE");
           }
           else{printf("FALSE");
           }
           break;
    case 7:z=((x*y)==(y*x));
            if(z==1)
           {
           printf("TRUE");
           }
           else{printf("FALSE");
           }
           break;

}
return 0;
}


