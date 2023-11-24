#include "soln.cpp"

int main()
{
	TimeMap timeMap;
	timeMap.set("foo", "bar", 1);		   // store the key "foo" and value "bar" along with timestamp = 1.
	cout << timeMap.get("foo", 1) << endl; // return "bar"
	cout << timeMap.get("foo", 3) << endl; // return "bar", since there is no value corresponding to foo at timestamp 3 and timestamp 2, then the only value is at timestamp 1 is "bar".
	timeMap.set("foo", "bar2", 4);		   // store the key "foo" and value "bar2" along with timestamp = 4.
	cout << timeMap.get("foo", 4) << endl; // return "bar2"
	cout << timeMap.get("foo", 5) << endl; // return "bar2"
	return 0;
}