/*
Problem: 
Nitin and Sobhagya were playing a game with coins. If Sobhagya has more coins then he is winning, otherwise Nitin is winning. Note that this means if both Nitin and Sobhagya have the same number of coins, then Nitin is winning.

Initially Nitin hasA coins while Sobhagya has B coins. Then Ritik came and gave his C coins to the player who is not winning currently, after which Satyarth came and repeated the same process (gave his D coins to the player who is not winning currently).

Find the final winner of the game.


Input Format:
The first line of the input contains an integer T - the number of test cases. The test cases then follow.
The only line of each test case contains four space-separated integers A, 
B, 
C, and D.


Output Format:
For each test case, output on a single line N if Nitin is the final winner of the game, or S if Sobhagya is the final winner of the game.
*/

#include <stdio.h>

int main() 
{
	int T,A,B,C,D,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
	    scanf("%d%d%d%d",&A,&B,&C,&D);
	    if(A<B)
	    A=A+C;
	    else
	    B=B+C;
	    if(A<B)
	    A=A+D;
	    else
	    B=B+D;
	    if(A<B)
	    printf("\n S");
	    else
	    printf("\n N");
	}
	return 0;
}
