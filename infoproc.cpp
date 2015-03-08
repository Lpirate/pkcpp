#include<iostream>
using namespace std;

class Stu {
	private:
		char name[20], id[20];
		int  age;
		int  score[4];
	public:
		// add student
		void add() {
			cin >> name >> age >> id >> score[0] >> score[1] >> score[2] >> score[3];
		}

		// calculate the score
		double scoAve() {
		        double ave = 0;
			int i;
			for(i = 0; i < 4; i++)
				ave += score[i];
			ave = ave / 4.0;

			return ave;
		}

		// print the info
		void printinfo() {
			cout << name << "," << age << "," << id << "," << scoAve() << endl;
		}
};

int main() {
	Stu stu1;
	stu1.add();
	stu1.printinfo();

	return 0;
}

