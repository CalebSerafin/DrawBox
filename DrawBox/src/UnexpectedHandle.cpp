/*
 * UnexpectedHandle.cpp
 *
 *  Created on: 13 Sep 2017
 *      Author: User
 */

#include "UnexpectedHandle.hpp"
#include <iostream>
#include <string>
#include "Handlers.hpp"

int nowWhat(int lastInput, std::string protocall)
{
	//*debug*/std::cout<<"\' lastInput= "+lastInput+" \'"<<std::endl;
	int giveBack=0;

	if (protocall=="re-ask"&&lastInput!=69)
	{
		std::cout<<std::string(100,'\n');
		std::cout<<"Please use a valid answer."<<std::endl;
		giveBack = 1;
	}
	else if (lastInput==69)
	{
		std::cout<<"2 kewl 4 kode skhool? Wanna hang with da 69er's? Lucky 7s where its at! GG 2EZ WP EZPZ. You shoot like a Mushroom! No Well Done. Long Live The Pepe Guard! Do you like Tapes and CD's, then tape this to your face and see deez nutz. No, go away you hackers. Guess what, you lost the game, LUL. SPAM SPAM SPAM SPAM SPAM SPAM SPAM SAPM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM SPAM. dn all da ruskihax.ru.net for bg win. \n";
		std::cout<<"\n\nIf your cousin is a lawyer, how old is your grandmother:";
		int GMA;
		std::cin>>GMA;
		if (GMA==36)
		{
			std::cout<<std::string(100,'\n');
			modSelector();
			std::cout<<std::string(100,'\n');
			std::cout<<"Please use a valid answer."<<std::endl;
			giveBack = 1;
		}
		else
		{
			std::cout<<std::string(100,'\n');
			std::cout<<"Please use a valid answer."<<std::endl;
			giveBack = 1;
		};

	}
	else if (protocall=="error")
	{
		std::cout<<"ERROR"<<std::endl;
		giveBack = 0;
	}
	else
	{
		std::cout<<"To use nowWhat, please validly fill in the arguments, ( std::string: What_was_your_last_input, std::string: What_to_do__either_'re-ask'_or_'error' )"<<std::endl;
	};
	return giveBack;
};


