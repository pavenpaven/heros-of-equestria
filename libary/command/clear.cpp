#include "command.h"
#include "system"

void Clear::func(int argc, std::string argv[argc]){
		system("clear");
}

std::string Clear::get_name(){
	return "clear";
}
