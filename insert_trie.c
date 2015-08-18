trie* getNode()
{
    struct TrieNode*root=NULL;
    root=(struct TrieNode*)malloc(sizeof(struct TrieNode));

    if(root)
    {
        int i;
        root->value=0;
        for(int i=0;i<MAX_CHAR;i++)
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
trie* insert_trie(trie* root, char* word) {
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

        }
        pcrawl=pcrawl->Child[index];

    }
    pcrawl->value=1;
}
