
#include"TrieHeader.h"
#include<stdio.h>
void printdata_util(struct TrieNode*root,char*buffer,int k)
{

    int i;
if (root == NULL)
    return;

if (root->value==1)
   {

printf("%s (%d)\n",buffer, root->value);
   //fprintf(fp,"%s\n", buffer);

   }
buffer[k + 1] = '\0';


for (i = 0; i < 27; i++)
{
    if(root->Child[i])
    {
    buffer[k] = root->Child[i]->letter;

    printdata_util(root->Child[i], buffer, k + 1);
    }
}

buffer[k] = '\0';

}
void printdata(struct TrieNode*root)
{
    char buffer[30];
    printdata_util(root,buffer,0);

}
