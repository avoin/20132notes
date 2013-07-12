#include <vector>
#include <string>
#include <list>
#include <iostream>

int main()
   {
   std::vector<int> vint;

   vint.push_back(1);
   vint.push_back(6);

   vint.pop_back();

   for(auto i = 1; i < 100; i++)
      vint.push_back(i);

   for(auto i = vint.begin(), end = vint.end(); i < end; i++)
      std::cout << *i << "\n";

   std::cout << vint[32] << "\n";

   vint.erase(vint.begin() + 3);


   std::list<int> flist;

   flist.push_back(1);
   flist.push_back(6);

   flist.pop_back();

   for(auto i = 1; i < 100; i++)
      flist.push_back(i);

   /* can't use less than
   for(auto i = flist.begin(), end = flist.end(); i < end; i++)
      std::cout << *i << "\n";
   */
   for(auto i = flist.begin(), end = flist.end(); i != end; i++)
      std::cout << *i << "\n";

   /* Can't use index operator
   std::cout << flist[32] << "\n";
   */
   auto it = flist.begin();
   for(auto i = 0; i < 32; i++, it++);
   std::cout << *it << "\n";

   /* Can't add indices to list iterators
   flist.erase(flist.begin() + 3);
   */

   it = flist.begin();
   it++, it++, it++;
   flist.erase(it);

   std::string st;

   st = "This is a test";

   std::cout << st << " has " << st.size() << " characters and works much like an std::vector as well...\n";

   int finish;
   std::cin >> finish;

   }