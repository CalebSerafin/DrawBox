/*
 * FileHandler.hpp
 *
 *  Created on: 13 Sep 2017
 *      Author: User
 */

#ifndef FILEHANDLER_HPP_
#define FILEHANDLER_HPP_

#include <string>



//----------------File Handling----------------
bool fileTest(std::string name);
bool fileRead(std::string name, long long int line, std::string &modified);
std::string fileRead(std::string name, long long int line);
bool fileWrite(std::string name, std::string text);


#endif /* FILEHANDLER_HPP_ */
