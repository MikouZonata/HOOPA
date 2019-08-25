#pragma once
#include<iostream>
#include<string>
#include "Boy.h"
#include"RoleDecorator.h"

using namespace std;

namespace NSAssignmentThree {
	class Orc : public Boy {
	private:
		string name;
		RoleDecorator role;

		void render() override {
			cout << "Orc " << name + " is a " << role.role << "!\n";
		}

	public:
		Orc(string name, RoleDecorator role) {
			this->name = name;
			this->role = role;
		}
		~Orc() {}

	};
}
