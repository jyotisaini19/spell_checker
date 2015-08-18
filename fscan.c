#include"TrieHeader.h"
#include<stdio.h>

struct TrieNode *fscan(struct TrieNode *root){
	char spell[25];	//max size of word is 24
	FILE *fp;

	fp=fopen("database.dat","r");
	if(fp!=NULL){

		fscanf(fp,"%s",spell);
    //printf("%s",spell);
    //printf("\n");
		root=trieCreate();
		while(spell[24]!=EOF)			//read the file word by word until a EOF character
		{
			root=insert(root,spell);    //insert a word into the trie data structure
			fscanf(fp,"%s",spell);
			//printf("%s",spell);
			//printf("\n");
			spell[24]=fgetc(fp);
		}
		root=insert(root,spell);
		fclose(fp);
	}
	else printf("database not found");
	return root;
}
