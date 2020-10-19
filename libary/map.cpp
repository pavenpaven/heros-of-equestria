#include <random>
#include <iostream>
#include "map.h"

Map_node::Map_node(){
	int rando=(rand()%4);
	contence=rando;
}

void Map_node::generate(int renderdist){
	int ammount=(rand()%3)+1;
  	if(maps.size()==0){
	for (int i=0;i<ammount;i++){
		maps.push_back(Map_node());
	}
  	}
  if (renderdist>1){
    for(int i=0;i<maps.size();i++){
       maps[i].generate(renderdist-1);
    }
  }
}

int Map_node::get_contence(){
  return contence;
}

void Map_node::print(int level){
	std::string inte;

	for (int i=0;i<level;i++){
		inte.append("-");
	}
	std::cout<<inte<<contence<<std::endl;
	for (int i=0;i<maps.size();i++){
		maps[i].print(level+1);
	}
}

