#include <iostream>
#include "vec3.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
	vec3<float> vector1 = { 1, 2, 3 };

	vec3<float> vector2 = {  };

	vec3<float> vector3 = { 8 };

	//print all vectors
	cout << " \n vector 1 = [ " << vector1.x << " , " << vector1.y << " , " <<vector1.z << " ] " << endl;
	cout << " vector 2 = [ " << vector2.x << " , " << vector2.y << " , " << vector2.z << " ] " << endl;
	cout << " vector 3 = [ " << vector3.x << " , " << vector3.y << " , " << vector3.z << " ] \n  " << endl;
	
	if (vector2.IsZero()) {

		cout << " Vector 2 members are all equal to 0 "<< endl;
	}
	else cout << " vector 2 = [ " << vector2.x << " , " << vector2.y << " , " << vector2.z << " ] " << endl;

	if (vector1.IsZero()) {

		cout << " Vector 1 members are all equal to 0 " << endl;
	}
	else cout << " Vector 1 isn't 0, it's = [ " << vector1.x << " , " << vector1.y << " , " << vector1.z << " ] " << endl;

	if (vector3.IsZero()) {

		cout << " Vector 2 members are all equal to 0";
	}
	else cout << " Vector 3 isn't 0, it's = [ " << vector3.x << " , " << vector3.y << " , " << vector3.z << " ] " << endl;

	if (vector1 == vector3) {

		cout << "\n Vector 1 equals Vector 2. \n ";
	}
	else cout << "\n Vector 1 and Vector 2 are not equal. \n ";

	float dist = vector1.DistanceTo(vector3);
	cout << "\n Distance between Vector 1 and Vector 3 is " << dist << endl;

	vector3 = vector2 + vector1;
	cout << "\n Vector 3 equals to sum of vectors 2 and 1  [ " << vector3.x << " , " << vector3.y << " , " << vector3.z << " ] " << endl;

	vector1.Normalize();
	cout<<"\n Normalise Vector 1 = [ " << vector1.x << ", " << vector1.y << ", " << vector1.z << " ] " << endl;

	system("pause");

	return 0;
}