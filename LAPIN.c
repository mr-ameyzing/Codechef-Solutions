#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void wordsort(char * a, int n)
{
    char t;

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[i])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}



int main()
{
    int t;
    scanf("%d", &t);
    int output[t];

    for(int i=0; i<t; i++)
   {
            char word[1001];
            do{
                scanf("%s", word);
            } while(strlen(word) < 2 || strlen(word) > 1000 );

            int l = strlen(word);
            char word1[l/2 + 1], word2[l/2 + 1];

            int j = 0;
            for( ; j<l/2; j++)
            {
                word1[j] = word[j];
                word2[j] = word[l - 1 - j];
            }

            wordsort(word1 , l/2);
            wordsort(word2, l/2);

            word1[j] = '\0';
            word2[j] = '\0';

            if( strcmp(word1, word2) != 0) output[i] = 0;
            else output[i] = 1;



   }
   for(int i=0; i<t; i++)
   {
       if(output[i]) printf("YES\n");
       else printf("NO\n");
   }
}
