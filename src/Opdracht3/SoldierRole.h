#pragma once
#include"RoleDecorator.h"

class SoldierRole : public RoleDecorator {
private:

public:
	SoldierRole() {
		this->role = "Soldier";
	}
	~SoldierRole() {}
};