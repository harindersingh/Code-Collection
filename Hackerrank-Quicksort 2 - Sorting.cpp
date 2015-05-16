#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

void partition(int p, int q, int *  ar, int *br) {
    if (q-p+1 <= 1)
        return;
    int j=p-1, i=p+1, l=p, k=0;
    int v;
    v=ar[l];
    for (i=p+1; i<=q; i++)
    {
        if (ar[i] < v)
        {
            ar[++j]=ar[i];
        }
        else
        {
            br[k++]=ar[i];   
        }        
    }
    ar[j+1]=v;
    for (i=j+2; i<=q; i++)
        ar[i]=br[i-j-2];
    partition(p,j, ar, br);
    partition(j+2, q, ar, br);
    for (i=p; i<=q; i++)
        printf("%d ", ar[i]);
    printf("\n");
}


void quickSort(int ar_size, int *  ar) {
    int *br;
    if (ar_size <=1 )
        return;
    br=(int *)malloc((ar_size-1) * sizeof(int));
    partition(0, ar_size-1, ar, br);
    free(br);

}

int main() {
   
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        scanf("%d", &_ar[_ar_i]); 
    }

    quickSort(_ar_size, _ar);
   
    return 0;
}