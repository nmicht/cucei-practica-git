#include <stdio.h>

#include <math.h>

 

main()

{

      int a,b,c;

    float sol1= 0,sol2= 0;

      printf("Introducirlos valores de a, b y c:");

      scanf("%d%d%d",&a,&b,&c);

      if(a==0){

              printf("No se puede obtemer las raices");
            
            }

      else if ((b*b-4*a*c)<0){

              printf("las raices son imaginarias");

            }

      else
      {

             sol1=(b*(-1)+sqrt(b*b)-4*a*c)/2*a;

             sol2=(b*(-1)-sqrt(b*b)-4*a*c)/2*a;

             printf("Las soluciones son:%f y %f",sol1,sol2);
           }

           return 0;

             }