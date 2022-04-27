#pragma once
#include <iostream>
#include <string>
using namespace std;

class Epilogue {
public:
	void Badending() {
		cout << "You chickened out when everyone needed you, Hope you are proud";
		exit(0);
	}

	void Goodending() {
		cout << "You won the war and managed to get out alive, you live out the rest of you're life proud of what you have done and never regretting what you did.";
		exit(0);
	}

	void Tragicending() {
		cout << "You won the war but at a high cost, but every from now on will know what the Hero that saved us from extinction";
		exit(0);
	}
}; 
