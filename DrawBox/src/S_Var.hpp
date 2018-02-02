/*
 * S_Var.hpp
 *
 *  Created on: 24 Sep 2017
 *      Author: User
 *  	NOT COMPATITABLE WITH STVar.hpp, SBVar.hpp, SIVar.hpp.
 */

#ifndef S_VAR_HPP_
#ifndef SBVAR_HPP_
#ifndef SIVAR_HPP_
#ifndef SFVAR_HPP_
#ifndef SSVAR_HPP_
#ifndef SVSPVAR_HPP_

#define SSVAR_HPP_




class s_v
{
public:

	std::string n;

	template <class varType> friend class stv;
	friend class sbv;
	friend class siv;
	friend class sfv;
	friend class ssv;
	friend class svspv;


};



template <class varType> class stv : s_v
{
#include <string>
public:

	varType v;

	stv(std::string name, varType value)
	{
		n = name;
		v = value;
	};

	bool operator==(stv num) const
	{
		return (n==num.n)&&(v==num.v) ? true : false;
	};

};

class sbv : public s_v
{
public:

	bool v;

	sbv(std::string name, bool value)
	{
		n = name;
		v = value;
	};

	bool operator==(sbv num) const
	{
		return (this->n==num.n)&&(this->v==num.v) ? true : false;
	};

};
;

class siv : s_v
{
public:

	int v;

	siv(std::string name, int value)
	{
		n = name;
		v = value;
	};

	bool operator==(siv num) const
	{
		return (this->n==num.n)&&(this->v==num.v) ? true : false;
	};

};



class sfv : s_v
{
public:

	float v;

	sfv(std::string name, float value)
	{
		n = name;
		v = value;
	};

	bool operator==(sfv num) const
	{
		return (n==num.n)&&(v==num.v) ? true : false;
	};
};

class ssv : s_v
{
public:

	std::string v;

	ssv(std::string name, std::string value)
	{
		n = name;
		v = value;
	};

	bool operator==(ssv num) const
	{
		return (n==num.n)&&(v==num.v) ? true : false;
	};
};

class svspv : s_v
{
public:

	std::vector <std::string>* v;

	svspv(std::string name, std::vector<std::string>* value)
	{
		n = name;
		v = value;
	};

	bool operator==(svspv num) const
	{
		return (n==num.n)&&(v==num.v) ? true : false;
	};
};

#endif /* SVSPVAR_HPP_ */
#endif /* SSVAR_HPP_ */
#endif /* SFVAR_HPP_ */
#endif /* SIVAR_HPP_ */
#endif /* SBVAR_HPP_ */
#endif /* S_VAR_HPP_ */
