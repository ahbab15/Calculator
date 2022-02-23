#include <stdio.h>

void add(float a, float b)
{
    float sum=a+b;
    printf("%.2f + %.2f=%.2f",a,b,sum);
}

void sub(float c, float d)
{
    float minus=c-d;
    printf("%.2f - %.2f=%.2f",c,d,minus);
}

void mul(float x , float y)
{
    float mult=x*y;
    printf("%.2f * %.2f=%.2f",x,y,mult);
}
void div(float m, float n)
{
    float divi=m/n;
    printf("%.2f / %.2f=%.2f",m,n,divi);
}

void Process(void)
{
    float a,b,c,d,m,n,x,y;
    int choice;
    char ch;
    do
    {
        printf("\n\t\t+--+----------------------------+");
        printf("\n\t\t|            MENU               |");
        printf("\n\t\t+--+----------------------------|");
        printf("\n\t\t1.Add Numbers....               |");
        printf("\n\t\t|-------------------------------|");
        printf("\n\t\t2.Substract Numbers.....        |");
        printf("\n\t\t|-------------------------------|");
        printf("\n\t\t3.Multiply Numbers.....         |");
        printf("\n\t\t|-------------------------------|");
        printf("\n\t\t4.Divide Numbers........        |");
        printf("\n\t\t|-------------------------------|");

        printf("\nPlease Enter your choice: ");
        scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Enter Two Numbers to Add: ");
            scanf("%f %f",&a,&b);
            add(a,b);
            break;
        case 2:
            printf("Enter Two numbers to Substract: ");
            scanf("%f %f",&c,&d);
            sub(c,d);
            break;
        case 3:
            printf("Enter Two Numbers to Multiply: ");
            scanf("%f %f",&x,&y);
            mul(x,y);
            break;
        case 4:
            printf("Enter two numbers to Divide: ");
            scanf("%f %f",&m,&n);
            div(m,n);
            break;
        default:
            printf("\nPlease Read the menu carefully! And enter your choice!\n");
            break;
    }
    getchar();
    printf("\nGO back-->>\n");
    printf("If yes Enter 'y' otherwise 'n'\n");

    ch=getchar();
    }
    while(ch!='n');
}
//------------------------------------Main Function------------------------------

int main()
{
     printf("\n\t\t\tWelcome to my project..\n");
     Process();
     printf("\n\t\tThanks for using our product!\n");
     return 0;
}
