#include <stdio.h>
int clearNthBit(int a,int b){
    int mask=1<<n;
    mask ==~mask;
    return a &mask;
}
int main() {
    int a,b;
    printf("Entern the number: ");
    scanf("%d",&a0);

    printf("Enter the bit position to clear (0-based): ");
    scanf("%d",&b);

    int c =clearNthBit(a,b);
    printf("Updated number: %d",c);

    return 0;
}