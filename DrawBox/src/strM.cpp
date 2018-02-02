/*
 * strM.cpp
 *
 *  Created on: 18 Nov 2016
 *      Author: Caleb Serafin
 */

#include "strM.hpp"
#include <string>

std::string strM(long Ione, std::string Itwo)
{
	std::string totL = "";

	if (Ione>=1)
	{
		for(int n=0; n<Ione; n++)
		{
			totL=totL+Itwo;
		};
	};
	return(totL);
};


