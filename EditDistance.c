#include"BKtree.h"
#include<string.h>
int EditDistance(char word1[],char word2[])
{
 int m=strlen(word1);

        int n=strlen(word2);
       // printf("%d,%d\n",m,n);
       // printf("%s,,%s\n",word1,word2);
        int T[m+1][n+1];
		int i,j;
        for(i=0;i<=m;i++)
        {
            T[i][0]=i;

        }
        for(j=0;j<=n;j++)
        {
            T[0][j]=j;
        }
        for( i=1;i<=m;i++)
        {
            for( j=1;j<=n;j++)
            {
                if(word1[i-1]==word2[j-1])
                T[i][j]=T[i-1][j-1];
                else
                T[i][j]=mini(T[i-1][j],mini(T[i][j-1],T[i-1][j-1]))+1;
            }
        }
        return T[m][n];

}
