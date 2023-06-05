#include "ItemHashTable.h"

// constructor - initializes table to empty.
ItemHashTable::ItemHashTable()
{
    // Default constructor of Item will initialize each bucket to an empty or invalid Item.
    for (int i = 0; i < TABLE_SIZE; i++) {
        bucket[i] = Item(-1, "undefined", 0);
    }
}

// hashFunction
// pre-condition: receives an Item id
// post-condition: returns hash function that tells us the array index position
// within the fixed-sized array into which this Item will be stored.
int ItemHashTable::hashFunction(int id) const
{
    // Compute hash function using the modulo operator
    return id % TABLE_SIZE;
}

// insert
// pre-condition: receives an Item data value that must have a positive ID value.
// post-condition: save the given Item into the hash table and return true if successful; else, false.
bool ItemHashTable::insert(const Item& V)
{
    // Check if the given Item has a valid positive (greater than zero) ID value.
    if (V.getID() <= 0)
    {
        return false;
    }

    // Call hashFunction to find array index of bucket.
    int index = hashFunction(V.getID());

    // Save the given Item into the bucket array entry.
    bucket[index] = V;

    // Return Boolean result value
    return true;
}

// isContains
// pre-condition: receives an integer ID value. The integer ID is the
// unique integer Stock Keeping Unit number for a product.
// post-condition: return true if the hash table contains an Item with
// the given ID; else, return false.
bool ItemHashTable::isContains(int id) const
{
    // Call hashFunction to find array index of bucket into
    // which an Item with the given unique id would be stored.
    int index = hashFunction(id);

    // Use this index to access the Item in the buckets array.
    Item item = bucket[index];

    // Check whether or not the Item in this bucket entry matches the given id.
    if (item.getID() == id)
    {
        return true;
    }

    // Return Boolean result
    return false;
}

// retrieve
// pre-condition: receives an integer ID value. The integer ID is the
// unique integer Stock Keeping Unit number for a product.
// post-condition: return Item matching the given ID.
// Item will contain invalid values of id -1 and name "undefined" and price of 0
// if no Item in the hash table has the given ID.
Item ItemHashTable::retrieve(int ID) const
{
    // Create default Item that has invalid ID, undefined name, and price of 0.
    Item emptyItem(-1, "undefined", 0);

    // Call hashFunction to find array index of bucket into
    // which an Item with the given unique id would be stored.
    int index = hashFunction(ID);

    // Check whether or not the Item in this bucket entry matches the given id.
    Item item = bucket[index];
    if (item.getID() == ID)
    {
        return item;
    }

    // Return the emptyItem to signal failed to retrieve.
    return emptyItem;
}
