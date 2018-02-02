/*
 * Drawbox.cpp
 *
 *  Created on: 17 Oct 2016
 *      Author: Caleb Serafin
 */

#include "Drawbox.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include "vec2.hpp"
#include "XYGraph.hpp"
#include "strM.hpp"
#include "ExecuteFrom.hpp"


std::string drawbox(Vecs Input, std::string args[3])
{
	long capX;
	long capY;
	long yOff;
	long xOff;

	if (Input.x0<Input.x1)
	{
		capX = Input.x1 - Input.x0;
		xOff = Input.x0;
	}
	else
	{
		capX = Input.x0 - Input.x1;
		xOff = Input.x0 - capX;
	};



	if (Input.y0<Input.y1)
	{
		capY = Input.y1 - Input.y0;
		yOff = Input.y0;
	}
	else
	{
		capY = Input.y0 - Input.y1;
		yOff = Input.y0 - capY;
	};
	if(args[0]==""){args[0]="NA";};
	if(args[1]==""){args[1]="NA";};
	if(args[2]==""){args[2]="NA";};

	std::string block = "ER";
	std::string nline = "\n";
	std::string space = "  ";
	std::string nBuff = "\n";
	std::string sBuff = "  ";
	if(exFromS()=="eclipse"){block = "██";} else {block = "##";};
	//

	if(( args[0]== "-modBlock" )||( args[1]== "-modBlock" )||( args[2]== "-modBlock" ))
	{
		std::cout<<"Do you want to replace a block character with :\n     1   : custom character \n  any key: don't change"<<std::endl;
		int repBlock = 0;
		std::cin>>repBlock;

		if (repBlock == 1)
		{
			std::string nBlock = "nil";
			std::cout<<"Please enter two consecutive characters to represent a block:"<<std::endl;
			std::cin>>nBlock;
			if (nBlock != "nil")
			{
				block = nBlock;
			};
		};
		std::cout<<std::string(100,'\n');
	};

	if(( args[0]== "-modSpace" )||( args[1]== "-modSpace" )||( args[2]== "-modSpace" ) )
	{
		std::cout<<"Do you want to replace a space with :\n     1   : custom character \n     2   : ██ original block character \n  any key: don't change"<<std::endl;
		int repSpace = 0;
		std::cin>>repSpace;

		if (repSpace == 1)
		{
			std::string nSpace = "nil";
			std::cout<<"Please enter two consecutive characters to represent a space:"<<std::endl;
			std::cin>>nSpace;
			if (nSpace != "nil")
			{
				space = nSpace;
			};
		}
		else if (repSpace == 2)
		{
			space = "██";
		};
		//----------
		std::cout<<"Do you want to replace a space prefix buffer with :\n     1   : custom character \n     2   : ██ original block character \n     3   : remove  \n  any key: don't change"<<std::endl;
		int repSBuff = 0;
		std::cin>>repSBuff;

		if (repSBuff == 1)
		{
			std::string nSBuff = "nil";
			std::cout<<"Please enter two consecutive characters to represent a space buffer:"<<std::endl;
			std::cin>>nSBuff;
			if (nSBuff != "nil")
			{
				sBuff = nSBuff;
			};
		}
		else if (repSBuff == 2)
		{
			sBuff = "██";
		}
		else if (repSBuff == 3)
		{
			sBuff = "";
		};
		std::cout<<std::string(100,'\n');


	};

	if(( args[0] == "-modNline" )||( args[1] == "-modNline" )||( args[2] == "-modNline" ) )
	{
		std::cout<<"Do you want to replace a newline with :\n     1   : custom character \n     2   : the 'space' character \n  any key: don't change"<<std::endl;
		int repNline = 0;
		std::cin>>repNline;

		 if (repNline == 1)
		{
			std::string newNline;
			std::cout<<"Please enter character(s) to represent a newline"<<std::endl;
			std::cin>>newNline;
			nline = newNline;
		}
		else if (repNline == 2)
		{
			nline = space;
		};
		//---------
		std::cout<<"Do you want to replace a newline prefix buffer with :\n     1   : custom character \n     2   : the 'space' character \n     3   : remove \n  any key: don't change"<<std::endl;
		int repNBuff = 0;
		std::cin>>repNBuff;

		if (repNBuff == 1)
		{
			std::string newNBuff;
			std::cout<<"Please enter character(s) to represent a newline buffer"<<std::endl;
			std::cin>>newNBuff;
			nBuff = newNBuff;
		}
		else if (repNBuff == 2)
		{
			nBuff = space;
		}
		else if (repNBuff == 3)
		{
			nBuff = "";
		};
		std::cout<<std::string(100,'\n');
		//------------------
	};

	std::string PreX = strM(xOff,sBuff);
	std::string PreY = strM(yOff,nBuff);

	std::string DaBoxX = PreX + strM(capX, block) + nline;
	std::string DaBoxY = PreX + block + strM((capX - 2), space) + block + nline;
	std::string DaBox = PreY + DaBoxX + strM((capY - 2), DaBoxY) + DaBoxX;

	return DaBox;
};








std::string drawboxHeading(XYVec offSet, std::string heading)
{
	long yOff = offSet.y;
	long xOff = offSet.x;
	xOff = sqrt(xOff*xOff); //Makes sure its positive
	yOff = sqrt(yOff*yOff); //Makes sure its positive
	//
	float headL=heading.size();
	long lenX = ceil((headL/2))+2 ;
	long lenY = 3;
	//
	if ((headL/2)!=ceil(headL/2))
	{
		heading.append(" ");
	};
	//
	std::string block = "██";
	std::string nline = "\n";
	std::string space = "  ";

	std::string PreX = strM(xOff,space);
	std::string PreY = strM(yOff,nline);

	std::string DaBoxX = PreX + strM(lenX, block) + nline;
	std::string DaBoxY = PreX + block + heading + block + nline;
	std::string DaBox = PreY + DaBoxX + strM((lenY - 2), DaBoxY) + DaBoxX;

	return DaBox;

};








std::string genYLine(std::vector <std::string> & list, int n, int width, int offSet) //Test
{
	std::string block = "██";
	std::string nline = "\n";
	std::string space = "  ";
	std::string halfs = " ";
	//
	std::string info = list[n]+strM((width-2)*2-list[n].size(),halfs);
	//
	std::string Output = strM(offSet,space) + block + info + block + nline;
	//*debug*/ std::cout<<"line 179"<<std::endl;
	//*debug*/ std::cout<<Output<<std::endl;
	return Output;
};




std::string drawboxList(XYVec offSet, const std::vector <std::string>& inlist, int LLength)
{
	std::vector <std::string> list =  inlist;
	long yOff = offSet.y;
	long xOff = offSet.x;
	xOff = sqrt(xOff*xOff); //Makes sure its positive
	yOff = sqrt(yOff*yOff); //Makes sure its positive
	//
	if (LLength==0)
	{
		int max = list.size()-1;
		int n;
		unsigned int BigL = 0;
		for (n=0;n<=max;n++)
		{
			if (list[n].size()>BigL)
			{
				BigL = (list[n].size());
			}
		};
		float tempLLength = ceil((BigL/2));
		LLength = tempLLength;
	};
	//
	int width = LLength+2;
	//
	std::string block = "██";
	std::string nline = "\n";
	std::string space = "  ";
	std::string halfs = " ";
	//
	//
	std::string PreX = strM(xOff,space);
	std::string DaBoxX = PreX + strM(width, block) + nline;
	//*debug*/ std::cout<<DaBoxX<<std::endl;
	std::string midBlock;
	unsigned int n;
	for (n=0;n<=(list.size()-1);n++)
	{
		midBlock.append(genYLine(list,n,width,xOff));
	};
	//*debug*/ std::cout<<midBlock<<std::endl;
	std::string DaBox = DaBoxX + midBlock + DaBoxX;


	return DaBox;

};




