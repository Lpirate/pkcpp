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
			char info[100];
			cin >> info;
			int dou[6];
			int i, j = 0;
			// find ','
			for(i = 0; i < 100; i++) {
				if(info[i] == ',')
					dou[j++] = i;
			}
			// name
			strncpy(name, info, dou[0]);	
			name[dou[0]] = '\0';
			// age
			char cage[3];
			strncpy(cage, info + dou[0] + 1, dou[1] - dou[0] - 1);
			age = atoi(cage);
			// id
			strncpy(id, info + dou[1] + 1, dou[2] - dou[1] - 1);
			id[dou[2] - dou[1]] = '\0';
			// score
			char cscore[10];
			strncpy(cscore, info + dou[2] + 1, dou[3] - dou[2] - 1);
			score[0] = atoi(cscore);
			strncpy(cscore, info + dou[3] + 1, dou[4] - dou[3] - 1);
			score[1] = atoi(cscore);
			strncpy(cscore, info + dou[4] + 1, dou[5] - dou[4] - 1);
			score[2] = atoi(cscore);
			strncpy(cscore, info + dou[5] + 1, strlen(info) - dou[5] - 1);
			score[3] = atoi(cscore);
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

