#pragma once
#define DUNGEON_W 160
#define DUNGEON_H 96

class dungeon {
public:
	dungeon();
	~dungeon();
private:
	void generate();
}
