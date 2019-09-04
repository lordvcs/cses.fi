#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
  map<char, int> char_map;
  string input;
  getline(cin, input);
  char previous = 0;
  int previous_total = 0;
  for (char c : input)
  {
    if (previous == c)
    {
      previous_total++;
    }
    else
    {
      previous_total = 1;
    }
    if (char_map[c] < previous_total)
    {
      char_map[c] = previous_total;
    }
    previous = c;
  }
  auto x = max_element(char_map.begin(), char_map.end(), [](const pair<char, int> &p1, const pair<char, int> &p2) {
    return p1.second < p2.second;
  });
  cout << x->second;
}
