string reverseWord(string str){
    string reversedStr;
    for(int i=str.length()-1;i>=0;i--)
    {
        reversedStr.push_back(str[i]);
    }
    return reversedStr;
}
