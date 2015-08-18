#include "TrieHeader.h"
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
bool search(struct TrieNode* root, char* word);

bool search(struct TrieNode* root, char* word) {
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
