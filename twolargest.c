#include <stdio.h>

int main() {
    int a[] = {5, 2, 8, 1, 3};
    int b = sizeof(a) / sizeof(a[0]);

    int c;
    for (int i=0;i<b;i++)
      {   for (int j=0;j<b;j++)
           {if (a[j] > a[j + 1]) {
                int c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
            }
            
        }
       
    }
printf(" largest element %d ",a[b-1]);
    printf("second largest element %d ",a[b-2]);


    return 0;
}