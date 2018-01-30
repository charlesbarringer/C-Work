	#include <iostream>
	#include <string>
	#include <fstream>

	using namespace std;

	const int NUMBER_OF_QUESTIONS = 20;
	const int NUMBER_OF_STUDENTS = 10;

	void readFile(ifstream& inFile);
	void markTest(char studentAnswers[][NUMBER_OF_QUESTIONS], string studentIDs[], char correctAnswers[]);
	char assignGrade(int score);


	int main()
	{

		string studentIDs[NUMBER_OF_STUDENTS];
		char correctAnswers[NUMBER_OF_QUESTIONS];
		char studentAnswers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS];
		ifstream inFile;

		readFile(inFile);

		// Read the correct answers as required
			for (int i = 0; i <= NUMBER_OF_QUESTIONS; i++){
			correctAnswers[i] = inFile.get();
			cout << correctAnswers[i];

	}

		// Read each students ID and answers
			for (int i = 0; i <= NUMBER_OF_STUDENTS; i++) {
			inFile >> studentIDs[i]; // Grab the student IDs
			inFile.get(); // Discard the space between the student ID and the answers
			for (int j = 0; j <= NUMBER_OF_QUESTIONS; j++)
				studentAnswers[i][j] = inFile.get(); // Grab the students answers

	}

		markTest(studentAnswers, studentIDs, correctAnswers);


		return 0;
		}

	void markTest(char studentAnswers[][NUMBER_OF_QUESTIONS], string studentIDs[], char correctAnswers[]) {

		for (int x = 0; x < NUMBER_OF_QUESTIONS; x++) {
			cout << correctAnswers[x]; // This prints the incorrect values for half the c-string

	}
		cout << endl;

		for (int i = 0; i < NUMBER_OF_STUDENTS; i++) {
			int score = 0;
			for (int j = 0; j < NUMBER_OF_QUESTIONS; j++) {
				if (studentAnswers[i][j] == correctAnswers[j]){
				a.score += 2; // Correct answer

			}
				else if (studentAnswers[i][j] != correctAnswers[j] && studentAnswers[i][j] != ' '){
				a.score -= 1; // Incorrect answer but not a blank

			}

				cout << "Correct Answer: " << static_cast<char>(correctAnswers[j]) << " Student Answer: " << studentAnswers[i][j] << endl;

		}
			if (score < 0)
				score = 0; // Don't allow for minus scores

			cout << studentIDs[i] << " score = " << score << endl;

	}
	50.
}

51.	char assignGrade(int score) {
	52.	if (score == 0)
		53.	return 'F';


	54.
}

55.	void readFile(ifstream& inFile) {
	56.	inFile.open("/Users/mark/Code/cpp/Malik Book/Chapter 9/ch9ex6.txt");
	57.	if (!inFile){
		58.	cout << "There was an error opening the input file" << endl;
		59.	exit(1);
		60.
	}
	61.
}
