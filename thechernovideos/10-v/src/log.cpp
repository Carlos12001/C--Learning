#include <iostream>

void Log(const char *message){
	std::cout << message << std::endl;
	return;
}

void InitLog(){
	Log("Initializing Log");
	return;
}
