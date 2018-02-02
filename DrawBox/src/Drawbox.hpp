/*
 * Drawbox.hpp
 *
 *  Created on: 11 Sep 2017
 *      Author: User
 */

#ifndef DRAWBOX_HPP_
#define DRAWBOX_HPP_

#include <string>
#include <vector>
#include "vec2.hpp"

std::string drawbox(Vecs Input, std::string args[3]);

std::string drawboxHeading(XYVec offSet,std::string heading);
std::string drawboxList(XYVec offSet, const std::vector <std::string>& inlist, int LLength);

#endif /* DRAWBOX_HPP_ */
