#pragma once
#include<iostream>
#include<string>
#include "NPC.h"
#include"RoleDecorator.h"

using namespace std;

namespace NSAssignmentThree {
	class Orc : public NPC {
	private:
		const string name;
		const RoleDecorator role;

	public:
		Orc(const string& name, const RoleDecorator& role) : name(name), role(role) {}
		~Orc() {}

		const void render() override {
			cout << "Orc " << name + " is a " << role.role << "!\n";
		}

	};
}
