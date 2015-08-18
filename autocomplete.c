#include"TrieHeader.h"
#include<string.h>
#include<stdio.h>
#include<stdbool.h>
void autocomplete_util(struct TrieNode*root,char*prefix,char*buffer,int k);
void autocomplete_util(struct TrieNode*root,char*prefix,char*buffer,int k)
{
int i;
if (root == NULL)
    return;

if (root->value==1)
   {

char s[30];
strcpy(s,prefix);

printf("%s (%d)\n",strcat(s,buffer), root->value);
   //fprintf(fp,"%s\n", buffer);

   }
buffer[k + 1] = '\0';


for (i = 0; i < 27; i++)
{
    if(root->Child[i])
    {
    buffer[k] = root->Child[i]->letter;

    autocomplete_util(root->Child[i],prefix, buffer, k + 1);
    }
}

buffer[k] = '\0';


}
bool autocomplete(struct TrieNode*root,char*prefix)
{

    char buffer[30];
     int length=strlen(prefix);
    int level;
    struct TrieNode*pcrawl=root;
   for(level=0;level<length;level++)
    {
        int index=CHAR_TO_INDEX(prefix[level]);
        if(pcrawl&&!pcrawl->Child[index])
        {
            return false;
        }
        pcrawl=pcrawl->Child[index];
    }
    if(pcrawl)
    autocomplete_util(pcrawl,prefix,buffer,0);

    else return false;
    return true;
}
