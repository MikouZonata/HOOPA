#pragma once
#include"RoleDecorator.h"

class FarmerRole : public RoleDecorator {
public:
	FarmerRole() {
		this->role = "Farmer";
	}
	~FarmerRole() {}
};