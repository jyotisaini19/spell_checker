
#include"BKtree.h"
struct bkTree* CreateNode(char word[])
{

struct bkTree*root=(struct bkTree*)malloc(sizeof(struct bkTree));
strcpy(root->str,word);
int i;
for(i=0;i<=30;i++)
  {
  root->childNode[i]=NULL;
  }
 return root;
}
void insertBK(struct bkTree**root,char word[])
	{
	if(!(*root))
	{
	*root=CreateNode(word);
	}
	else{
	int d=EditDistance(word,(*root)->str);
	//printf("%d\n",d);
	if(!d)
	return;
	else if((*root)->childNode[d]!=NULL)
	{
	insertBK(&((*root)->childNode[d]),word);

	}
	else
	{
	(*root)->childNode[d]=CreateNode(word);
	}
	}
}
