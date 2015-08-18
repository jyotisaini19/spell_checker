
#include"TrieHeader.h"
#include"BKtree.h"
#include<ctype.h>
#include<string.h>
int main()
{
 printf("--------WELCOME TO SPELLCHECKER--------\n\n\n");
    printf("CREATED BY JYOTI SAINI\n");
	struct TrieNode *root=NULL;
//struct TrieNode *root;
	//root=NULL;
	char spell[30];
	root=fscan(root);
	//fprint(root);
	struct bkTree*node=NULL;
	//char flag='y';
	while(1)
    {

    printf("CHOOSE FROM THE FOLLOWING OPTIONS\n");

	printf("(i)i--to insert a new word into the database\n");
	printf("(ii)s--to search a word in the database\n");
	printf("(iii)a--to autocomplete a word\n");
	printf("(iv)p--to print the entire database\n ");
	printf("(v)w--to get suggestion for wrong spelling\n");
	char ch;
	scanf("%s",&ch);
	switch(ch)
	{
	    case 'i':
	        printf("enter a word to be inserted\n");
	    scanf("%s",&spell);
    strlwr(spell);
	    //root=trieCreate();
	      root= insert(root,spell);
	        printf("word has been updated in database\n");
	        fprint(root);
	        break;
	       case 's':
	            printf("enter word to be searched\n");
	        scanf("%s",&spell);
	        bool x=search(root,spell);
	        if(x==false)
	        printf("word not found!!!");
	        else printf("word found!!");
	        fprint(root);
	        break;
	        case 'a':
                printf("enter prefix of the word to be completed\n");
                scanf("%s",spell);
                 x=autocomplete(root,spell);
                 if(x==false)
                    printf("no prefix exist");
                break;
            case 'p':
                printdata(root);
                break;
            case 'w':
               // struct bkTree*node=NULL;
                node=fscanBK(node);
                printf("enter word to get suggestions\n");
                scanf("%s",&spell);
                suggestion(node,spell);
                break;

	}
	printf("do you want to perform any other task(y/n)\n");
	char x;
	scanf("%c\n",&x);
	if(x=='n'||x=='N')
        break;

    }
	//print(root);
	return 0;
}
