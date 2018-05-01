#include "stdafx.h"
#include "Skills.h"

Skills::Skills() {
	name = "Nieznany";
	type = "Nieznany";
	value = 0;
	price = 0;
	skillLevel = 0;
	check = false;
}

Skills::~Skills() {
	name = "Nieznany";
	type = "Nieznany";
	value = 0;
	price = 0;
	skillLevel = 0;
	check = false;
}

void Skills::setName(std::string name) {
	this->name = name;
}

void Skills::setType(std::string type) {
	this->type = type;
}

void Skills::setValue(int val) {
	this->value = val;
}

void Skills::setPrice(int price) {
	this->price = price;
}

void Skills::setSkillLevel(int lvl) {
	this->skillLevel = lvl;
}

std::string Skills::getName() {
	return name;
}

std::string Skills::getType() {
	return type;
}

int Skills::getValue() {
	return value;
}

int Skills::getPrice() {
	return price;
}

int Skills::getSkillLevel() {
	return skillLevel;
}

std::ostream& operator<<(std::ostream& out, Skills * skill) {
	out <<"\n"<< skill->getName() << "\n";
	out << skill->getPrice() << "\n";
	out << skill->getSkillLevel() << "\n";
	out << skill->getType() << "\n";
	out << skill->getValue();
	return out;
}

Skills* operator>>(std::ifstream& in, Skills * skill) {
	std::string line;
	std::getline(in, line);
	if (line == "***") {
		skill->check = true;
		return skill;
	}
	else {
		skill->setName(line);
		std::getline(in, line);
		skill->setPrice(stoi(line));
		std::getline(in, line);
		skill->setSkillLevel(stoi(line));
		std::getline(in, line);
		skill->setType(line);
		std::getline(in, line);
		skill->setValue(stoi(line));
		return skill;
	}
	
}