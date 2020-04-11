int lengthofLongestSubstring(string s) {
    //a vector dict with character range from 0 to 255
    vector<int> dict(256, -1);
    int maxLen = 0, start = -1;
    //iterate through the string 
    for(int i = 0; i != s.length(); i++){
        //check to see if the current character value is greater than start character
        if(dict[s[i]] > start)
            //if yes then update start value to the character value
            start = dict[s[i]];
        //if not then update the character value to index value
        dict[s[i]] = i;
        //update maxLen to the length of longest substring so far
        maxLen = max(maxLen, i - start);
    }
    //return the longest substring after iteration is done
    return maxLen;
}
    