#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "funcs.h"


char path[] = "E:\\jerryhe\\development\\c\\files\\people.dat";



struct Person {
	char name[50];
	int age;
	char location[50];
	char jobTitle[50];
};


void saveDataFile() {

	FILE *file;

	if ((file = fopen(path, "wb")) == NULL) {

		printf("%s", "Failed to open file");
		return;

	}

	struct Person p1;

	strcpy(p1.name, "Denise");
	p1.age = 21;

	fwrite(&p1, sizeof(struct Person), 1, file);
	fclose(file);

	printf("%s", "Data is saved!");

}


void readDataFile() {

	FILE *file;
	struct Person p;
	
	if ((file = fopen(path, "rb")) == NULL) {

		printf("%s", "Failed to read file!");
		return;

	}

	fread(&p, sizeof(struct Person), 1, file);
	fclose(file);

	printf("Name: %s/Age: %d\n", p.name, p.age);
	printf("%s", "Data is read.");

}


void savePersonInfo(struct Person *p) {

	FILE *file;

	if ((file = fopen(path, "wb")) == NULL) {
	
		printf("Failed to read file.");
		return;
	
	}

	fwrite(p, sizeof(struct Person), 1, file);
	fclose(file);

	printf("Data is saved!");

}


void readPersonInfo() {

	FILE *file;
	struct Person p;

	if ((file = fopen(path, "rb")) == NULL) {
	
		printf("Failed to read file.");
		return;
	
	}

	fread(&p, sizeof(struct Person), 1, file);
	fclose(file);

	printf("Data is read!\n");
	printf("Name: %s/Age: %d\n", p.name, p.age);

}


void processDataFileTest2() {

	struct Person p;
	int reply;

	printf("%s:\n", "Enter person's info");

	printf("Name: ");
	gets(p.name);

	printf("Age: ");
	scanf("%d", &(p.age));

	printf("Name: %s/Age: %d\n", p.name, p.age);
	printf("Save data?(1 - yes | 2 - no)");

	scanf("%d", &reply);
	if (reply == 1) savePersonInfo(&p); 

	reply = 0;

	printf("Read data?(1 - yes | 2 - no)");
	scanf("%d", &reply);
	if (reply == 1) readPersonInfo(); 

}


void processDataFileTest() {

	//saveDataFile();
	readDataFile();

}


void subStrTest() {

	char str[] = "This movie is very popular.";
	char subStr1[] = "movie";
	char subStr2[] = "book";

	replaceStr(str, subStr1, subStr2);

}


int main() {

	//processDataFileTest2();
	subStrTest();

	return 0;

}









