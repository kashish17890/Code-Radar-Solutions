#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(b<=0 && a== (int)sqrt(b)){
        printf("Yes");
    }
    else{printf("No");}
    return 0;
}
