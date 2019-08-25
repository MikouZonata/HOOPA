#pragma once
#include"RoleDecorator.h"

class ShamanRole : public RoleDecorator {
public:
	ShamanRole() {
		this->role = "Shaman";
	}
	~ShamanRole() {}
};