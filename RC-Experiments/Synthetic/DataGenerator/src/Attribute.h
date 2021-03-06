#ifndef DATAGENERATOR_ATTRIBUTE_H
#define DATAGENERATOR_ATTRIBUTE_H

#include <map>
#include <vector>

using namespace std;

enum DISTRIBUTION {NORMAL = 0, UNIFORM = 1, EXPONENCIAL = 2};
enum ATTCOMPARATOR {EQUAL = 3, LOWER = 4, LEQ = 5, GREATER = 6, GEQ = 7, EUCLIDIAN = 8, LEDIT = 9};

// Imagine the following example: 
// ATT1(float, 2) EUCLIDIAN 0.25
class Attribute
{
    private:
        // ATTRIBUTES
        string name; // ATT1
        string type; // float
        int size;    // 2
        ATTCOMPARATOR attComparator; // EUCLIDIAN
        float threshold; // 0.25

        vector<DISTRIBUTION> distributions;
        vector<float> means;
        vector<float> stdDevs;

    public:
        // METHODS
        // Constructors
        Attribute(string name, string type, int size, ATTCOMPARATOR attComparator, float threshold, vector<DISTRIBUTION> distributions, vector<float> mean, vector<float> stddev);
        Attribute(string name, string type, int size);
        // Getter and setters
        int getSize();
        string getName();
        string getType();
        ATTCOMPARATOR getAttComparator();
        float getThreshold();
        DISTRIBUTION getDistributionAt(int idx);
        float getMeanAt(int idx);
        float getStdDevAt(int idx);


};


// SIMPLE METHODS
// Constructors
Attribute::Attribute(string name, string type, int size, ATTCOMPARATOR attComparator, float threshold, vector<DISTRIBUTION> distributions, vector<float> means, vector<float> stdDevs)
{
    this->name = name;
    this->type = type;
    this->size = size;
    this->attComparator = attComparator;
    this->threshold = threshold;
    this->distributions = distributions;
    this->means = means;
    this->stdDevs = stdDevs;
};

Attribute::Attribute(string name, string type, int size)
{
    this->name = name;
    this->type = type;
    this->size = size;
};

// Getters and setters
int Attribute::getSize(){ return size; }

string Attribute::getName(){ return name; }

string Attribute::getType(){ return type; }

ATTCOMPARATOR Attribute::getAttComparator(){ return attComparator; }

float Attribute::getThreshold(){ return threshold; }

DISTRIBUTION Attribute::getDistributionAt(int idx){ return distributions[idx]; }

float Attribute::getMeanAt(int idx){ return means[idx]; }

float Attribute::getStdDevAt(int idx){ return stdDevs[idx]; }

#endif 
