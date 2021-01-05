#include <stdio.h>

int main()
{
    int go[20][20] = {0,};
    int n,i,j,x,y;
    for(i=1; i<20; i++)     //¹ÙµÏÆÇ ÀÔ·Â
        for(j=1; j<20; j++)
            scanf("%d ", &go[i][j]);
            
    scanf("%d", &n);         //È½¼ö ÀÔ·Â
    
    for(i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        for(j=1; j<20; j++){
            if(go[x][j] == 0)
                go[x][j] = 1;
            else
                go[x][j] = 0;
        }
        for(j=1; j<20; j++){
            if(go[j][y] == 0)
                go[j][y] = 1;
            else
                go[j][y] = 0;
        }
    }
    
    for(i=1; i <= 19; i++, puts(""))
		for(j=1; j <= 19; j++)
			printf("%d ", go[i][j]);
    
    return 0;
}
