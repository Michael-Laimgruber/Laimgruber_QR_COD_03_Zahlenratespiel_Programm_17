
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{

	// MIN
	const int MIN = 1;

	// MAX CHANGE -> SWITCH
	const int MAX_1 = 10;
	const int MAX_2 = 20;
	const int MAX_3 = 30;
	const int MAX_4 = 10000;
	int user_difficulty_choice;



	// GAME VARIABLE
	int user_guess = 0;
	int amount_guess = 0;
	int answer = 0;
	int again;


		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//


		// INFO
		printf("\n\n*************************\n");
		printf("*************************\n\n");

		printf("WILLKOMMEN BEIM ZAHLENRATESPIEL!\n");
		printf("Lassen Sie uns ein Spiel spielen.\n\n");
		printf("Hier koennen Sie Zahlen erraten.\n");
		printf("Zuerst stellen Sie eine Schwierigkeitsstufe ein und danach koennen Sie Zahlen eintippen.\n");
		printf("Viel Spass beim Raten.\n\n");


		printf("*************************\n");
		printf("*************************\n\n\n\n");





	//do while loop to re enter the game
	do
	{

		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//

		// USER DIFFICULTY CHOICE
		printf("Waehlen Sie einen Schwierigkeitsgrad:\n");
		printf("(1) - Leicht (1-%d\n", MAX_1);
		printf("(2) - Mittel (1-%d\n", MAX_2);
		printf("(3) - Schwer (1-%d\n", MAX_3);
		printf("(4) - INSANE (1-%d\n", MAX_4);
		printf("Deine Wahl: ");
		scanf_s("%d", &user_difficulty_choice);

		switch (user_difficulty_choice)
		{
			// --------------------------------------------------//
		case 1:;

			srand(time(0));
			answer = (rand() % MAX_1) + MIN;
			break;
			// --------------------------------------------------//
		case 2:;

			srand(time(0));
			answer = (rand() % MAX_2) + MIN;
			break;
			// --------------------------------------------------//   
		case 3:;

			srand(time(0));
			answer = (rand() % MAX_3) + MIN;
			break;
			// --------------------------------------------------//   
		case 4:;

			srand(time(0));
			answer = (rand() % MAX_4) + MIN;
			break;
			// --------------------------------------------------// 

		default:

			printf("Ungültige Auswahl. Bitte erneut versuchen.\n");
		}

		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//



		// GAME
		do
		{
			printf("Ihre Zahl: ");
			scanf_s("%d", &user_guess);

			// --------------------------------------------------//  
			if (user_guess > answer)
			{
				printf("Leider zu HOCH!\n");
			}
			// --------------------------------------------------//  
			else if (user_guess < answer)
			{
				printf("Leider zu NIEDRIG!\n");
			}
			// --------------------------------------------------//  
			else
			{
				// GAME SUCCESSFUL
				printf("\n\n*************************\n");
				printf("*************************\n\n");

				printf("GESCHAFFT!\n");
				printf("Ihre Antwort: %d \n", answer);
				printf("Ihre Versuche: %d \n\n", amount_guess);

				printf("*************************\n");
				printf("*************************\n\n\n\n");
									
			}
			// --------------------------------------------------//  
			
		// AMOUNT COUNTER
		amount_guess++;

		} while (user_guess != answer);


		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//


		// PLAY ANOTHER GAME?
		printf("Moechten Sie nocheinmal spielen?\n");
		printf("Bestaetigen Sie mit 1 oder wenn Sie das Spiel verlassen möchten, druecken Sie 2.\n\n");
		printf("(1) - Ja\n");
		printf("(2) - Nein\n\n");

		scanf_s(" %d", &again);

	} while (again == 1);


		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//
		// ----------------------------------------------------------------------------//


	// FAREWELL
	printf("\n\n Danke und auf Wiedersehen.\n\n");


	return 0;
}