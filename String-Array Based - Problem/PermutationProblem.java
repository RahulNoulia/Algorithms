package com.generic.problem;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;

public class PermutationProblem {

	public static void main(String[] args) {

		// permutation of String
		String str = "abc";
		System.out.print(" Subset String :-");
		printPermutation(str, "");

		// permutation of int array
		int[] nums = new int[] { 1, 2, 3};
		System.out.println("\n\n Array Subset :- " + permute(nums));
		;
	}

	/**
	 * 
	 * @param str
	 * @param permutaion
	 */
	private static void printPermutation(String str, String permutaion) {
		if (null != str && str.length() == 0) {
			System.out.print(" " + permutaion);
			return;
		}
		for (int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);
			String leftString = str.substring(0, i);
			String rightString = str.substring(i + 1);
			printPermutation(rightString + leftString, permutaion + ch);
		}
	}

	/**
	 * 
	 * @param nums
	 * @return
	 */
	public static List<List<Integer>> permute(int[] nums) {
		HashSet<List<Integer>> ansList = new HashSet<>();
		doPermute(0, nums, ansList);
		return new ArrayList<List<Integer>>(ansList);
	}

	/**
	 * 
	 * @param index
	 * @param nums
	 * @param ansList
	 */
	private static void doPermute(int index, int[] nums, HashSet<List<Integer>> ansList) {
		int length = nums.length;
		if (index == length) {
			List<Integer> tempList = new ArrayList<>();
			for (int i = 0; i < length; i++) {
				tempList.add(nums[i]);
			}
			ansList.add(tempList);
			return;
		}
		for (int i = index; i < length; i++) {
			nums[i] = (nums[index] + nums[i]) - (nums[index] = nums[i]);
			doPermute(index + 1, nums, ansList);
			nums[i] = (nums[index] + nums[i]) - (nums[index] = nums[i]);
		}
	}
}
