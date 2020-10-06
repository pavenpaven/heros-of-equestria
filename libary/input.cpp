#include <iostream>
#include <fstream>
#include "input.h"

std::string ask(std::string quest)
{
	std::cout<<quest;

	std::string out;
	std::cin>>out;
	return out;
}

std::string load(std::string file_name){
  char str[256];

  std::ifstream file;
  file.open(file_name.c_str());     // open file

  std::string out;
  if (file.is_open()){
    std::string line;
    while (file.good()){ // loop getting single characters
      getline(file, line);
      out.append(line);
    }
  }
  
  file.close(); 
  return out;
}