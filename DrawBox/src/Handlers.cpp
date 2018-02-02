/*
 * Handlers.cpp
 *
 *  Created on: 11 Sep 2017
 *      Author: User
 */

#include "Handlers.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <sstream>
#include "vec2.hpp"
#include "XYGraph.hpp"
#include "Drawbox.hpp"


//----------------Public Functions----------------
double stringtoast(std::string input)
{
	double result = 0.0;
	try
	{
		result = std::stod(input);
	}
	catch (...)
	{
		result=0.0;
	};
	return result;
};

std::string toasting(double in)
{
	std::string out;
	std::stringstream convert;
	convert<<in;
	return convert.str();
};
//--------------------------------

long long int safeInputInt()
{
	std::string input="";
	double working=0;
	std::cin>>input;

	working = stringtoast(input);
	return floor(working);
};

double safeInputDouble()
{
	std::string input="";
	std::cin>>input;

	return stringtoast(input);
};

void printModOptions()
{
	std::string UItop;
	std::string UIList;
	std::vector <std::string> list(4);
	list[0] = "1.  Change Block ";
	list[1] = "2.  Change Space ";
	list[2] = "3.  Change New Line ";
	list[3] = "0.  I'm Done ";
	UItop = drawboxHeading(XYVec(0,0),"Dialog will pop up after you 'done' to modify data");
	UIList = drawboxList(XYVec(0,0),list,25);
	std::cout<<UItop;
	std::cout<<UIList;
};

std::string * modSelector()
{
	static std::string boxArgs[3] = {"nil", "nil", "nil"};
	bool done = false;
	for (;done==false;)
	{
		//----Visuals
		std::cout<<std::string(100,'\n');
		printModOptions();
		//---------
		if(boxArgs[0]=="-modBlock")
		{
			std::cout<<"Modify Block Activated"<<std::endl;
		};
		if(boxArgs[1]=="-modSpace")
		{
			std::cout<<"Modify Space Activated"<<std::endl;
		};
		if(boxArgs[2]=="-modNline")
		{
			std::cout<<"Modify New Line Activated"<<std::endl;
		};
		//----Input

		int input = safeInputInt();

		if ((input>3||input<0))
		{
			std::cout<<"Please use 1, 2, 3, or 0."<<std::endl;
		}
		else
		{
			switch (input)
			{
			case 1:
				boxArgs[0] = "-modBlock";
				break;
			case 2:
				boxArgs[1] = "-modSpace";
				break;
			case 3:
				boxArgs[2] = "-modNline";
				break;
			case 0:
				//std::cout<<"Good Bye";
				done = true;
				break;
			default:
				std::cout<<"Please use 1, 2, 3, or 0."<<std::endl;
			};
		};
	};
	std::cout<<std::string(100,'\n');
	std::string * out = boxArgs;

	return out;
};


void DrawBoxHandler()
{

	long int boxSize0, boxSize1, boxSize2, boxSize3;
		std::cout<<"Type in the size of your box in two 2D vectors(x1; y1; x2; y2)."<<std::endl;
		boxSize0 = safeInputInt();
		boxSize1 = safeInputInt();
		boxSize2 = safeInputInt();
		boxSize3 = safeInputInt();
		std::cout<<"Press any key & Enter to proceed..."<<std::endl;
		std::string enterArgs;
		std::string boxArgs[3] = {"","",""};

		std::cin>>enterArgs;
		if (enterArgs=="-mod")
		{
			 boxArgs[0] = modSelector()[0];
			 boxArgs[1] = modSelector()[1];
			 boxArgs[2] = modSelector()[2];
		};

		Vecs vecsBoxSize(boxSize0,boxSize1,boxSize2,boxSize3);
		//*Debug*/std::cout<<"Handlers.cpp Line 159"<<std::endl;
		std::cout<<drawbox(vecsBoxSize, boxArgs);


}

void XYGraphHandler()
{
	std::cout<<XYGraph()<<std::endl;
};


