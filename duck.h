#ifndef __DUCK_H
#define __DUCK_H

class Duck {
	virtual void quack();
	virtual void swim();
	virtual void display() = 0;
};

#endif
