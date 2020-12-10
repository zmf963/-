#!/usr/bin/env python
# coding=utf-8

'''
Version: 0.1
Autor: zmf96
Email: zmf96@qq.com
Date: 2020-12-02 10:24:28
LastEditors: zmf96
LastEditTime: 2020-12-02 10:24:48
FilePath: \leetcode\001_两数之和.py
Description: 给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/two-sum
'''

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        _dict = {}
        for i in range(len(nums)):
            a = target - nums[i]
            if a in _dict:
                return _dict[a], i 
            else:
                _dict[nums[i]] = i