/*
 * Templated Class to Represent a pair of values of the same type.
 *
 * Question: In what ways is a templated class different from
 * a non-templated class?
 */

#ifndef PAIR_HDR
#define PAIR_HDR

// A Pair HAS a first value and a second value, both of type T.

template<typename T>
class Pair {
private:
   // Fixed-size array of size two stores the pair of values of type T.
   T data[2];

public:
    // Default constructor
    // Pre-condition: None. No parameters.
    // Post-condition: Initializes the pair with default values.
    Pair() {
        // Question: Why are we unable to assign default values?
        // Answer: We can't know the actual type, so we cannot give a default value.
        //         Caution - the client cannot expect specific default values.
    }

    // Constructor
    // Pre-condition: Receives two type T arguments.
    // Post-condition: Assigns the two arguments to the first and second array elements.
    Pair(T a, T b) {
        data[0] = a;
        data[1] = b;
    }
    
    // first
    // Pre-condition: None. No parameters.
    // Post-condition: Returns the value of the first element of this Pair.
    T first() const {
        return data[0];
    }

    // second
    // Pre-condition: None. No parameters.
    // Post-condition: Returns the value of the second element of this Pair.
    T second() const {
        return data[1];
    }
};

#endif
