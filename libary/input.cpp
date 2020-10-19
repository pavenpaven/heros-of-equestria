#include "input.h"
#include <iostream>
#include <fstream>
#include <string>

static std::string error_list[]={
	"","command not found. type 'help' for help","run_command not working check input.cpp"
};

// runs command, returns status
static int run_command(std::string command){
	
	return 2;
}

static void print_error(int error_inctence){
	std::cout<<error_list[error_inctence]<<std::endl;
}

int promt(){
	bool is_in_loop=true;
	std::string command;
	int error;

	while (is_in_loop){
		std::cout<<">";
		std::cin>> command;
		error=run_command(command);
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
      out.append("\n");
    }
  }
  
  file.close(); 
  return out;
}
