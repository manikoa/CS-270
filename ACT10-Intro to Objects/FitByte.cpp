/*
 * FitByte
 *
 * Simulates a personal fitness tracker.
 * Estimates calories burned per mile walked.
 */
#include "FitByte.h"

/*
 * default constructor
 * initializes attributes distance to 0, calories to 0.
 */
FitByte::FitByte() {
    distance = 0;
    calories = 0;
}

/*
 * reset
 * post-condition: Resets attributes distance to 0, calories to 0.
 */
void FitByte::reset() {
    distance = 0;
    calories = 0;
}

/* 
 * walk
 * pre-condition: receives miles walked as a positive type float number.
 * post-condition: if miles is > 0, then increase distance by miles and
 * increase calories burned by 100 x miles. Nothing is returned.
 */
void FitByte::walk(float miles) {
    if (miles > 0) {
        distance += miles;
        calories += 100 * miles;
    }
}

/*
 * getCaloriesBurned
 * pre-condition: receives nothing.
 * return number of calories burned as a type float number.
 */
float FitByte::getCaloriesBurned() {
    return calories;
}

/*
 * getMilesWalked
 * pre-condition: receives nothing.
 * return number of total miles walked as a type float number.
 */
float FitByte::getMilesWalked() {
    return distance;
}

