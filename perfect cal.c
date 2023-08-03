//C code for an calculator//
#include<stdio.h>
#include<math.h>
int main()
{
//Variable decorations//
    float a,b,n,res;
    int d,dv,opt;
//logic begin//
printf("Chose your operation as follows:\n 1.Addition \t 2.substraction\n 3.Multiplication \t 4.Division\n 5.Square \t 6.Square root\n 7.Modulus \t 8.Power \n 9.floor \t 10.Absolute  \n11.Ceil \t 12.exit\n\n");
        
    do
    {
     printf("Enter the operation=");
        scanf("%d",&opt);
//switching the variable//
        switch(opt)
        {
        case 1:
        {
//For addition //
            printf("You have chosen Addition\n");
            printf("Enter two variable=");
            scanf("%f%f",&a,&b);
            res=a+b;
            printf("Addition is =%f\n\n",res);
            break;
            }
            
        case 2:
        {
//For substraction//
            printf("You have chosen substraction\n");
            printf("Enter two number=");
            scanf("%f%f",&a,&b);
            res=a-b;
            printf("subtraction is =%f\n\n",res);
            break;
            }
            
        case 3:
        {
//For multiplication//
             ("You have chosen multiplication\n");
            printf("Enter two number=");
            scanf("%f%f",&a,&b);
            res=a*b;
            printf("Multiplication is =%f\n\n",res);
            break;
            }
            
        case 4:
        {
//For division//
            printf("You have chosen Division\n");
            printf("Enter two number=");
            scanf("%f%f",&a,&b);
            if(b == 0)
            {
                printf("0 cannot be a divisor\n");
                
                scanf("%f",&b);
            }
                res=a/b;
                printf("Division=%f\n",res);
              break;
          }
         case 5:
        
        {
//For square function//
             printf("You have chosen square function\n");
             printf("Enter the number=");
             scanf("%f",&a);
             res=a*a;
             printf("Square=%f\n",res);
             break;
            }
            
          case 6:
        {
//For square root function//
             printf("You have chosen square root function\n");
             printf("Enter the number=");
             scanf("%f",&a);
             res=sqrt(a);
             printf("Square root=%f\n",res);
             break;      
             }      
                 
          case 7: 
        {
//For modulus//
             printf("You have chosen Modulus\n");
             printf("Enter two number=");
             scanf("%d%d",&d,&dv);
             if(dv == 0)
             {
                printf("0 cannot be a divisor\n");
                scanf("%d",&dv);
             }
                res=d%dv;
                printf("Modulus=%f\n",res);
              break;
             }
            
            case 8:
            {
//For power function//         
            printf("You have chosen Power function\n");
            printf("Enter Base and the Power=");
            scanf("%f%f",&a,&b);
            res=pow(a,b);
            printf("Power function is =%f\n",res);
            break;
            }
            
            case 9:
             {
//For floor function//
             printf("You have chosen floor function\n");
             printf("Enter the number=");
             scanf("%f",&n);
             res=floor(n);
             printf("floor=%f\n",res);
             break;      
             }      
            
            case 10:
             {
//For absolute function//
             printf("You have chosen absolute function\n");
             printf("Enter the number=");
             scanf("%f",&n);
             res=abs(n);
             printf("absolute value=%f\n",res);
             break;      
             }      
            
            case 11:
             {
//For ceil function//
             printf("You have chosen ceil function\n");
             printf("Enter the number=");
             scanf("%f",&n);
             res=ceil(n);
             printf("Ceil value =%f\n",res);
             break;      
             }      
            
            case 12:
            {
            printf("You chosen exit");
            break;
            }
            
            default:
            {
            printf("invalid input");
            }
               }
            printf("\n__________x____________x____________\n\n");
    } 
    while(opt!=12);
    return 0;
}
