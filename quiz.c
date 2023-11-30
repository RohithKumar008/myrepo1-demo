#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
void reset()
{
    const char *filename = "scorecard.txt";
     if (remove(filename) == 0) {
        printf("score has been reset sucessfully\n");
    } else {
        perror("Error deleting file");
    }
}
int main()
{   
    // int seconds=10;
    char choice1,choice2,choice3,choice4;
    int count=0,points,score;
    char name[20],diff;
    mainhome:
    // system("clear");
    printf("\n                                                      ****    THE QUIZ GAME    ****\n");
    printf("        ___________________________________________________________________________________________________________________\n");
    printf("        ___________________________________________________________________________________________________________________\n");
    printf("\n                                                      >> PRESS S TO START GAME \n");
    printf("                                                      >> PRESS 'V' TO SEE SCORECARD\n");
    printf("                                                      >> PRESS 'R' to reset score\n");
    printf("                                                      >> PRESS Q TO EXIT \n");
    printf("                                                      >>");
    scanf(" %c",&choice1);
    char caps0 = toupper(choice1);
if(caps0=='S')
    {
    game:
    printf("        ---------------------------------------------------------------------------------------------------------------------\n");
    printf("\n                                                     ** PLEASE REGISTER YOUR NAME **\n");
    printf("\n                                                      >> PLEASE ENTER YOUR NAME : \n");
    printf("                                                      >>");
    scanf("%s",name);
    printf("        ***********************************************************************************************************************");
    printf("\n\n                                                    ** PLAYER '%s' WELCOME TO THE QUIZ GAME **\n\n",name);
    printf("        ************************************************************************************************************************\n");
    printf("                                                              ___________");
    printf("\n                                                              |GAME INFO| \n");
    printf("                                                              -----------\n");
    printf("            1.There will be 3 levels in this game\n");
    printf("            >> LEVEL 1: contains 10 questions\n");
    printf("            >> 1. 1ST 4 questions carry '5' points each\n");
    printf("            >> 2. Next 3 questions carry '10' points each\n");
    printf("            >> 3. Last 3 questions carry '15' points each\n");
    printf("            >> You will play 'LEVEL 2' if you score atleast '40' points\n");
    printf("         --------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\n                                                    ** PRESS ANY KEY TO START THE GAME **\n");
    printf("                                                        >>");
    scanf(" %c",&choice2);
        for(int i=1;i<=10;i++)
            {
            switch(i)
            {   
                char choice3;
                case 1:
                printf("QUESTION : 1\n");
                printf("\nwho is the prime minister of INDIA ?\n");
                printf("\nA.Narendra Modi\t\tB.Virat Kohli\t\tC.Rohith Sharma\t\tD.Jadeja\n");
                printf("\n                           ** enter your option  **\n");
                printf("                                   >>");
                scanf(" %c",&choice3);
                char caps1 = toupper(choice3);
                if(caps1=='A')
                    {
                        printf("\n                          ** RIGHT ANSWER!!!! **\n");
                        count = count +5;
                    }
                else
                    {
                        printf("\n                          ** WRONG ANSWER!!!! **\n");
                    }
                break;
                case 2:
                printf("QUESTION 2 : \n");
                printf("\nhighest score of rohith sharma ?\n");
                printf("A.324\t\tB.232\t\tC.264\t\tD.234\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps2 = toupper(choice3);
                if(caps2=='C')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count +5;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 3:
                printf("QUESTION 3 : \n");
                printf("\nNumber of centuries for virat kohili till now ?\n");
                printf("A.32\t\tB.23\t\tC.26\t\tD.79\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps3 = toupper(choice3);
                if(caps3=='D')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 5;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 4:
                printf("QUESTION 4 : \n");
                printf("\nWhen did INDIA won the world cup ?\n");
                printf("A.1998\t\tB.2011\t\tC.1999\t\tD.2015\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps4 = toupper(choice3);
                if(caps4=='B')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 5;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 5:
                printf("QUESTION 5 : \n");
                printf("\nHow many centuries for Sachin Tendulkar ?\n");
                printf("A.90\t\tB.91\t\tC.100\t\tD.115\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps5 = toupper(choice3);
                if(caps5=='C')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 10;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 6:
                printf("QUESTION 1 : \n");
                printf("\nHOW MANY TIMES DID RCB WIN THE IPL ?\n");
                printf("A.1\t\tB.2\t\tC.3\t\tD.0\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps6 = toupper(choice3);
                if(caps6=='D')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 10;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 7:
                printf("QUESTION 2 : \n");
                printf("\nWHEN DID INDIA GET INDEPENDENCE ?\n");
                printf("A.1945\t\tB.1950\t\tC.1975\t\tD.STILL DID NOT GET\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps7 = toupper(choice3);
                if(caps7=='A')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 10;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 8:
                printf("QUESTION 8 : \n");
                printf("\nWHAT IS THE CAPITAL OF NEWZELAND ?\n");
                printf("A.OVAL\t\tB.AUCKLAND\t\tC.WELLINGTON\t\tD.DELHI\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps8 = toupper(choice3);
                if(caps8=='C')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 15;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 9:
                printf("QUESTION 9 : \n");
                printf("\nWHAT IS THE LARGEST WATERFALL IN WORLD ?\n");
                printf("A.ANGEL FALLS\t\tB.TUGELA FALLS\t\tC.VICTORIA FALLS\t\tD.NIAGARA FALLS\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps9 = toupper(choice3);
                if(caps9=='A')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 15;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 10:
                printf("QUESTION 10 : \n");
                printf("\nWHAT IS THE NATIONAL ANIMAL OF INDIA ?\n");
                printf("A.LION\t\tB.TIGER\t\tC.CHEETHA\t\tD.ELEPHENT\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps10 = toupper(choice3);
                if(caps10=='B')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 15;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
            }
        }
   


    printf("\n-------------------------------------------------------------------------------------------------\n");
    printf("-------------------------------------------------------------------------------------------------\n");
    points=count;
    score = points;
    if(points >40)
        {
            printf("congradulations you have scored %d and you have cleared 'LEVEL 1' !!!\n",points);
            count = 0;
            points=0;
            goto level2;
        }
    else
        {
            printf("you have scored %d and you have not cleared 'LEVEL 1'. You cannot go to 'LEVEL 2' !!",points);
              FILE *scorecard;
                scorecard = fopen("scorecard.txt","a");
                fprintf(scorecard,"%s\t\t%d\n",name,points);
                fclose(scorecard);
                count = 0;
            goto mainhome;
        }
    
    level2 :
    printf("you have entered level 2\n");
    printf("\n\n                                                    ** PRESS ANY KEY TO START THE GAME **\n");
    printf("                                                        >>");
    scanf(" %c",&choice2);
    for(int i=1;i<=10;i++)
        {
            switch(i)
            {
                case 1:
                printf("QUESTION : 1\n");
                printf("\nwho is the prime minister of INDIA ?\n");
                printf("\nA.Narendra Modi\t\tB.Virat Kohli\t\tC.Rohith Sharma\t\tD.Jadeja\n");
                printf("\n                           ** enter your option  **\n");
                printf("                                   >>");
                scanf(" %c",&choice3);
                char caps1 = toupper(choice3);
                if(caps1=='A')
                    {
                        printf("\n                          ** RIGHT ANSWER!!!! **\n");
                        count = count +5;
                    }
                else
                    {
                        printf("\n                          ** WRONG ANSWER!!!! **\n");
                    }
                break;
                case 2:
                printf("QUESTION 2 : \n");
                printf("\nhighest score of rohith sharma ?\n");
                printf("A.324\t\tB.232\t\tC.264\t\tD.234\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps2 = toupper(choice3);
                if(caps2=='C')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count +5;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 3:
                printf("QUESTION 3 : \n");
                printf("\nNumber of centuries for virat kohili till now ?\n");
                printf("A.32\t\tB.23\t\tC.26\t\tD.79\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps3 = toupper(choice3);
                if(caps3=='D')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 5;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 4:
                printf("QUESTION 4 : \n");
                printf("\nWhen did INDIA won the world cup ?\n");
                printf("A.1998\t\tB.2011\t\tC.1999\t\tD.2015\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps4 = toupper(choice3);
                if(caps4=='B')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 5;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 5:
                printf("QUESTION 5 : \n");
                printf("\nHow many centuries for Sachin Tendulkar ?\n");
                printf("A.90\t\tB.91\t\tC.100\t\tD.115\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps5 = toupper(choice3);
                if(caps5=='C')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 10;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 6:
                printf("QUESTION 1 : \n");
                printf("\nHOW MANY TIMES DID RCB WIN THE IPL ?\n");
                printf("A.1\t\tB.2\t\tC.3\t\tD.0\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps6 = toupper(choice3);
                if(caps6=='D')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 10;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 7:
                printf("QUESTION 2 : \n");
                printf("\nWHEN DID INDIA GET INDEPENDENCE ?\n");
                printf("A.1945\t\tB.1950\t\tC.1975\t\tD.STILL DID NOT GET\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps7 = toupper(choice3);
                if(caps7=='A')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 10;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 8:
                printf("QUESTION 8 : \n");
                printf("\nWHAT IS THE CAPITAL OF NEWZELAND ?\n");
                printf("A.OVAL\t\tB.AUCKLAND\t\tC.WELLINGTON\t\tD.DELHI\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps8 = toupper(choice3);
                if(caps8=='C')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 15;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 9:
                printf("QUESTION 9 : \n");
                printf("\nWHAT IS THE LARGEST WATERFALL IN WORLD ?\n");
                printf("A.ANGEL FALLS\t\tB.TUGELA FALLS\t\tC.VICTORIA FALLS\t\tD.NIAGARA FALLS\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps9 = toupper(choice3);
                if(caps9=='A')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 15;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 10:
                printf("QUESTION 10 : \n");
                printf("\nWHAT IS THE NATIONAL ANIMAL OF INDIA ?\n");
                printf("A.LION\t\tB.TIGER\t\tC.CHEETHA\t\tD.ELEPHENT\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps10 = toupper(choice3);
                if(caps10=='B')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 15;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;

            }

        }
    points = points + count;
    score=score+points;
    if(points > 55)
        {
            printf("CONGRADULATIONS you have scored %d and Cleared LEVEL 2 !!!\n",points);
            count = 0;
            points = 0;
            goto level3;
        }
    else
        {
            printf("you have scored %d and did not clear LEVEL 2\n",points);
            printf("you cannot goto next level\n");
            FILE *scorecard;
        scorecard = fopen("scorecard.txt","a");
        fprintf(scorecard,"%s\t\t%d\n",name,score);
        fclose(scorecard);
        count = 0;
            goto mainhome;
        }

    level3 :
    printf("you have entered level 3 !! \n");
    printf("\n\n                                                    ** PRESS ANY KEY TO START THE GAME **\n");
    printf("                                                        >>");
    scanf(" %c",&choice2);
    for(int i=1;i<=10;i++)
        {
            switch(i)
            {
                case 1:
                printf("QUESTION : 1\n");
                printf("\nwho is the prime minister of INDIA ?\n");
                printf("\nA.Narendra Modi\t\tB.Virat Kohli\t\tC.Rohith Sharma\t\tD.Jadeja\n");
                printf("\n                           ** enter your option  **\n");
                printf("                                   >>");
                scanf(" %c",&choice3);
                char caps1 = toupper(choice3);
                if(caps1=='A')
                    {
                        printf("\n                          ** RIGHT ANSWER!!!! **\n");
                        count = count +5;
                    }
                else
                    {
                        printf("\n                          ** WRONG ANSWER!!!! **\n");
                    }
                break;
                case 2:
                printf("QUESTION 2 : \n");
                printf("\nhighest score of rohith sharma ?\n");
                printf("A.324\t\tB.232\t\tC.264\t\tD.234\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps2 = toupper(choice3);
                if(caps2=='C')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count +5;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 3:
                printf("QUESTION 3 : \n");
                printf("\nNumber of centuries for virat kohili till now ?\n");
                printf("A.32\t\tB.23\t\tC.26\t\tD.79\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps3 = toupper(choice3);
                if(caps3=='D')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 5;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 4:
                printf("QUESTION 4 : \n");
                printf("\nWhen did INDIA won the world cup ?\n");
                printf("A.1998\t\tB.2011\t\tC.1999\t\tD.2015\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps4 = toupper(choice3);
                if(caps4=='B')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 5;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 5:
                printf("QUESTION 5 : \n");
                printf("\nHow many centuries for Sachin Tendulkar ?\n");
                printf("A.90\t\tB.91\t\tC.100\t\tD.115\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps5 = toupper(choice3);
                if(caps5=='C')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 10;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 6:
                printf("QUESTION 1 : \n");
                printf("\nHOW MANY TIMES DID RCB WIN THE IPL ?\n");
                printf("A.1\t\tB.2\t\tC.3\t\tD.0\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps6 = toupper(choice3);
                if(caps6=='D')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 10;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 7:
                printf("QUESTION 2 : \n");
                printf("\nWHEN DID INDIA GET INDEPENDENCE ?\n");
                printf("A.1945\t\tB.1950\t\tC.1975\t\tD.STILL DID NOT GET\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps7 = toupper(choice3);
                if(caps7=='A')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 10;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 8:
                printf("QUESTION 8 : \n");
                printf("\nWHAT IS THE CAPITAL OF NEWZELAND ?\n");
                printf("A.OVAL\t\tB.AUCKLAND\t\tC.WELLINGTON\t\tD.DELHI\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps8 = toupper(choice3);
                if(caps8=='C')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 15;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 9:
                printf("QUESTION 9 : \n");
                printf("\nWHAT IS THE LARGEST WATERFALL IN WORLD ?\n");
                printf("A.ANGEL FALLS\t\tB.TUGELA FALLS\t\tC.VICTORIA FALLS\t\tD.NIAGARA FALLS\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps9 = toupper(choice3);
                if(caps9=='A')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 15;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;
                case 10:
                printf("QUESTION 10 : \n");
                printf("\nWHAT IS THE NATIONAL ANIMAL OF INDIA ?\n");
                printf("A.LION\t\tB.TIGER\t\tC.CHEETHA\t\tD.ELEPHENT\n");
                printf("\n                          ** enter your option **\n");
                printf("                            >>");
                scanf(" %c",&choice3);
                char caps10 = toupper(choice3);
                if(caps10=='B')
                    {
                        printf("                    ** RIGHT ANSWER **\n");
                        count = count + 15;
                    }
                else
                    {
                        printf("                    ** WRONG ANSWER **\n");
                    }
                break;

            }

        }
    points = points + count;
    score=score+points;
    if(points > 65)
        {
            printf("CONGRADULATIONS you have scored %d and Cleared LEVEL 3 !!!\n",points);
            printf("YOU HAVE WON THE QUIZ GAME !!!\n");
            FILE *scorecard;
            scorecard = fopen("scorecard.txt","a");
            fprintf(scorecard,"%s\t\t%d\n",name,score);
            fclose(scorecard);
            goto mainhome;
            count = 0;
            points = 0;
        }
    else
        {
            printf("you have scored %d and did not clear LEVEL 3\n",points);
            printf("beter luck next time \n");
            FILE *scorecard;
        scorecard = fopen("scorecard.txt","a");
        fprintf(scorecard,"%s\t\t%d\n",name,score);
        fclose(scorecard);
        count = 0;
            goto mainhome;
        }

    }

else if(caps0=='Q')
    {
         exit(1);
    }  
else if (caps0 == 'V')
    {
        FILE *scorecard;
        scorecard = fopen("scorecard.txt","r");
        fclose(scorecard);
        if(scorecard == NULL)
            {
                printf("none has played yet\n");
            }
        else
            {
                printf("NAME        SCORE\n");
                char name[20];
                FILE *scorecard;
                    scorecard = fopen("scorecard.txt","r");
                    while (fgets(name, sizeof(name), scorecard) != NULL) {
                        printf("%s", name);
                        }
    fclose(scorecard);
                
            }
        
            goto mainhome;
    }
else if (caps0 == 'R')
    {
        reset();
        goto mainhome;
    }
else
    {
        goto mainhome;
    }
    
    return 0;

}
