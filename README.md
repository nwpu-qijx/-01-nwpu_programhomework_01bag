# -01-nwpu_programhomework_01bag
Hello,everyone!
This project is aimming at sharing my progress in programming as a student majoring in computer science
For the first project, I'd like to share an algorithm problem —— 01bag, The illustration of the problem is as follows.

From the name 01bag, 0 and 1 stand for whether a item will be put in or not.For a bag of a certain volume and for every item, we will get its value and the volume of item.What we should realize is to calculate the method we can get the maximum of the value and also the sum of all items we put in bag is no more than the volume of bag.

So,it's clear that one thought we can use is,for each item to be selected,there are only 2 possibilities —— putting in bag or not, which is the typical thought of backtrace.
However,when it comes to coding,personally I prefer some style use clear thoughts to replace the recursion.
According to this thought,I'd like to use dynamic programming(dp).
Here is the core of the thought.
For each item,we consider the temporary volume of bag range from 1 to max volume.
If it can be put in temporarily.
    This is possibility A :
    1. we put it in: temporary value is (the value of this item) + [the value of (max volume - the volume of item)]
    or
    2. we keep still,which means our temporary volume has grown 1, but value didn't change.

If it can't be puut in temporarily.
    This is possibility B :
    just inherit the value above,to a degree, like the 2 of possibility A.

That's all about the solving thought.
