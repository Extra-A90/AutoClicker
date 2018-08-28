#include "VariableDelay.h"
#include <cstdlib>

VariableDelay::VariableDelay() {
	delay = 1000;
	delta = 0;
}

VariableDelay::VariableDelay(int delay, int delta) {
	this->delay = delay;
	this->delta = delta;
}

VariableDelay::~VariableDelay() {
	
}

int VariableDelay::getSleepTime() {
	int error = rand();
	error %= (delta / 2);

	int sign = rand();
	sign %= 2;

	if (sign == 1) {
		return delay + error;
	}

	return delay - error;
}

int VariableDelay::getDelay() {
	return delay;
}

void VariableDelay::setDelay(int delay) {
	this->delay = delay;
}

int VariableDelay::getDelta() {
	return delta;
}

void VariableDelay::setDelta(int delta) {
	this->delta = delta;
}