#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_RECORDS 100

struct Person {
char name[50];
char gender[10];
int age;
float beauty;
float character;
float decency;
float education;
float familyStatus;
};

float calculateDistance(struct Person a, struct Person b, float weights[]) {
float distance = 0.0;
distance += weights[0] * fabs(a.age - b.age);
distance += weights[1] * fabs(a.beauty - b.beauty);
distance += weights[2] * fabs(a.character - b.character);
distance += weights[3] * fabs(a.decency - b.decency);
distance += weights[4] * fabs(a.education - b.education);
distance += weights[5] * fabs(a.familyStatus - b.familyStatus);
return distance;
}

void findMatchingPartner(struct Person people[], int n, char preferredGender[], float weights[]) {
int i, j;
float minDistance1 = 999999.0;
float minDistance2 = 999999.0;
int minIndex1 = -1;
int minIndex2 = -1;
for (i = 0; i < n; i++) {
if (strcmp(people[i].gender, preferredGender) == 0) {
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
printf("+-------------------------------------------------------+\n");
if (minIndex1 == -1) {
printf("| No matching partner found. |\n");
} else {
printf("| %-25s | %-25s |\n", "Partner 1", "Partner 2");
printf("| %-25s | %-25s |\n", people[minIndex1].name, people[minIndex2].name);
}
printf("+-------------------------------------------------------+\n");
}

int main() {
struct Person people[MAX_RECORDS];
int n, i;
char preferredGender[10];
float weights[6];
// Read data from file
FILE *fp;
fp = fopen("people.txt", "r");
if (fp == NULL) {
printf("Error opening file.\n");
return 1;
}
fscanf(fp, "%d", &n);
for (i = 0; i < n; i++) {
fscanf(fp, "%s %s %d %f %f %f %f %f", people[i].name, people[i].gender, &people[i].age, &people[i].beauty, &people[i].character, &people[i].decency, &people[i].education, &people[i].familyStatus);
}
fclose(fp);

// Read preferred gender
printf("Enter preferred gender (male/female): ");
scanf("%s", preferredGender);

// Read weights for each attribute
printf("Enter weights for each attribute:\n");
printf("Age: ");
scanf("%f", &weights[0]);
printf("Beauty: ");
scanf("%f", &weights[1]);
printf("Character: ");
scanf("%f", &weights[2]);
printf("Decency: ");
scanf("%f", &weights[3]);
printf("Education: ");
scanf("%f", &weights[4]);
printf("Family status: ");
scanf("%f", &weights[5]);

// Find matching partner
findMatchingPartner(people, n, preferredGender, weights);

return 0;
}



