
#include<stdlib.h>
#include<string.h>
#define MAX_CHAR 26
#include"TrieHeader.h"
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
/*struct TrieNode {
    int value;
char letter;
  struct  TrieNode*Child[MAX_CHAR];

};
*/
struct TrieNode*getNode();
struct TrieNode* trieCreate();
struct TrieNode* insert(struct TrieNode* root, char* word);
struct TrieNode* getNode()
{
    struct TrieNode*root=NULL;
    root=(struct TrieNode*)malloc(sizeof(struct TrieNode));

    if(root)
    {
        int i;
        root->value=0;
        for(i=0;i<MAX_CHAR;i++)
        {
            root->Child[i]=NULL;
        }

    }
    return root;
}
struct TrieNode* trieCreate() {

    struct TrieNode*root=getNode();
    return root;
}

/** Inserts a word into the trie. */
struct TrieNode* insert(struct TrieNode* root, char* word) {
if(root==NULL)
   root=trieCreate();
    int length=strlen(word);
    int level;
    struct TrieNode*pcrawl=root;
    for(level=0;level<length;level++)
    {
        int index=CHAR_TO_INDEX(word[level]);
        if(!pcrawl->Child[index])
        {
            pcrawl->Child[index]=getNode();
            pcrawl->Child[index]->letter=word[level];

        }
        pcrawl=pcrawl->Child[index];

    }
    pcrawl->value=1;
    return (root);
}
