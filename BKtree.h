
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 1

struct bkTree
{
struct bkTree*childNode[31];
char str[30];
};
struct bkTree* CreateNode(char word[]);
int mini(int a,int b);
int EditDistance(char word1[],char word2[]);

void insertBK(struct bkTree**root,char word[]);
void suggestion(struct bkTree*root,char word[]);
