/*
 * vec2.hpp
 *
 *  Created on: 17 Oct 2016
 *      Author: Caleb Serafin
 */

#ifndef VEC2_HPP_
#define VEC2_HPP_

class Vecs
{
	public:

	long int x0, y0, x1, y1;

	Vecs(long int a, long int b, long int c, long int d)
		{

	x0 = a;
	y0 = b;
	x1 = c;
	y1 = d;
		}
};



class XYVec
{
	public:

	long int x, y;

	XYVec(long int a, long int b)
		{

	x = a;
	y = b;
		}
};

#endif /* VEC2_HPP_ */
