/*
 * Global.cpp
 *
 *  Created on: 22 Sep 2017
 *      Author: User
 */

#include "Global.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "S_Var.hpp"
#include "FileHandler.hpp"
#include "Handlers.hpp"

std::vector<sbv> GBList;
std::vector<siv> GIList;
std::vector<sfv> GFList;
std::vector<ssv> GSList;
std::vector<svspv> GVSPList;

bool gglInitialise()
{
	const std::string configLoc = "config/global.cfg";

	//if (fileTest(configLoc)==false)
	//{
		fileWrite(configLoc,"GBLMax: \n8\nGILMax: \n8\nGFLMax: \n4\nGSLMax: \n4\nGVSPLMax: \n2");
	//};

	const short int GBLMax = stringtoast(fileRead(configLoc,2));
	const short int GILMax = stringtoast(fileRead(configLoc,4));
	const short int GFLMax = stringtoast(fileRead(configLoc,6));
	const short int GSLMax = stringtoast(fileRead(configLoc,8));
	const short int GVSPLMax = stringtoast(fileRead(configLoc,10));

	GBList[GBLMax];
	GIList[GILMax];
	GFList[GFLMax];
	GSList[GSLMax];
	GVSPList[GVSPLMax];

	GBList[0] = sbv("NULL", false);
	GIList[0] = siv("NULL", 0);
	GFList[0] = sfv("NULL", 0.0);
	GSList[0] = ssv("NULL", "NULL");
	GVSPList[0] = svspv("NULL", NULL);

	if((GBList[0]==sbv("NULL", false))&&(GIList[0]==siv("NULL", 0))&&(GFList[0]==sfv("NULL", 0.0))&&(GSList[0]==ssv("NULL", "NULL"))&&(GVSPList[0]==svspv("NULL", NULL)))
	{
		return true;
	}
	else
	{
		return false;
	};
};

template <class arg1, class arg2>
void ggl(std::string type, std::string mode, arg1, arg2)
{
	switch(type)
	{
	default:
		std::cerr<<"[Warning] Exception: ggl invalid type: "<<mode<<std::endl;
		return;
	break;

	case "bool":

	break;

	case "int":

	break;

	case "float":

	break;

	case "string":

	break;

	case "vector<string>*":

	break;
	};

};

