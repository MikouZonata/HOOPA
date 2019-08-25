#pragma once

class NPC {
public:
	NPC() {}

	const virtual void render() = 0;

	~NPC() {}
};
