
/*-----------------------------------------------------------------------*
*------------------------     TIC TAC TOE     ---------------------------*
*------------------------------------------------------------------------*
*---------    COMPILER used for Development: DEV-C++  5.5.1   -----------*
*------------------------------------------------------------------------*/

#include<iostream>
#include<conio.h>
#include<ctime>
#include<cstring>
#include<cstdlib>

using namespace std;

int TURN=0;
char k;

//class game 

class BOX{
int i,j;
char TTT[7][7];

public:

void begin()
{
	TTT[1][1]=TTT[1][3]=TTT[1][5]=TTT[3][1]=TTT[3][3]=TTT[3][5]=TTT[5][1]=TTT[5][3]=TTT[5][5]=' ';
}

void PRINT()
{
	cout<<"\n\n";
	for(i=0;i<7;i++)
	{
		for(j=0;j<7;j++)
		{
			cout<<TTT[i][j];
		}
		cout<<"\n";
	}
}

void INITIALIZE()
{
	TTT[0][0]=218;TTT[0][6]=191;TTT[6][0]=192;TTT[6][6]=217;
	TTT[2][0]=TTT[4][0]=195;TTT[2][6]=TTT[4][6]=180;
	TTT[0][2]=TTT[0][4]=194;TTT[6][2]=TTT[6][4]=193;
	TTT[2][2]=TTT[2][4]=TTT[4][2]=TTT[4][4]=197;
	TTT[0][1]=TTT[0][3]=TTT[0][5]=TTT[2][1]=TTT[2][3]=TTT[2][5]=TTT[4][1]=TTT[4][3]=TTT[4][5]=TTT[6][1]=TTT[6][3]=TTT[6][5]=196;
	TTT[1][0]=TTT[1][2]=TTT[1][4]=TTT[1][6]=TTT[3][0]=TTT[3][2]=TTT[3][4]=TTT[3][6]=TTT[5][0]=TTT[5][2]=TTT[5][4]=TTT[5][6]=179;

	TTT[1][1]='1';TTT[1][3]='2';TTT[1][5]='3';TTT[3][1]='4';TTT[3][3]='5';
	TTT[3][5]='6';TTT[5][1]='7';TTT[5][3]='8';TTT[5][5]='9';

}

void INCHK(int k)
{
	switch(k)
	{
		case 49:
			if(TTT[1][1]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[1][1]='O';
				else
					TTT[1][1]='X';

				PRINT();
				break;
			}
			else
			{
				cout<<"\nPosition already acquired. Try again:\n";
				PRINT();
				break;
			}

		case 50:
			if(TTT[1][3]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[1][3]='O';
				else
					TTT[1][3]='X';

				PRINT(); break;
			}
			else
			{
				cout<<"\nPosition already acquired. Try again:\n";
				PRINT();   break;
			}
		case 51:
			if(TTT[1][5]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[1][5]='O';
				else
					TTT[1][5]='X';


				PRINT();
				break;
			}
			else
			{
				cout<<"\nPosition already acquired. Try again:\n"; PRINT(); break;
			}
		case 52:
			if(TTT[3][1]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[3][1]='O';
				else
					TTT[3][1]='X';


				PRINT();
				break;
			}
			else
			{
				cout<<"\nPosition already acquired. Try again:\n"; PRINT(); break;
			}
		case 53:
			if(TTT[3][3]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[3][3]='O';
				else
					TTT[3][3]='X';
				PRINT();
				break;
			}
			else
			{
				cout<<"\nPosition already acquired. Try again:\n"; PRINT(); break;
			}
		case 54:
			if(TTT[3][5]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[3][5]='O';
				else
					TTT[3][5]='X';


				PRINT();
				break;
			}
			else
			{
				cout<<"\nPosition already acquired. Try again:\n"; PRINT(); break;
			}
		case 55:
			if(TTT[5][1]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[5][1]='O';
				else
					TTT[5][1]='X';


				PRINT();
				break;
			}
			else
			{
				cout<<"\nPosition already acquired. Try again:\n";  PRINT(); break;
			}
		case 56:
			if(TTT[5][3]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[5][3]='O';
				else
					TTT[5][3]='X';


				PRINT();
				break;
			}
			else
			{
				cout<<"\nPosition already acquired. Try again:\n"; PRINT(); break;
			}
		case 57:
			if(TTT[5][5]==' ')
			{
				++TURN;
				if(TURN%2==0)
					TTT[5][5]='O';
				else
					TTT[5][5]='X';
				PRINT();
				break;
			}
			else
			{
				cout<<"\nPosition already acquired. Try again:\n"; PRINT(); break;
			}
		default:
			cout<<"\nEnter a valid Position no. Try again: \n";

	}
}

void WINCHK()
{
	if((TTT[1][1]==TTT[1][3] && TTT[1][3]==TTT[1][5] && TTT[1][1]!=' ' && TTT[1][3]!=' ' && TTT[1][5]!=' ') ||
	   (TTT[3][1]==TTT[3][3] && TTT[3][3]==TTT[3][5] && TTT[3][1]!=' ' && TTT[3][3]!=' ' && TTT[3][5]!=' ') ||
	   (TTT[5][1]==TTT[5][3] && TTT[5][3]==TTT[5][5] && TTT[5][5]!=' ' && TTT[5][1]!=' ' && TTT[5][3]!=' ') ||
	   (TTT[1][1]==TTT[3][1] && TTT[3][1]==TTT[5][1] && TTT[1][1]!=' ' && TTT[3][1]!=' ' && TTT[5][1]!=' ') ||
	   (TTT[1][3]==TTT[3][3] && TTT[3][3]==TTT[5][3] && TTT[1][3]!=' ' && TTT[3][3]!=' ' && TTT[5][3]!=' ') ||
	   (TTT[1][5]==TTT[3][5] && TTT[3][5]==TTT[5][5] && TTT[1][5]!=' ' && TTT[3][5]!=' ' && TTT[5][5]!=' ') ||
	   (TTT[1][1]==TTT[3][3] && TTT[3][3]==TTT[5][5] && TTT[3][3]!=' ' && TTT[1][1]!=' ' && TTT[5][5]!=' ') ||
	   (TTT[1][5]==TTT[3][3] && TTT[3][3]==TTT[5][1] && TTT[3][3]!=' ' && TTT[1][5]!=' ' && TTT[5][1]!=' '))
	{
		if((TURN+1)%2==0)
		{
			cout<<"\nPLayer 2 Wins.\nThanks....!!\n";
		}
		else
			cout<<"\nPLayer 1 Wins.\nThanks....!!\n";

		cout<<"\nPress any key to exit.\n";
		getch(); exit(0);
	}
}

};

int main()
{
	BOX game;
	cout<<"\n\nWELCOME to TIC-TAC-TOE !!!\n\n\nFollowing Grid shows the position nos. Enter position no s to play:\n\n";
	game.INITIALIZE();
	game.PRINT();
	getch();
	game.begin();
	game.PRINT();
	while(TURN<9)
	{
		if(TURN%2==0)
		{
			cout<<"\nSTEP: "<<TURN+1<<" :: PLayer 2's TURN: ";
			k=getch();
			if(k<1+48 || k>9+48)
				cout<<"\nEnter a valid position no. Try again: \n";
			else
			{
				game.INCHK(k); game.WINCHK();
			}
		}
		else
		{
			cout<<"\nSTEP: "<<TURN+1<<" :: PLayer 1's TURN: ";
			k=getch();
			if(k<1+48 || k>9+48)
				cout<<"\nEnter a valid position no. Try again: \n";
			else
			{
				game.INCHK(k); game.WINCHK();
			}
		}
	}


	return 0;

}



/*
int computerAI() //work on computerAI part where the computer tries to win before countering.
{
    playerTurn == false;

    if(blockOne == 'O' && blockTwo == 'O' && playerTurn == false && blockThree == '3') //1 - 2 = 3 win
    {
        blockThree = 'O';
        playerTurn = true;
    }

    if(blockFour == 'O' && blockFive == 'O' && playerTurn == false && blockSix == '6') //4 - 5 = 6 win
    {
        blockSix = 'O';
        playerTurn = true;
    }

    if(blockSeven == 'O' && blockEight == 'O' && playerTurn == false && blockNine == '9') //7 - 8 = 9 win
    {
        blockNine = 'O';
        playerTurn = true;
    }

    if(blockOne == 'O' && blockFour == 'O' && playerTurn == false && blockSeven == '7') //1 - 4 = 7 win
    {
        blockSeven = 'O';
        playerTurn = true;
    }

    if(blockTwo == 'O' && blockFive == 'O' && playerTurn == false && blockEight == '8') //2 - 5 = 8 win
    {
        blockEight = 'O';
        playerTurn = true;
    }

    if(blockThree == 'O' && blockSix == 'O' && playerTurn == false && blockNine == '9') //3 - 6 = 9 win
    {
        blockNine = 'O';
        playerTurn = true;
    }

    if(blockOne == 'O' && blockFive == 'O' && playerTurn == false && blockNine == '9') //1 - 5 = 9 win
    {
        blockNine = 'O';
        playerTurn = true;
    }

    if(blockThree == 'O' && blockFive == 'O' && playerTurn == false && blockSeven == '7') //3 - 5 = 7 win
    {
        blockSeven = 'O';
        playerTurn == true;
    }

    if((playerChoice == 1 || playerChoice == 5 || playerChoice == 9) && playerTurn == false)
    {
        if((blockOne == 'X' && blockFive == 'X') && playerTurn == false && blockNine == '9') //1 - 5 = 9 diagonal
        {
            blockNine = 'O';
            playerTurn = true;
        }

        if((blockOne == 'X' && blockNine == 'X') && playerTurn == false && blockFive == '5') //1 - 9 = 5 diagonal
        {
            blockFive = 'O';
            playerTurn = true;
        }

        if((blockFive == 'X' && blockNine == 'X') && playerTurn == false && blockOne == '1') //5 - 9 = 1 diagonal
        {
            blockOne = 'O';
            playerTurn = true;
        }
    }

    if((playerChoice == 3 || playerChoice == 5 || playerChoice == 7) && playerTurn == false)
    {
        if((blockSeven == 'X' && blockFive == 'X') && playerTurn == false && blockThree == '3') //7 - 5 = 3 diagonal
        {
            blockThree = 'O';
            playerTurn = true;
        }

        if((blockSeven == 'X' && blockThree == 'X') && playerTurn == false && blockFive == '5') //7 - 3 = 5 diagonal
        {
            blockFive = 'O';
            playerTurn = true;
        }

        if((blockFive == 'X' && blockThree == 'X') && playerTurn == false && blockSeven == '7') //5 - 3 = 7 diagonal
        {
            blockSeven = 'O';
            playerTurn = true;
        }
    }

    if((playerChoice == 1 || playerChoice == 2 || playerChoice == 3) && playerTurn == false)
    {
        if((blockOne == 'X' && blockTwo == 'X') && playerTurn == false && blockThree == '3') // 1 - 2 = 3 horizontal
        {
            blockThree = 'O';
            playerTurn = true;
        }

        if((blockOne == 'X' && blockThree == 'X') && playerTurn == false && blockTwo == '2') //1 - 3 = 2 horizontal
        {
            blockTwo = 'O';
            playerTurn = true;
        }

        if((blockTwo == 'X' && blockThree == 'X') && playerTurn == false && blockOne == '1') //2 - 3 = 1 horizontal
        {
            blockOne = 'O';
            playerTurn = true;
        }
    }

    if((playerChoice == 4 || playerChoice == 5 || playerChoice == 6) && playerTurn == false)
    {
        if((blockFour == 'X' && blockFive == 'X') && playerTurn == false && blockSix == '6') //4 - 5 = 6 horizontal line 2
        {
            blockSix = 'O';
            playerTurn = true;
        }

        if((blockFour == 'X' && blockSix == 'X') && playerTurn == false && blockFive == '5') //4 - 6  = 5 horizontal line 2
        {
            blockFive = 'O';
            playerTurn = true;
        }

        if((blockFive == 'X' && blockSix == 'X') && playerTurn == false && blockFour == '4') //5 - 6 = 4 horizontal line 2
        {
            blockFour = 'O';
            playerTurn = true;
        }
    }

    if((playerChoice == 7 || playerChoice == 8 || playerChoice == 9) && playerTurn == false)
    {
        if((blockSeven == 'X' && blockEight == 'X') && playerTurn == false && blockNine == '9') //7 - 8 = 9 horizontal line 3
        {
            blockNine = 'O';
            playerTurn = true;
        }

        if((blockSeven == 'X' && blockNine == 'X') && playerTurn == false && blockEight == '8') //7 - 9 = 8 horizontal line 3
        {
            blockEight = 'O';
            playerTurn = true;
        }

        if((blockEight == 'X' && blockNine == 'X') && playerTurn == false && blockSeven == '7') //8 - 9 = 7 horizontal line 3
        {
            blockSeven = 'O';
            playerTurn = true;
        }
    }

    if((playerChoice == 1 || playerChoice == 4 || playerChoice == 7) && playerTurn == false)
    {
        if((blockOne == 'X' && blockFour == 'X') && playerTurn == false && blockSeven == '7') //1 - 4 = 7 vertical row 1
        {
            blockSeven = 'O';
            playerTurn = true;
        }

        if((blockOne == 'X' && blockSeven == 'X') && playerTurn == false && blockFour == '4') //1 - 7 = 4 vertical row 1
        {
            blockFour = 'O';
            playerTurn = true;
        }

        if((blockFour == 'X' && blockSeven == 'X') && playerTurn == false && blockOne == '1') //4 - 7 = 1 vertical row 1
        {
            blockOne = 'O';
            playerTurn = true;
        }

    }

    if((playerChoice == 2 || playerChoice == 5 || playerChoice == 8) && playerTurn == false)
    {
        if((blockTwo == 'X' && blockFive == 'X') && playerTurn == false && blockEight == '8') //2 - 5 = 8 vertical row 2
        {
            blockEight = 'O';
            playerTurn = true;
        }

        if((blockTwo == 'X' && blockEight == 'X') && playerTurn == false && blockFive == '5') //2 - 8 = 5 vertical row 2
        {
            blockFive = 'O';
            playerTurn = true;
        }

        if((blockFive == 'X' && blockEight == 'X') && playerTurn == false && blockTwo == '2') //5 - 8 = 2 vertical row 2
        {
            blockTwo = 'O';
            playerTurn = true;
        }
    }

    if((playerChoice == 3 || playerChoice == 6 || playerChoice == 9) && playerTurn == false)
    {
        if((blockThree == 'X' && blockSix == 'X') && playerTurn == false && blockNine == '9') //3 - 6 = 9 vertical row 3
        {
            blockNine = 'O';
            playerTurn = true;
        }

        if((blockThree == 'X' && blockNine == 'X') && playerTurn == false && blockSix == '6') //3 - 9 = 6 vertical row 3
        {
            blockSix = 'O';
            playerTurn = true;
        }

        if((blockSix == 'X' && blockNine == 'X') && playerTurn == false && blockThree == '3') //6 - 9 = 3 vertical row 3
        {
            blockThree = 'O';
            playerTurn = true;
        }
    }
    else
    {
        do
        {

            if(blockOne == '1' && playerTurn == false)
            {
                playerTurn = true;
                blockOne = 'O';
            }
            if(blockTwo == '2' && playerTurn == false)
            {
                playerTurn = true;
                blockTwo = 'O';
            }
            if(blockThree == '3' && playerTurn == false)
            {
                playerTurn = true;
                blockThree = 'O';
            }
            if(blockFour == '4' && playerTurn == false)
            {
                playerTurn = true;
                blockFour = 'O';
            }
            if(blockFive == '5' && playerTurn == false)
            {
                playerTurn = true;
                blockFive = 'O';
            }
            if(blockSix == '6' && playerTurn == false)
            {
                playerTurn = true;
                blockSix = 'O';
            }
            if(blockSeven == '7' && playerTurn == false)
            {
                playerTurn = true;
                blockSeven = 'O';
            }
            if(blockEight == '8' && playerTurn == false)
            {
                playerTurn = true;
                blockEight = 'O';
            }
            if(blockNine == '9' && playerTurn == false)
            {
                playerTurn = true;
                blockNine = 'O';
            }
        }
        while(playerTurn = false);
    }
    return 0;
}

*/
