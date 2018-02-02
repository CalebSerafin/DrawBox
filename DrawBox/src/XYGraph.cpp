/*
 * XYGraph.cpp
 *
 *  Created on: 18 Nov 2016
 *      Author: Caleb Serafin
 */

#include "XYGraph.hpp"
#include <string>
#include "strM.hpp"

std::string XYGraph(){
	std::string midBar = "          ┼┼          \n";
	std::string bar =    "╪═╪═╪═╪═╪═╪╪═╪═╪═╪═╪═╪\n";

	std::string image = strM(5,midBar)+bar+strM(5,midBar);

	return image;
};
