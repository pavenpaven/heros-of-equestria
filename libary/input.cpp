#include <iostream>
#include <fstream>
#include <string>
#include "input.h"

static std::string error_list[]={
	"","command not found. type 'help' for help","run_command not working check input.cpp"
};

// runs command, returns status
static int run_command(){
	return 2;
}

static void print_error(int error_inctence){
	std::cout<<error_list[error_inctence];
}

int promt(){
	bool is_in_loop=true;
	std::string command_character;
	int error;

	while (is_in_loop){
		std::cout<<">";
		std::cin>> command_character;
		error=run_command();
		print_error(error);
		
	}

	return 0;
}

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
