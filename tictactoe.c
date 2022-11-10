#include<stdio.h>
#include<stdlib.h>

void displayTTT(char arr[]);
void chooseBox1(char arr[]);
void chooseBox2(char arr[]);
char validateMove1(char p1Ans, char arr[]);
char validateMove2(char p2Ans, char arr[]);
int validateWin(char arr[]);

int result = 1;
int draw;

int main(){
	
	char ans;
	
	do{
	int i, j, count1 = 0, count2 = 0;
	char arr[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	
	printf("\n      ---Tic Tac Toe---\n\n");
	printf("  Player 1 [o]  PLayer 2 [x]\n\n");
	displayTTT(arr);
	result = 1;
	
		while(result == 1){
			
			fflush(stdin);
			
			chooseBox1(arr);
			system("cls");
			printf("\n");
			displayTTT(arr);
			validateWin(arr);
			count1 += 1;
			
			if(result == 3){
				break;
			}
			
			if(result != 3 && count1 == 5 && count2 == 4){
				printf("This game is a draw.\n");
				break;
			}
			
			fflush(stdin);
			
			chooseBox2(arr);
			system("cls");
			printf("\n");
			displayTTT(arr);
			validateWin(arr);
			count2 += 1;
			
			if(result == 3){
				break;
			}
		
		}
		
		
		fflush(stdin);
		
		printf("Do you want to play again? [Y-Yes N-No] : ");
		scanf("%c", &ans);
		
		if(ans == 'N' || ans == 'n'){
			break;
		}else{
			system("cls");
		}
		
	}while(ans == 'Y' || ans == 'y');
	
	return 0;
}

void displayTTT(char arr[]){

	printf("\t    |    |    \n");
	printf("\t %c  | %c  | %c \n", arr[0], arr[1], arr[2]);
	printf("\t____|____|____\n");
	printf("\t    |    |    \n");
	printf("\t %c  | %c  | %c \n", arr[3], arr[4], arr[5]);
	printf("\t____|____|____\n");
	printf("\t    |    |    \n");
	printf("\t %c  | %c  | %c \n", arr[6], arr[7], arr[8]);
	printf("\t    |    |    \n");
	
}

void chooseBox1(char arr[]){
	
	int i;
	char p1Ans, yesOrNo;
	
	printf("\nPlayer 1 [o]\n");
	printf("Choose a number : ");
	scanf("%c", &p1Ans);
	yesOrNo = validateMove1(p1Ans, arr);
	
	if(yesOrNo == 'y'){
			for(i=0; i<9; i++){
				if(p1Ans == arr[i]){
					switch(p1Ans){
						case '1' : arr[0] = 'o';
								break;
						case '2' : arr[1] = 'o';
								break;
						case '3' : arr[2] = 'o';
								break;
						case '4' : arr[3] = 'o';
								break;
						case '5' : arr[4] = 'o';
								break;
						case '6' : arr[5] = 'o';
								break;
						case '7' : arr[6] = 'o';
								break;
						case '8' : arr[7] = 'o';
								break;
						case '9' : arr[8] = 'o';
								break;
					}
				}
			}
		}
	
	while(yesOrNo == 'n'){
		
		fflush(stdin);
		
		printf("\nPlayer 1 [o]\n");
		printf("Choose a number : ");
		scanf("%c", &p1Ans);
		yesOrNo = validateMove1(p1Ans, arr);
	
		if(yesOrNo == 'y'){
			for(i=0; i<9; i++){
				if(p1Ans == arr[i]){
					switch(p1Ans){
						case '1' : arr[0] = 'o';
								break;
						case '2' : arr[1] = 'o';
								break;
						case '3' : arr[2] = 'o';
								break;
						case '4' : arr[3] = 'o';
								break;
						case '5' : arr[4] = 'o';
								break;
						case '6' : arr[5] = 'o';
								break;
						case '7' : arr[6] = 'o';
								break;
						case '8' : arr[7] = 'o';
								break;
						case '9' : arr[8] = 'o';
								break;
					}
				}
			}
		}
	}
}

void chooseBox2(char arr[]){
	
	int i;
	char p2Ans, yesOrNo;
	
	printf("\nPlayer 2 [x]\n");
	printf("Choose a number : ");
	scanf("%c", &p2Ans);
	yesOrNo = validateMove2(p2Ans, arr);
	
	if(yesOrNo == 'y'){
		for(i=0; i<9; i++){
			if(p2Ans == arr[i]){
				switch(p2Ans){	
					case '1' : arr[0] = 'x';
							break;
					case '2' : arr[1] = 'x';
							break;
					case '3' : arr[2] = 'x';
							break;
					case '4' : arr[3] = 'x';
							break;
					case '5' : arr[4] = 'x';
							break;
					case '6' : arr[5] = 'x';
							break;
					case '7' : arr[6] = 'x';
							break;
					case '8' : arr[7] = 'x';
							break;
					case '9' : arr[8] = 'x';
							break;
				}
			}	
		}
	}
	
	while(yesOrNo == 'n'){
		
		fflush(stdin);
		
		printf("\nPlayer 2 [o]\n");
		printf("Choose a number : ");
		scanf("%c", &p2Ans);
		yesOrNo = validateMove2(p2Ans, arr);
		
		if(yesOrNo == 'y'){
			for(i=0; i<9; i++){
				if(p2Ans == arr[i]){
					switch(p2Ans){	
						case '1' : arr[0] = 'x';
								break;
						case '2' : arr[1] = 'x';
								break;
						case '3' : arr[2] = 'x';
								break;
						case '4' : arr[3] = 'x';
								break;
						case '5' : arr[4] = 'x';
								break;
						case '6' : arr[5] = 'x';
								break;
						case '7' : arr[6] = 'x';
								break;
						case '8' : arr[7] = 'x';
								break;
						case '9' : arr[8] = 'x';
								break;
					}
				}	
			}
		}
	}
}

char validateMove1(char p1Ans, char arr[]){

	char answer;
	int x = p1Ans - '0';

	answer = 'n';

	if(arr[x-1] == 'x'){
		printf("Move already taken. Choose another one\n");
	}else{
		answer = 'y';
	}
		
	return answer;
}

char validateMove2(char p2Ans, char arr[]){
	
	char answer;
	int x = p2Ans - '0';

	answer = 'n';

	if(arr[x-1] == 'o'){
		printf("Move already taken. Choose another one\n");
	}else{
		answer = 'y';
	}
		
	return answer;
}

int validateWin(char arr[]){
	
	if(arr[0] == arr[3] && arr [3] == arr[6]){
		result = 3;
		if(arr[0] == 'o'){
			printf("Player 1 Wins.\n");
		}else{
			printf("Player 2 Wins.\n");	
		}
		
	}else if(arr[1] == arr[4] && arr[4] == arr[7]){
		result = 3;
		if(arr[1] == 'o'){
			printf("Player 1 Wins.\n");
		}else{
			printf("Player 2 Wins.\n");
		}
		
	}else if(arr[2] == arr[5] && arr[5] == arr[8]){
		result = 3;
		if(arr[2] == 'o'){
			printf("Player 1 Wins.\n");
		}else{
			printf("Player 2 Wins.\n");
		}
	}
	
	if(arr[0] == arr[1] && arr [1] == arr[2]){
		result = 3;
		if(arr[0] == 'o'){
			printf("Player 1 Wins.\n");
		}else{
			printf("Player 2 Wins.\n");
		}
		
	}else if(arr[3] == arr[4] && arr[4] == arr[5]){
		result = 3;
		if(arr[3] == 'o'){
			printf("Player 1 Wins.\n");
		}else{
			printf("Player 2 Wins.\n");
		}
			
	}else if(arr[6] == arr[7] && arr[7] == arr[8]){
		result = 3;
		if(arr[6] == 'o'){
			printf("Player 1 Wins.\n");
		}else{
			printf("Player 2 Wins.\n");
		}
	}
	
	if(arr[0] == arr[4] && arr [4] == arr[8]){
		result = 3;
		if(arr[0] == 'o'){
			printf("Player 1 Wins.\n");
		}else{
			printf("Player 2 Wins.\n");
		}
		
	}else if(arr[2] == arr[4] && arr[4] == arr[6]){
		result = 3;
		if(arr[2] == 'o'){
			printf("Player 1 Wins.\n");
		}else{
			printf("Player 2 Wins.\n");
		}
	}
	
	return result;
}

