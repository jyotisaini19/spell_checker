
#include"BKtree.h"
void suggestion(struct bkTree*root,char word[])
   {
   if(!root)
   return;
   int d=EditDistance(root->str,word);
   if(d==max)
   printf("%s\n",root->str);
   int i;
   i=d-max;
   if(i>=1)
   {
   for(;i<=d+max;i++)
   {

   suggestion(root->childNode[i],word);
   }
   }
   }

