/*
 * FileHandler.cpp
 *
 *  Created on: 13 Sep 2017
 *      Author: User
 */

#include "FileHandler.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

//----------------Public Functions----------------


//----------------File Handling----------------

bool fileTest(std::string name)
{
	std::ifstream file (name);
	if (file.is_open())
	{
		file.close();
		return true;
	}
	else
	{
		//*debug*/std::cout<<"---!!!---"+name+" failed to open to Test---!!!---"<<std::endl;
		file.close();
		return false;
	};
};

bool fileRead(std::string name, long long int line, std::string& modified)
{
	bool success = false;
	std::string outLine = "nil";
	std::ifstream file (name);
	if (file.is_open())
	{
		int n;
		for (n=0;n<line;n++)
		{
			getline(file,outLine);
			//std::cout<<outLine<<std::endl;
		};
		modified = outLine;
		success = true;
	}
	else
	{
		//*debug*/std::cout<<"---!!!---"+name+" failed to open to Read---!!!---"<<std::endl;
		success = false;
	};
	return success;
};

std::string fileRead(std::string name, long long int line)
{
	std::string outLine = "nil";
	std::ifstream file (name);
	if (file.is_open())
	{
		int n;
		for (n=0;n<line;n++)
		{
			getline(file,outLine);
			//std::cout<<outLine<<std::endl;
		};
		file.close();
	}
	else
	{
		/*debug*/std::cout<<"---!!!---"+name+" failed to open to Read---!!!---"<<std::endl;
		file.close();
	};
	return outLine;
};

bool fileWrite(std::string name, std::string text)	//use ofstream.seekp
{
	bool success = false;
	std::ofstream file (name);
	if (file.is_open())
	{
		file<<text;
		file.close();
		success = true;
		/*debug*/std::cout<<"---!!!---"+name+" Writing---!!!---"<<std::endl;
	}
	else
	{
		/*debug*/std::cout<<"---!!!---"+name+" failed to open to Write---!!!---"<<std::endl;
		success = false;
	};
	return success;
};
