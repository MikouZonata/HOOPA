#pragma once
#include<iostream>
#include<string>
#include"NPC.h"
#include"RoleDecorator.h"

using namespace std;

namespace NSAssignmentThree {
	class Elf : public NPC {
	private:
		const string name;
		const RoleDecorator role;

	public:
		Elf(const string& name, const RoleDecorator& role) : name(name), role(role) {}
		~Elf() {}

		const void render() override {
			cout << "Elf " << name + " is a " << role.role << "!\n";
		}

	};
}
