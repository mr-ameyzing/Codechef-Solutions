#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    int output[t];

    for(int i=0; i<t; i++)
   {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[j]);
        }

        int inv =0, loc=0;

        for (int x=0; x<n; x++)
        {
            for(int y=x+1; y<n; y++)
            {
                if(arr[x] > arr[y]) inv++;
            }
            if(arr[x] > arr[x+1]) loc++;
        }
         if(loc == inv) output[i] = 1;
         else output[i] = 0;
   }

   for(int i=0; i<t; i++)
   {
       if(output[i]) printf("YES\n");
       else printf("NO\n");
   }
}
