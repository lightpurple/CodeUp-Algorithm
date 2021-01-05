#include <stdio.h>

int main()
{
    int maze[10][10];
    int i,j,x,y;
    
    for(i=0; i<10; i++, getchar())
        for(j=0; j<10; j++)
            scanf("%d", &maze[i][j]);
    
    x=1,y=1;
    
    while(maze[x][y] != 2){
    	if(maze[x+1][y] == 1 && maze[x][y+1] == 1)
    		break;
        if(maze[x][y+1] != 1){
            maze[x][y] = 9;
            y++;
        }else if(maze[x+1][y] != 1){
            maze[x][y] = 9;
            x++;
        }
    }
    
    maze[x][y] = 9;
    
    for(i=0; i<10; i++, puts(""))
        for(j=0; j<10; j++)
            printf("%d ", maze[i][j]);
    
    return 0;
}
