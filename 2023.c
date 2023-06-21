#include<stdio.h>
#include<stdlib.h>


int OutputLeadingSpaces(int nSpaces){
        int i;
        for (i = 0; i <= nSpaces; i++)
        {
                printf(" ");
        }
}
int OutputLineOfStars(int nStars)
{
        int i;
        for (i = 1; i <= nStars; i++)
        {
                printf("*");
        }
        printf("\n");
}
 
void Adjust(int NoOfSpaces, int NoOfStars)
{
        OutputLeadingSpaces(NoOfSpaces);
        OutputLineOfStars(NoOfStars);
}

void Initialise(int MaxNoOfStars, int NoOfSpaces, int NoOfStars)
{
        int i, j;
        for (i = 0; i < MaxNoOfStars/2; i++)
        {
                Adjust(NoOfSpaces, NoOfStars);
                if (i < MaxNoOfStars/2)
                {
                        NoOfSpaces--;
                        NoOfStars += 2;
                }
                else
                {
  //                      NoOfSpaces++;
//NoOfStars -= 2;
                }
        }
}





int main()
{
	int MaxNoOfStars = 9;
	int NoOfSpaces = MaxNoOfStars / 2;
	int NoOfStars = 1;

	Initialise(MaxNoOfStars, NoOfSpaces, NoOfStars);

	return(0);
}

