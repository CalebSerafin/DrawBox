/*
 * SuperHeader.cpp
 *
 *  Created on: 11 Sep 2017
 *      Author: User
 */

#include "SuperHandler.hpp"
#include <iostream>
#include <string>
#include "Handlers.hpp"
#include "UnexpectedHandle.hpp"
#include "ExecuteFrom.hpp"

void SuperHandler()
{
	for(int retry=1;retry==1;)
	{
		retry=0;
		std::string output=exFrom();
		std::string whatIs="I don't Know";
		if(retry==0)
		{
			if(output=="eclipse")
			{
				whatIs = "Eclipse C++";
			}
			else if(output=="console")
			{
				whatIs = "Console";
			}

			//*Debug*/std::cout<<whatIs<<std::endl;


			retry=0;
			std::cout<<"Would you like to use: \n1	Drawbox \n2	XYGraph "<<std::endl;
			int choice;
			std::cin>>choice;
			if(choice==1)
			{
				DrawBoxHandler();
			}
			else if(choice==2)
			{
				XYGraphHandler();
			}
			else
			{
				std::string protocall = "error";
				retry = nowWhat(choice,protocall);
			};
		};
	};
};


