//Jacob Johnson
//jejohnson8@dmacc.edu
//10/23/17

#include <iostream>
using namespace std;


// function prototypes
void getJudgeData(double &);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

//main will output result
int main()
{
	double score1;
	double score2;
	double score3;
	double score4;
	double score5;
	
	getJudgeData(score1);
	getJudgeData(score2);
	getJudgeData(score3);
	getJudgeData(score4);
	getJudgeData(score5);
	
	cout << "\nThe contestant’s score is ";
	cout << calcScore(score1, score2, score3, score4, score5);
	cout << endl;
	
	return 0;
}

//get data from the five judges
void getJudgeData(double &score)
{
	do
	{
		cout << "Enter judge's score: ";
		if (score < 0 || score > 10.0){
			cout << "Error! Score must be at least 0 and no higher than 10."
		}	
	}while (score >= 0 && score <= 10);		
}

// calculate score
void calcScore(double score1, double score2, double score3, double score4, double score5)
{
	int high;
	int low;
	double 	avg;
	
	high = findHighest(score1, score2, score3, score4, score5);
	low = findLowest(score1, score2, score3, score4, score5);
	
	if (high == static_cast<int>(score1))
	{
		if (low == static_cast<int>(score2))
			avg = (score3 + score4 + score5)/3;
		else if (low == static_cast<int>(score3))
			avg = (score2 + score4 + score5)/3;
		else if (low == static_cast<int>(score4))
			avg = (score3 + score2 + score5)/3;
		else 
			avg = (score2 + score3 + score4)/3;
	}
	else if (high == static_cast<int>(score2))
	{
		if (low == static_cast<int>(score1))
			avg = (score3 + score4 + score5)/3;
		else if (low == static_cast<int>(score3))
			avg = (score1 + score4 + score5)/3;
		else if (low == static_cast<int>(score4))
			avg = (score3 + score1 + score5)/3;
		else
			avg = (score1 + score3 + score4)/3;
	}
	else if (high == static_cast<int>(score3))
	{
		if (low == static_cast<int>(score2))
			avg = (score1 + score4 + score5)/3;
		else if (low == static_cast<int>(score1))
			avg = (score2 + score4 + score5)/3;
		else if (low == static_cast<int>(score4))
			avg = (score1 + score2 + score5)/3;
		else
			avg = (score2 + score1 + score4)/3;
	}
	else if (high == static_cast<int>(score4))
	{
		if (low == static_cast<int>(score2))
			avg = (score3 + score1 + score5)/3;
		else if (low == static_cast<int>(score3))
			avg = (score2 + score1 + score5)/3;
		else if (low == static_cast<int>(score1))
			avg = (score3 + score2 + score5)/3;
		else
			avg = (score2 + score3 + score1)/3;
	}
	else
	{
		if (low == static_cast<int>(score2))
			avg = (score3 + score4 + score1)/3;
		else if (low == static_cast<int>(score3))
			avg = (score2 + score4 + score1)/3;
		else if (low == static_cast<int>(score4))
			avg = (score3 + score2 + score1)/3;
		else
			avg = (score2 + score3 + score4)/3;
	}
	return avg;
}
// find the highest score
int findHighest(double score1, double score2, double score3, double score4, double score5)
{
	if (score1 > score2 && score1 > score3 && score1 > score4 && score1 > score5)
		return score1;
	else if (score2 > score1 && score2 > score3 && score2 > score4 && score2 > score5)
		return score2;
	else if (score3 > score2 && score3 > score1 && score3 > score4 && score3 > score5)
		return score3;
	else if (score4 > score2 && score4 > score3 && score4 > score1 && score4 > score5)
		return score4;
	else
		return score5;
}
// find the lowerst score
int findLowest(double score1, double score2, double score3, double score4, double score5)
{
	if (score1 < score2 && score1 < score3 && score1 < score4 && score1 < score5)
		return score1;
	else if (score2 < score1 && score2 < score3 && score2 < score4 && score2 < score5)
		return score2;
	else if (score3 < score2 && score3 < score1 && score3 < score4 && score3 < score5)
		return score3;
	else if (score4 < score2 && score4 < score3 && score4 < score1 && score4 < score5)
		return score4;
	else
		return score5;
}


