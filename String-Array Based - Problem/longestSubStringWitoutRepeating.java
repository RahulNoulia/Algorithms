import java.util.HashSet;
import java.util.Set;

/*
 Questing Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Given a string s, find the length of the longest substring without repeating characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

Example 4:

Input: s = ""
Output: 0

 

Constraints:

    0 <= s.length <= 5 * 104
    s consists of English letters, digits, symbols and spaces.


 */
public class longestSubStringWitoutRepeating {

	public int lengthOfLongestSubstring(String s) {
		if (null == s || s.isEmpty()) {
			return 0;
		}
		int len = s.length(), lenghtOfSubString = 0, j = 0, i = 0;
		if (len == 1) {
			return 1;
		}
		Set<Character> uniqueSet = new HashSet<>();
		while (i < len) {
			if (uniqueSet.add(s.charAt(i))) {
				i++;
				lenghtOfSubString = Math.max(lenghtOfSubString, uniqueSet.size());
			} else {
				uniqueSet.remove(s.charAt(j));
				j++;
			}
		}
		return lenghtOfSubString;
	}
}
