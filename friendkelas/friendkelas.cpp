#include<iostream>
#include<string>
using namespace std;

class siswa;

class orang {
private :
	string nama;
public:
	void setNama(string pNama);
	friend class siswa;
};
class siswa {
private:
	int id;
public:
	void setId(int pID);
	void displayAll(orang& a);
};