
#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "TrieHeader.h"
#define INDEX_TO_CHAR(n)
void print_util(struct TrieNode*root,char*buffer,int k,FILE*fp);
void fprint(struct TrieNode*root)
{
    char spell[70];
    FILE*fp;
    fp=fopen("database.dat","w");
	if(fp!=NULL)
    print_util(root,spell,0,fp);
fclose(fp);
}
void print_util(struct TrieNode *root, char *buffer, int k,FILE*fp)
{

int i;
if (root == NULL)
    return;

if (root->value==1)
   {


   printf("%s (%d)\n", buffer, root->value);
   fprintf(fp,"%s\n", buffer);

   }
buffer[k + 1] = '\0';


for (i = 0; i < 27; i++)
{
    if(root->Child[i])
    {
    buffer[k] = root->Child[i]->letter;

    print_util(root->Child[i], buffer, k + 1,fp);
    }
}

buffer[k] = '\0';

}
