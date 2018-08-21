#ifndef VariableDelay_h
#define VariableDelay_h

class VariableDelay {

private:
	//All time values are represented in milliseconds
	int delay;
	int delta;

public:
	VariableDelay();
	VariableDelay(int delay, int delta);
	~VariableDelay();

	int getSleepTime();

	int getDelay();
	void setDelay(int delay);

	int getDelta();
	void setDelta(int delta);

};

#endif