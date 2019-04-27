#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct details{
	char ch[10000];
};

void main()
{
	char dilemma[10000],s[10000];
	int n,i,ran;
	
	printf("\nDM :\tHello I'm Decision Maker or DM for short");
	printf("\nDM :\tState your dilemma in short: ");
	printf("\nYou :\t");
	gets(dilemma);
	printf("DM :\tHmm... ");
	printf("\nDM :\tThat's gonna be a tough choice ");
	printf("\nDM :\tHow many choices do you have? ");
	printf("\nYou :\t ");
	scanf("%d",&n);
	fflush(stdin);
	
	if(n<0)
	printf("DM :\tHey! Your dilemma can't be that negative");
	
	
	else if(n==1||n==0)
	printf("DM :\tLooks like you don't have much of a choice here ");
	
	else
	{
		struct details choices[n];
	
		for(i=0; i<n; i++)
		{
			printf("DM :\tWhat's your choice number %d ?",(i+1));
			printf("\nYou :\t ");
			gets(s);
			strcpy(choices[i].ch, s);		
		}
	
		printf("DM :\tLet me think for a while ");
		for(i=0;i<10000;i++)
		{
			int j;
			for(j=0;j<100000;j++)
			{
			}
		}
	
		srand(time(NULL)); 
		ran = 1+(rand()%((n+1)-1));
	
		printf("\n\n\n\n\n");
		printf("\nDM :\tOkay. I've decided. ");
		printf("\nDM :\tYou asked \" %s \" ",dilemma);
		printf("\nDM :\tI think you should go with choice number %d which was %s",ran,choices[ran-1]);
	}
	printf("\nDM :\tWhatever you choose to do Decision Maker is not responsible for the consequences. Good Luck!");
	printf("\nDM :\tHope to see you soon");
	printf("\nDM :\tBye Bye!");
	printf("\n\nPress any key to exit...");
	getch();
}
	
	
