#include <iostream>

class Logger{

public:
    enum Level : int {
        levelError, levelWarning, levelInfo
    };

private:

	int myLevel = levelInfo;

public:

	void setLevel(Level level){
		myLevel = level;
		return;
	}

	void Info(const char *message){
		if (myLevel >= levelInfo)
			std::cout << "Info: " << message << std::endl;
		return;
	}

	void Warning(const char *message){
		if (myLevel >= levelWarning)
			std::cout << "Warning: " << message << std::endl;
		return;
	}

	void Error(const char *message){
		if (myLevel >= levelError)
			std::cout << "Error: " << message << std::endl;
		return;
	}

};

int main(){
	Logger log;
	log.setLevel(Logger::levelWarning);
	log.Info("Information");
	log.Warning("Warn!!");
	log.Error("Failed :(");
}
