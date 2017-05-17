#include <stdio.h>
#include <stdlib.h>

int main() {
	int valCount; 
	float min, max, sum = 0, arithMean, harmMean, variance;
	
	printf("How many values are in your dataset? ");
	scanf("%9d", valCount);
	
	//Loads values into array
	float values[valCount];
	for(int i = 0; i < valCount; i++){
		printf("\nEnter value %d: ", i);
		scanf("%f", values[i]);
	}
	
	//Calculates sum of values
	for(int i = 0; i < valCount; i++){
		sum += values[i];
	}
	
	//finds the min value
	for(int i = 0; i < valCount; i++){
		if(i == 0)
			min = values[i];
		if(value[i] < min)
			min = value[i];
	}
	
	//finds the max value
	for(int i = 0; i < valCount; i++){
		if(i == 0)
			max = values[i];
		if(value[i] > max)
			max = value[i];
	}
	
	//Calculates arithmetic mean
	arithMean = sum / valCount;
	
	//Calculates harmonic mean
	float demoninator = 0;
	for(int i = 0; i < valCount; i++){
		demoninator += (1/value[i]);
	}
	harmMean = valCount / demoninator;
	
	//Calculates the variance
	float variSum = 0;
	for(int i = 0; i < valCount; i++) {
		variSum += ((value[i] - arithMean) * (value[i] - arithMean));
	}
	variance = (variSum / (valCount - 1));
	
	//Prints and formats the data
	printf("The count of the numbers read from input is %9d\n", valCount);
	printf("The sum of these numbers is %20.10f\n", sum);
	printf("The max and the min of these numbers are %20.10f and $20.10f\n", max, min);
	printf("The arthmetic and harmonic means are %20.10f and $20.10f\n", arithMean, harmMean);
	printf("The variance is %20.10f\n", variance);
	
	
	
}