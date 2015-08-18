#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "TrieHeader.h"
#define INDEX_TO_CHAR(n)
/*void print_util(struct TrieNode*root,char spell[],int index,FILE*fp);
void print(struct TrieNode*root)
{
    char spell[28];
    int index=0;
	FILE *fp;

	fp=fopen("database.dat","w+");
	if(fp!=NULL)
        print_util(root,spell,index,fp);

else printf("No database");
fclose(fp);
}
void print_util(struct TrieNode*root,char spell[],int index,FILE*fp)
{
if(root==NULL)
    return;
    if(root->value==1)
    {
               int level=0;
// print a new line character to seperate two words
				//for(level=0;level<strlen(spell);level++)  // print the same word so that we can complete that word to obtain other word
				//{
//printf("%d",strlen(spell));
            printf("%s",spell);
				//fprintf(fp,"%c",spell[level]);
				//}
				//
				printf("\n");
				//fprintf(fp,"\n");
				return;


    }
    int i;
    for( i=0;i<27;i++)
    {
if(root->Child[i]!=NULL)
{
    char ch=i+97;
    spell[index]=ch;
print_util(root->Child[i],spell,index+1,fp);

return;
}
    }
}
*/
