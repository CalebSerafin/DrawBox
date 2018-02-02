/*
 * SBVar.hpp
 *
 *  Created on: 23 Sep 2017
 *      Author: User
 */

#ifndef SBVAR_HPP_
#ifndef S_VAR_HPP_
#define SBVAR_HPP_



class sbv
{
public:

	std::string s;
	bool b;

	sbv(std::string text, bool value)
	{
		s = text;
		b = value;
	}

};



#endif /* SBVAR_HPP_ */
