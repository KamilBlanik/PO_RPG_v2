#if !defined(_SKILLS_H)
#define _SKILLS_H

#include "stdafx.h"
#include <string>
#include <fstream>
#include <iostream>

class Skills {
private:
	std::string name;
	std::string type;
	int value;
	int price;
	int skillLevel;
	
public:
	bool check;
	Skills();
	~Skills();
	void setName(std::string name);
	void setType(std::string type);
	void setValue(int vl);
	void setPrice(int price);
	void setSkillLevel(int lvl);
	std::string getName();
	std::string getType();
	int getValue();
	int getPrice();
	int getSkillLevel();

	friend std::ostream& operator<<(std::ostream& out, Skills * skill);
	friend Skills* operator>>(std::ifstream& in, Skills * skill);
};

#endif 
