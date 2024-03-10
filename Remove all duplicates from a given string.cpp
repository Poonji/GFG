class Solution{
public:
	string removeDuplicates(string str) {
	     std::string result = "";
    std::unordered_set<char> seenChars;

    for (char c : str) {
        if (seenChars.insert(c).second) { // second is a boolean which will give true of c is present in seenchar and give false otherwise
            result += c;
        }
    }

    return result;
	}
};
