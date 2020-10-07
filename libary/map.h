#ifndef MAP_H
#define MAP_H

#include <vector>


class Map_node{
public:
	std::vector<Map_node> maps;
  void generate(int renderdist);
  int get_contence();
  void print();
private:
  char contence;
};

#endif //MAP_H
