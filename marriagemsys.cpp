#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

#define MAX_RECORDS 100

struct Person {
    std::string name;
    std::string gender;
    int age;
    float beauty;
    float character;
    float decency;
    float education;
    float familyStatus;
};

float calculateDistance(Person a, Person b, float weights[]) {
    float distance = 0.0;
    distance += weights[0] * fabs(a.age - b.age);
    distance += weights[1] * fabs(a.beauty - b.beauty);
    distance += weights[2] * fabs(a.character - b.character);
    distance += weights[3] * fabs(a.decency - b.decency);
    distance += weights[4] * fabs(a.education - b.education);
    distance += weights[5] * fabs(a.familyStatus - b.familyStatus);
    return distance;
}

void findMatchingPartner(Person people[], int n, std::string preferredGender, float weights[]) {
    int i, j;
    float minDistance1 = 999999.0;
    float minDistance2 = 999999.0;
    int minIndex1 = -1;
    int minIndex2 = -1;
    for (i = 0; i < n; i++) {
        if (people[i].gender == preferredGender) {
            float distance = calculateDistance(people[0], people[i], weights);
            if (distance < minDistance1) {
                minDistance2 = minDistance1;
                minIndex2 = minIndex1;
                minDistance1 = distance;
                minIndex1 = i;
            } else if (distance < minDistance2) {
                minDistance2 = distance;
                minIndex2 = i;
            }
        }
    }
    std::cout << "+-------------------------------+\n";
    if (minIndex1 == -1) {
        std::cout << "| No matching partner found. |\n";
    } else {
       std::cout << "| " << std::left << "Partner 1\t" << "| " << std::left << "Partner 2\t" << "|\n";
	   std::cout << "| " << std::left << people[minIndex1].name << "\t| " << std::left << people[minIndex2].name << "\t|\n";



    }
    std::cout << "+-------------------------------+\n";
}

int main() {
    Person people[MAX_RECORDS];
    int n, i;
    std::string preferredGender;
    float weights[6];

    // Read data from file
    std::ifstream fin("sm.txt");
    if (!fin) {
        std::cout << "Error opening file.\n";
        return 1;
    }
    fin >> n;
    for (i = 0; i < n; i++) {
        fin >> people[i].name >> people[i].gender >> people[i].age >> people[i].beauty >> people[i].character >> people[i].decency >> people[i].education >> people[i].familyStatus;
    }
    fin.close();

    // Read preferred gender
    std::cout << "Enter preferred gender (male/female): ";
    std::cin >> preferredGender;

    // Read weights for each attribute
    std::cout << "Enter weights for each attribute:\n";
    std::cout << "Age: ";
    std::cin >> weights[0];
    std::cout << "Beauty: ";
	std::cin >> weights[1];
	std::cout << "Character: ";
	std::cin >> weights[2];
	std::cout << "Decency: ";
	std::cin >> weights[3];
	std::cout << "Education: ";
	std::cin >> weights[4];
	std::cout << "Family Status: ";
	std::cin >> weights[5];
	// Find matching partner
findMatchingPartner(people, n, preferredGender, weights);

return 0;
}
