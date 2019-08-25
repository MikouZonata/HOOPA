#pragma once
#include<iostream>
#include<string>
#include"Boy.h"
#include"RoleDecorator.h"

using namespace std;

namespace NSAssignmentThree {
	class Elf : public Boy {
	private:
		string name;
		RoleDecorator* role;

		void render() override {
			cout << "Elf " << name + " is a " << role->role << "!\n";
		}

	public:
		Elf(string name, RoleDecorator* role) {
			this->name = name;
			this->role = role;
		}
		~Elf() {
			delete role;
		}
	};
}
