#include<stdio.h>
int main()
{
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
        {printf("%d",a+b);}
        break;
        case '-':
        {printf("%d",a-b);}
        break;
        case '*':
        {printf("%d",a*b);}
        break;
        case '/':
        if(c!=0){printf("%.3f",(float)a/b);}
        else{printf("Error");} 
        
        break;
        default:
        {printf("Error");}
        break;
    }
    return 0;
}