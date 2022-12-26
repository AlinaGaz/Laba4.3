#include <iostream>
using namespace std;
class Weapon
{
public:
	string name;
	int damage;
	int weight;
	Weapon(string Name, int Damage, int Weight) {
		name = Name;
		damage = Damage;
		weight = Weight;
	};
	Weapon() {
		name = "Default";
		damage = 10;
		weight = 10;
	};
	~Weapon() {
		cout << "This class will be deleted!" << endl;
		cout << name << " " << damage << " " << weight << endl;
	};

	bool CheckWeight(int maxWeight) {
		if (maxWeight < weight) {
			return true;
		}
		else {
			return false;
		}
	};
	int SumWeight(Weapon* weapon) {
		return weight + weapon->weight;
	};
	int SumWeight(int _weight) {
		return weight + _weight;
	};

private:

};

int main() {
	Weapon first = Weapon("Sword", 20, 20);
	Weapon* second = new Weapon();
	cout << "Check: " << first.CheckWeight(40) << endl;
	cout << "Check: " << first.CheckWeight(10) << endl;
	cout << "Sum: " << first.SumWeight(second) << endl;
	cout << "Sum: " << first.SumWeight(10) << endl;
	delete second;

}