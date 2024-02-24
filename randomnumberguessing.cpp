#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
	srand(time(NULL));
	int secretNumber = rand() % 100+1;
	int guess;
	int attempts=0;
	std::cout<<"Welcome to the Number guessing game!";
	do
	{
		std::cout<<"\nEnter your guess(1-100):";
		std::cin>>guess;
		attempts++;
	if(guess < secretNumber)
	{
		std::cout<<"Too low.Try again.";
	}
	else if
		(guess>secretNumber)
		{
		std::cout<<"Too high.Try again.";
	}
	else
	{
		std::cout<<"Congratulations! You guessed the number in "<< attempts <<" attempts! "; 
			}		
	}
	while(guess! = secretNumber);
	return 0;
}
