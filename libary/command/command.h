#include <vector>
#include <string>


class Command_type{
public:
	virtual void func(int argc, std::string argv[argc]);
	virtual std::string get_name();
	//-1 means ANY number of args!
	virtual int get_argc(){return -1}
	static std::vector<*Command_type> Command_list; 
	Command_type(){
		Command_list.push_back(*this);
	}
};

class Clear : public Command_type{
	public:
		void func(int argc, std::string argv[argc]);
		std::string get_name();
};
