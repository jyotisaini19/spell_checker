#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define MAX_CHAR 256
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
struct TrieNode {
    int value;
    char letter;
  struct  TrieNode*Child[MAX_CHAR];
};

/** Initialize your data structure here. */
struct TrieNode* insert(struct TrieNode* root, char* word);
bool search(struct TrieNode* root, char* word);
struct TrieNode *fscan(struct TrieNode *root);
void fprint(struct TrieNode*root);
bool autocomplete(struct TrieNode*root,char*prefix);
void printdata(struct TrieNode*root);
/** Returns if the word is in the trie. */
/*bool search(struct TrieNode* root, char* word) {
    int length=strlen(word);
    int level;
    struct TrieNode*pcrawl=root;
    for(level=0;level<length;level++)
    {
        int index=CHAR_TO_INDEX(word[level]);
        if(pcrawl&&!pcrawl->Child[index])
        {
            return false;
        }
        pcrawl=pcrawl->Child[index];
    }
    return (pcrawl->value==1);
}

/** Returns if there is any word in the trie
    that starts with the given prefix.
bool startsWith(struct TrieNode* root, char* prefix) {
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
    return (pcrawl!=NULL);
}*/

