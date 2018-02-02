/*
 * ExecuteFrom.cpp
 *
 *  Created on: 31 Jan 2018
 *      Author: User
 */

#include "ExecuteFrom.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include "FileHandler.hpp"
#include "Handlers.hpp"

std::string exFrom()
{
	std::string whatIs = "I don't know.";
	for(int retry=1;retry==1;)
	{
		retry=0;
		std::string output;
		//*/Debug/*/ whatIs = "eclipse";
		if(fileRead("../config/config.txt",1,output))
		{
			whatIs = "console";
		}
		else if(fileRead("config/config.txt",1,output))
		{
			whatIs = "eclipse";
		}
		else
		{
			std::cout<<"Error config.txt not found in config folder!"<<std::endl;
			std::cout<<"Try reinstalling or setting up"<<std::endl;
			std::cout<<" 1 : Set Up\nany: Exit"<<std::endl;
			if(safeInputInt()==1)
			{
				std::cout<<"In the subfolder folder of 'DrawBox' called config, create an empty file named config.txt then proceed."<<std::endl;
				std::cout<<" 1 : Re-scan\nany: Exit"<<std::endl;
				if(safeInputInt()==1){retry=1;}else{retry=0;};
			}
			else
			{
				retry=0;
			};
		};
	};
	return whatIs;
};

std::string exFromS()
{
	std::string output;
	std::string whatIs = "I don't know.";
	//*/Debug/*/ whatIs = "eclipse";
	if(fileRead("../config/config.txt",1,output))
	{
		whatIs = "console";
	}
	else if(fileRead("config/config.txt",1,output))
	{
		whatIs = "eclipse";
	}
	return whatIs;
};
