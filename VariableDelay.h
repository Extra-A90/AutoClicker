#ifndef VARIABLEDELAY_H
#define VARIABLEDELAY_H

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