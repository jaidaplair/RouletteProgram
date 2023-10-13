#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
//decalre variables 
    int number;
    int random;
    //int random1;
    //int random2;
    int playerNumber;
    int even=1,odd=2;
    int playerChoice;
    int const bet=10;
    int choice;
    //needed for random generating numbers 
    srand((unsigned)time(0));
    //winnings = 0;
    //string straightBet;
    //string splitBet;
    //string streetBet;
    //string topBet;
    //string bottomBet;
    //string evenOddBet;
    //int const top = 1'2'3'4'5'6'7'8'9'10'11'12'13'14'15'16'17'18;
    //int const bottom= 19'20'21'22'23'24'25'26'27'28'29'30'31'32'33'34'35'36;
//rules of the games and where you choose what game you want to play
    cout<< "Hello, welcome to Jaida Plair's Roulette Table!\n";
    cout<< "Game rules:\n";
    cout<< "All bets are $10. You can choose how to place your bet from the following menu:\n";
    cout<<"1. Straight up bet (single number selection) Bet pays 35 to 1\n";
    cout<<"2. Split bet (single number selection, covers number +/- 1) Bet pays 17 to 1\n";
    cout<<"3. Street bet (single number selection, covers number + 2 subsequent numbers) Bet pays 11 to 1\n";
    cout<<"4. Top bet (Covers any number between 1-18) Bet pays even money\n";
    cout<<"5. Bottom bet (Covers any number between 19-36) Bet pays even money\n";
    cout<<"6. Even/odd bet (Covers all even or odd numbers 1-36) Bet pays even money\n";
    cout<<"7. Quit game\n";
    cout<< "What game do you want to play?(1-7): ";
    cin>>choice;
    //cout<< "What do you bet?: "<<bet<<endl;
//use switch statment instead of if else so its easier and more efficient, also use if else inside switch statement
//use random generator to get roulette wheel , between 1 and 36 
//have user get a number and set equal to each other, if they are the same yo win, if not you lose
    switch(choice)
    {
    case 1: //( choice == straightBet)
    {
        //how to get random numbers
        random = 1 + (rand()%36);
        //random2 = 1 + (rand()%36);
        cout<<"Please chose a number?: "<<endl;
        cin>>playerNumber;
        cout<< "The computer random number selected is: "<<random<<endl;
        cout<< "Your number selected is: "<<playerNumber<<endl;

        if (random == playerNumber)
        {
        cout<<"You win $"<<(bet*35);
        }
        else
        {
        cout<<"You lose.";
        }
        break;
    }
    //use random generator to get roulette wheel , between 1 and 36 
    //ask user for number 
    //show what number the computere got randomly
    //if the player chosen number is equal to the random number or is 1 below or above the random number you win, otherwise you lose
    //you win 17*your bet
    case 2: //else if (choice==splitBet)
    {
    random = 1 + (rand()%36);
    cout<< "What is your number?: "<<endl;
    cin>>playerNumber;
    cout<< "The computer random number selected is: "<<random<<endl;
    
    //cout<< "What is your number?: "<<playerNumber<<endl;

        if ((playerNumber== random-1)||(playerNumber== 1 + random)||(playerNumber==random))
    {
        cout<<"You win $"<<(bet*17)<<endl;
    }
        else
    {
        cout<<"You lose."<<endl;
    }
    break;
    }
    //use random generator to get roulette wheel , between 1 and 36 
    //ask user for number 
    //show what number the computer got randomly
    //if the player number equals the number, the random number is 1 abover or 2 above you win, otherwise you lose
    //show if you won or lost
    //bet times 11

    case 3: //else if (choice == streetBet)
    {
        cout<< "What is your number?: "<<endl;
        cin>>playerNumber;
        random = 1 + (rand()%36);
        cout<<"The computer random number is: "<<random<<endl;
        if ((playerNumber==random)||(playerNumber==(random+1))||(playerNumber==(random+2)))
        {
        cout<<"You win $"<<(bet*11)<<endl;
        }
        else
        {
        cout<<"You lose."<<endl;
        }
        break;

    }
    //use random generator to get roulette wheel , between 1 and 36 
    //show what number the computer got randomly
    //if the random number is between 1 and 18 then you win other wise you lose
    //show to screen
    case 4: //else if (choice == topBet)
    {
        //cout<< "What is your number?: "<<endl;
        //cin>>playerNumber;
        random = 1 + (rand()%36);
        cout<<"The computer random number is: "<<random<<endl;
        if (random >=1 && random<=18)
        {
            cout<<"You win $"<<bet<<endl;
        }
        else
        {
            cout<<"You lose.";
        }
        break;
    }
    //use random generator to get roulette wheel , between 1 and 36 
    //show what number the computer got randomly
    //if the random number is between 19 and 36 then you win other wise you lose
    //show to screen
    case 5: //else if (choice == bottomBet)
    {
        //cout<< "What is your number?: "<<endl;
        //cin>>playerNumber;
        random = 1 + (rand()%36);
        cout<<"The computer random number is: "<<random<<endl;
        if (random >=19 && random<=36)
        {
            cout<< "You win $"<<bet<<endl;
        }
        else
        {
            cout<<"You lose.";
        }
        break;
    }
    //chose a even number(0) because using the % operator a even number will produce a zero and a odd number wont, odd is then (1)
    //use random generator to get roulette wheel , between 1 and 36 
    //show what number the computer got randomly
    //if number is divisible by 2 then its even if not its odd
    //show to screen
    case 6: //else(choice==evenOddBet)
    {
       cout<<"Chose even(0) or odd(1)?: "<<endl;
       cin>>playerNumber;
       random = 1 + (rand()%36);
       cout<<"The computer random number is: "<<random<<endl;
       
       if (random % 2 == playerNumber)
       {
           cout<<"You win $"<<bet<<endl;
       }
       else
       {
           cout<<"You lose.";
       }
       break;
    }
    //if the person doesnt want to play then they quit the game
    case 7:
    cout<< "You just quit the game! Goodybe!";
    //exit(0);
    }
    return 0;
}