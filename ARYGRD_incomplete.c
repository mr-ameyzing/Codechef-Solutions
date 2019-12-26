#include <stdio.h>
#include <stdlib.h>
#include <string.h>

recfunc(int * a, int i, int j, int x, int m, int n)
{   
    
    for(j=j+1 ; j<n; j++)
    {
        recfunc(a, i+1, j, x, m, n);
    }
}


int main()
{
    int m,n,x;
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &x);
    char arr[m][n];
    
    //input the array
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf(" %c",&arr[i][j]);
        }
        getchar();
    }

    //print the array
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
              printf("%c", arr[i][j]);
        }
        printf("\n");
        
        
        
    }

}
