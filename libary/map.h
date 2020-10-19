#ifndef MAP_H
#define MAP_H

#include <vector>

//std::string tile_characters[4]={"K","C","S","T"};

class Map_node{
public:
  Map_node();
  std::vector<Map_node> maps;
  void generate(int renderdist);
  int get_contence();
  void print(int level);
private:
  int contence;
};

#endif //MAP_H
