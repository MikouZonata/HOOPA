#pragma once

class Assignment {
public:
	Assignment() {}
	~Assignment() {}

	virtual void setup() = 0;
	virtual void update() = 0;
	virtual void draw() = 0;
};
