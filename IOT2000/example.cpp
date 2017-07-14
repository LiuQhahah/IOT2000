#include <iostream>
using namespace std;
#include "mraa.hpp"

#include <fstream>
#include <unistd.h>
#include <sstream>
using namespace mraa;


int main(void) {

	while(true){
	for(int i=0;i<4;i++){
	string filename = "/etc/setledcolor.py ";

	//int 转为string
	stringstream sout;
	string s;
	sout<<i;
	s = sout.str();
	filename += s;

	string command = "python ";
	command += filename;
	system(command.c_str());

	sleep(1);
	}
	}
	/*
	cout << "Hello IOT2000." << endl;
	 Gpio* d_pin = NULL;
	d_pin = new mraa::Gpio(13, true, false);
	d_pin->dir(mraa::DIR_OUT);

	for (;;) {
			d_pin->write(1);
			sleep(1);
			d_pin->write(0);
			sleep(1);
	}
	*/
	//export the pin 63 (USER button)
	/*
			ofstream outfile;
			outfile.open("/sys/class/gpio/export");
			outfile << "63";//左移位运算符
			outfile.close();

			string buffer;
			while(true)
			{
				//read out the status of the USER Button
				ifstream infile;
				infile.open("/sys/class/gpio/gpio63/value");
				infile >> buffer;//右移
				infile.close();

				//display the status in the console
				cout<<buffer<<endl;
				sleep(1);
			}
			*/
	return 0;
}

