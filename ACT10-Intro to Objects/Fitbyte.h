/*
 * FitByte
 *
 * Simulates a personal fitness tracker.
 * Estimates calories burned per mile walked.
 */
#ifndef FIT_BYTE_HDR
#define FIT_BYTE_HDR

class FitByte 
{
// public means that the following methods are visible outisde of 
// this FitByte class.
public:
  /*
   * default constructor
   * initializes attributes distance to 0, calories to 0.
   */


  /*
   * reset
   * post-condition: Resets attributes distance to 0, calories to 0.
   */


  /* 
   * walk
   * pre-condition: receives miles walked as a positive type float number.
   * post-condition: if miles is > 0, then increase distance by miles and
   * increase calories burned by 100.0f x miles.
   */


  /*
   * getCaloriesBurned
	 * pre-condition: receives nothing.
   * return number of calories burned as a type float number.
   */


  /*
   * getMilesWalked
	 * pre-condition: receives nothing.
   * return number of miles walked as a type float number.
   */
  float getMilesWalked() const;

// private means that the following member variables or attributes
// are visible only inside this FitByte class.

private:



};

#endif