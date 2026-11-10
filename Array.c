#include <stdio.h>
// read and display array elements.
int main ()
{
    int n,i,arr[5];
    printf("enter size of an element:\n");
    scanf("%d", &n);

    printf("enter array of elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    printf("array of elements: ");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    
    return 0;
}
