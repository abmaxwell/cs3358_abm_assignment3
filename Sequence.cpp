// FILE: Sequence.cpp
// CLASS IMPLEMENTED: sequence (see sequence.h for documentation)
// INVARIANT for the sequence ADT:
//   1. The number of items in the sequence is in the member variable
//      used;
//   2. The actual items of the sequence are stored in a partially
//      filled array. The array is a dynamic array, pointed to by
//      the member variable data. For an empty sequence, we do not
//      care what is stored in any of data; for a non-empty sequence
//      the items in the sequence are stored in data[0] through
//      data[used-1], and we don't care what's in the rest of data.
//   3. The size of the dynamic array is in the member variable
//      capacity.
//   4. The index of the current item is in the member variable
//      current_index. If there is no valid current item, then
//      current_index will be set to the same number as used.
//      NOTE: Setting current_index to be the same as used to
//            indicate "no current item exists" is a good choice
//            for at least the following reasons:
//            (a) For a non-empty sequence, used is non-zero and
//                a current_index equal to used indexes an element
//                that is (just) outside the valid range. This
//                gives us a simple and useful way to indicate
//                whether the sequence has a current item or not:
//                a current_index in the valid range indicates
//                that there's a current item, and a current_index
//                outside the valid range indicates otherwise.
//            (b) The rule remains applicable for an empty sequence,
//                where used is zero: there can't be any current
//                item in an empty sequence, so we set current_index
//                to zero (= used), which is (sort of just) outside
//                the valid range (no index is valid in this case).
//            (c) It simplifies the logic for implementing the
//                advance function: when the precondition is met
//                (sequence has a current item), simply incrementing
//                the current_index takes care of fulfilling the
//                postcondition for the function for both of the two
//                possible scenarios (current item is and is not the
//                last item in the sequence).

#include <cassert>
#include "Sequence.h"
#include <iostream>
using namespace std;

namespace CS3358_FA2017
{
   // CONSTRUCTORS and DESTRUCTOR
   sequence::sequence(size_type initial_capacity) : used(0), current_index(0)
           , capacity(initial_capacity)
   {
       // Check initial_capacity validity per pre-condition
       // requirements for function stub listed in Sequence.h
       if(initial_capacity <= 0){capacity = 1;}

       // Create new dynamic sequence array.
       data = new value_type[capacity];
   }

   sequence::sequence(const sequence& source) :
           used(source.used), current_index(source.current_index),
           capacity(source.capacity)
   {
       // Create new dynamic array for this data pointer.
       data = new value_type[capacity];

       // Copy data from source to this data.
       for (int index = 0; index < used; ++index) {
           data[index] = source.data[index];
       }

   }
   sequence::~sequence()
   {
       // Free up dynamic memory and point to 0.
       delete [] data;
       data = NULL;
   }

   // MODIFICATION MEMBER FUNCTIONS
   void sequence::resize(size_type new_capacity)
   {
      cout << "resize(size_type new_capacity) not implemented yet" << endl;
   }

   void sequence::start()
   {
      cout << "start() not implemented yet" << endl;
   }

   void sequence::advance()
   {
      cout << "advance() not implemented yet" << endl;
   }

   void sequence::insert(const value_type& entry)
   {
      cout << "insert(const value_type& entry) not implemented yet" << endl;
   }

   void sequence::attach(const value_type& entry)
   {
      cout << "attach(const value_type& entry) not implemented yet" << endl;
   }

   void sequence::remove_current()
   {
      cout << "remove_current() not implemented yet" << endl;
   }

   sequence& sequence::operator=(const sequence& source)
   {
       // Self-assignment fail safe. Check for self-assignment.
       // If self-assignment is present then return invoking object.
       if (this == &source)
           return *this;

       // Create temporary dynamic array to safely assign contents
       // of array.
       value_type *temp_data = new value_type[source.capacity];

       // Moved contents of rhs array to temp
       for (int index = 0; index < source.used; ++index) {
           temp_data[index] = source.data[index];
       }

       // Deallocate old dynamic array.
       delete [] data;

       // Start assigning member variables from rhs.
       data = temp_data;
       capacity = source.capacity;
       used = source.used;

       return *this;
   }

   // CONSTANT MEMBER FUNCTIONS
   sequence::size_type sequence::size() const
   {
      cout << "size() not implemented yet" << endl;
      return 0; // dummy value returned
   }

   bool sequence::is_item() const
   {
      cout << "is_item() not implemented yet" << endl;
      return false; // dummy value returned
   }

   sequence::value_type sequence::current() const
   {
      cout << "current() not implemented yet" << endl;
      return value_type(); // dummy value returned
   }
}

