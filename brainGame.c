#include<stdio.h>
#include<stdlib.h>

#define NAME_LEN 15

struct player{
	char name[NAME_LEN];
	int playerNum;
	struct player* next;
};
struct player* players = NULL;
struct player* findPlayer(int playerNum);
void insert(void);
void search(void);
void print(void);
void screen(void);
void delay(int secs);
//int readLine(char str[],int n);
void playGame(void);
int heads = 3;

int main()
{
	
	printf("\t\tWelcome to the Brain Test Game\t\t\n");
	screen();
	
	return 0;
}

void delay(int secs){
	int i,j,k,count;
	int start,end;
	start =time(NULL);
	end = time(NULL);
	while((end -start )!= secs){
			end = time(NULL);
}
	}
	
	void screen(void){
		int option;
		char ans;
		printf("\n\t\t\t WELCOME, START GAME\n");
		printf("\n\t\t 1- Old Player\n");
		printf("\n\t\t 2- New Player\n");
		printf("\n Enter Selection\n");
		scanf("%d",&option);
		
		switch(option){
			case 1:
				search();
				playGame();
				print();
				break;
			case 2:
				insert();
				playGame();
				print();
				break;
			default:
				printf("\n\t\t...Invalid Choice...\n");
				screen();
				break;
			}
		}
	struct player* findPlayer(int playerNum){
		struct player *p;
		
		for (p = players;
		    p != NULL && playerNum > p->playerNum;
			p = p->next)
			;
		if (p != NULL && playerNum == p->playerNum)
		 return p;
		 return NULL;
	}
	
	void insert (void){
		char ans;
		struct player *cur, *prev, *newPlayer;
		
		newPlayer = malloc(sizeof(struct player));
		if(newPlayer == NULL){
			printf("\nDatabase is full,can't add more players.\n");
			return;
		}
		printf("\n Enter Player Number: \n");
		scanf("%d",&newPlayer->	playerNum);
		
		for(cur = players,prev = NULL; 
			cur != NULL && newPlayer->playerNum > cur->playerNum;
			prev = cur, cur = cur->next)
			;
			if(cur !=NULL && newPlayer->playerNum == cur->playerNum){
				printf("\nPlayer already exist\n");
				free(newPlayer);
				return;
			}
			printf("\nEnter Player name: ");
			scanf("%s",newPlayer->name);
			//readLine(newPlayer->name, NAME_LEN);
			
			newPlayer->next = cur;
			if(prev == NULL)
			players = newPlayer;
			else
			prev->next = newPlayer;
			
			printf("\n\t\t Do You want to add more players?...\n");
				printf("\n\t\t Y - yes, N - no\n");
				scanf("%s",&ans);
				if(ans == 'y' || ans == 'Y')
				insert();
			
	}
			  
	void search(void){
		struct player *p;
		
		printf("\nEnter player number:\n");
		scanf("%d",&p->playerNum);
		p = findPlayer(p->playerNum);
		if (p != NULL)
			printf("\nPlayer name %s\n",p->name);
		else
		printf("\nPlayer not found.\n");
	}
	void print(void){
		struct player *p;
		printf("Player Number  Player Name\n");
		for(p = players; p != NULL; p = p->next)
		printf("%7d		%-25s \n", p->playerNum, p->name);
	}
	//int readLine(char str[], int n)
	//{
	//	int ch, i = 0;
	//	while ((ch = getchar()) != '\n')
	//		if(i < n)
	//		str[i++] = ch;
	//		str[i] = '\0';
	//		return i;
	//}
void playGame(void)
	{
	int level,level1,level2,level3,num1,num2,num3,ans1,ans2,ans3;
	srand((unsigned)time(NULL));
	printf("\t1-Level_1\n\t2-Level_2\n\t3-Level_3\n");
	printf("\t\tSelect Level\n");
	scanf("%d",&level);
	
	switch(level)
	{
		case 1:
			do{
			printf("\n\t\tLevel One Get ready to Play\n");
			num1 = 100+(50*rand()/RAND_MAX); num2 = 100+(100*rand()/RAND_MAX); num3 =100+(150*rand()/RAND_MAX);
			printf("\nOkay...Store in your Brain\t %d \t\t %d \t\t %d \n",num1,num2,num3);
			delay(10);
			system("cls");
			printf("\nNow Enter the numbers you stored in your Brain\n");
			scanf("%d%d%d",&ans1,&ans2,&ans3);
			if(num1 != ans1 || num2 != ans2 || num3 != ans3){
			printf("\n\t\tHahahahihi You loose...\n");
			heads--;
			delay(2);
			system("cls");
			printf("\n\t\t\t %d times left to play this level, Get ready...\n", heads);
			delay(2);
			if(heads == 0)
			printf("\n\t\t GAME OVER\n");
				}
			else
			printf("\n\t\t!!!You Won!!!\n");
					}
					while((heads > 0) &&(num1 != ans1 || num2 != ans2 || num3 != ans3) );
					break;
		case 2:
		do{
			printf("\n\t\tLevel Two Get ready to Play\n");
			num1 = 1000+(50*rand()/RAND_MAX); num2 = 1000+(100*rand()/RAND_MAX); num3 =1000+(150*rand()/RAND_MAX);
			printf("\nOkay...Store in your Brain\t %d \t\t %d \t\t %d \n",num1,num2,num3);
			delay(10);
			system("cls");
			printf("\nNow Enter the numbers you stored in your Brain\n");
			scanf("%d%d%d",&ans1,&ans2,&ans3);
			if(num1 != ans1 || num2 != ans2 || num3 != ans3){
			printf("\n\t\tHahahahihi You loose...\n");
			heads--;
			delay(2);
			system("cls");
			printf("\n\t\t\t %d times left to play this level, Get ready...\n", heads);
			delay(2);
			if(heads == 0)
			printf("\n\t\t GAME OVER\n");
				}
			else
			printf("\n\t\t!!!You Won!!!\n");
					}
					while((heads > 0) &&(num1 != ans1 || num2 != ans2 || num3 != ans3) );
					break;
		case 3:
		do{
			printf("\n\t\tLevel Three Get ready to Play\n");
			num1 = 10000+(50*rand()/RAND_MAX); num2 = 10000+(100*rand()/RAND_MAX); num3 =10000+(150*rand()/RAND_MAX);
			printf("\nOkay...Store in your Brain\t %d \t\t %d \t\t %d \n",num1,num2,num3);

			delay(10);
			system("cls");
			printf("\nNow Enter the numbers you stored in your Brain\n");
			scanf("%d%d%d",&ans1,&ans2,&ans3);
			if(num1 != ans1 || num2 != ans2 || num3 != ans3){
			printf("\n\t\tHahahahihi You loose...\n");
			heads--;
			delay(2);
			system("cls");
			printf("\n\t\t\t %d times left to play this level, Get ready...\n", heads);
			delay(2);
			if(heads == 0)
			printf("\n\t\t GAME OVER\n");
				}
			else
			printf("\n\t\t!!!You Won!!!\n");
					}
					while((heads > 0) &&(num1 != ans1 || num2 != ans2 || num3 != ans3) );
					break;
		default:
			printf("\t\t Invalid Level, select level 1 to 3\n");
			break;
	}
char ans;
	printf("\n\t\t Do You want to play this game again?...\n");
	printf("\n\t\t Y - yes, N - no\n");
	scanf("%s",&ans);
	if(ans == 'y' || ans == 'Y')
	playGame();
}


