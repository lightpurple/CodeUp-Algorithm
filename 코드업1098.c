#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,h,w,n,l,d,x,y;
    
    scanf("%d %d", &h, &w);
    int **arr = malloc(sizeof(int *) * (h+1));
    for(i=0; i<=h; i++){
        arr[i] = malloc(sizeof(int) * (w+1));
    }
    
    for(i=0; i<=h; i++)
        for(j=0; j<=w; j++)
            arr[i][j] = 0;
    
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if(d == 0)
            for(j=0; j<l; j++)
                arr[x][y+j] = 1;
        else
            for(j=0; j<l; j++)
                arr[x+j][y] = 1;
    }
    
    for(i=1; i<=h; i++, puts(""))
        for(j=1; j<=w; j++)
            printf("%d ", arr[i][j]);
    
    for(i=0; i<=h; i++)
        free(arr[i]);
    free(arr);
    
    return 0;
}
