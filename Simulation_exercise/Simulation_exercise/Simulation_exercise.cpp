// IE523: Financial Computation
// "How to lose as little as possible" by Addona, Wagon and Wilf
// Written by Prof. Sreenivas
// 

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "Simulation_exercise.h"
using namespace std;

int main(int argc, char* argv[])
{
	I_have_nothing_apropos_for_this_class x;
	
	double alice_success_prob, bob_success_prob;
	double num_of_trial;

	sscanf(argv[1], "%lf", &alice_success_prob);
	sscanf(argv[2], "%lf", &bob_success_prob);

	cout << "Probability of success for Alice = " << alice_success_prob << endl;
	cout << "Probability of success for Bob = " << bob_success_prob << endl;

	x.set_probability(alice_success_prob, bob_success_prob);

	/*int optimal = x.search_result();
	if (optimal > 0)
		cout << "The optimal number of coin tosses in each game is " << optimal << endl;
	else {
		cout << "The optimal number of coin tosses in each game exceeds 100... Quitting" << endl;
	}*/
	sscanf(argv[3], "%lf", &num_of_trial);
	for (double num_of_toss = 1.0; num_of_toss <= 50.0; num_of_toss++){
		cout << x.simulated_value(num_of_toss,num_of_trial) << endl;

	}


}


