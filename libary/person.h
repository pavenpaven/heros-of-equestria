#ifndef PERSON_H
#define PERSON_H

enum{
	FIRE,
	WATER,
	ELECTRICITY,
	AIR,
	NUM
};

struct Attack{
	int damage;
	float type[NUM];
};

struct Move{
	
};

class Entety{
public:
	int health;
	int max_health;
	float defence;
	void calcu_damage(Attack attack);
	Attack creat_attack();
protected:
	virtual Attack specific_attack();
	virtual int specific_damage(Attack attack);
};

#endif //PERSON_H
