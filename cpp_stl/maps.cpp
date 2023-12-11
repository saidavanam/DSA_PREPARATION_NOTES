#include<iostream>
#include<map>

void explain_maps()
{
    //map is a data structure where each node is key value pair.keys are unique and sorted where values can be duplicate also.

    //keys and values can be of any data types.

    /* 
    map<int,int> mpp; //keys and values are of int data type

    map<int,pair<int,int>> mpp; //key as int and values of pair data type.

    map<pair<int,int>,int> mpp; //pair as key and int as value
    */

   std::map<int,int> mpp;

   mpp[1]=2;//if key 1 exists then value will be replaced to 2 or else creates map creates one value pair with key 1 and value 2
   /*
     The reason is The difference is that this operator always constructs a new element 
     i.e even if a value is not mapped to a key, the default constructor is called and assigns a “null” or “empty” value to the key.
   */

   mpp.insert({1,3});//no effect will be there because this doesnt work for already exisiting keys.

   mpp.insert(mpp.begin(),{2,4});

   /*
      In this implementation, the hint pointer is sent with the pair to be inserted. 
      The use of a hint pointer is to help insert() know where the actual insertion has to take place.
      Hence, trying to reduce the time to allocate the pair. 
      Hint pointer does not force the insertion at a specific position.
      This function returns the pointer to the position where the pair is inserted.

      Time complexity: log(n) where n is the size of the map if the hint is optimal then O(1).
   */

    std::map<int> mpp2;

    mpp2.insert(mpp.begin(),mpp.end()); //copies all pairs from one container to other container

    //mpp2 also contains pairs same as mpp
    //Time complexity: k*log(n) where n is the size of the map, and k is no. of elements inserted.

    //USING EMPLACE

    /*
       emplace is also used to insert the pairs into the map. This function is similar to “insert()” discussed above, 
       the only difference being that the “in-place” construction of the pair takes place at the position of element insertion contrary to insert() which copies or movies existing objects. 
    */

   mpp2.emplace({3,4});

   /* Inserts pairs using an in-place construction strategy.
      Increases the size of the map by 1.RETURNS A POINTER PAIR. 1st element of which is an iterator pointing to the position of inserted pair.
      2nd returns a boolean variable indicating an already present or newly created pair.
      Time complexity: log(n) (n is the size of the map)
   */

  mpp2.emplace_hint(mpp2.end(),{4,4});

  /*
     Takes a “hint_iterator” to get a hint of the position of insertion to possibly reduce the time required to insert the pair inserted.
     This does not affect the position of insertion. It takes place where it is defined internally.
     Time complexity: log(n) (n is the size of the map), if the hint is optimal then O(1)
  */

    for(auto it:mpp2)
    {
        std::cout<<it.first<<' '<<it.second<<'\n'; //it.first refers to key and it.second refers to value of every pair.
    }

    auto it=mpp2.find(3);//Returns iterator of element 3 if found or else returns mpp2.end()

    //other functions like swap,erase,size applicable here

    auto it2=mpp2.lower_bound(1); //returns iterator of element 1 else if not found returns next greater element of 1.

    auto it3=mpp2.upper_bound(4); //returns iterator of next greater element of 4.

    //All the functions work in log(n). 
}

void explain_multi_map()
{
  //Everything same as map except the fact that multi_map can store duplicate keys also.({1,2},{1,4}...)
  //***mpp[] operator can't be used here.
}

void explain_unordered_map()
{
  //same as set and un_ordered set difference(keys are unique but not ordered)
  //Time complexity is o(1) for all tbe functions.o(n) is a very very rare possibility.
}



