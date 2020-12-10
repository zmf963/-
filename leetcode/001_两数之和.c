/*
 * @Version: 0.1
 * @Autor: zmf96
 * @Email: zmf96@qq.com
 * @Date: 2020-12-02 10:26:02
 * @LastEditors: zmf96
 * @LastEditTime: 2020-12-02 10:32:38
 * @FilePath: \leetcode\001_两数之和.c
 * @Description: 
 */

// 给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。

// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
// 示例:

// 给定 nums = [2, 7, 11, 15], target = 9

// 因为 nums[0] + nums[1] = 2 + 7 = 9
// 所以返回 [0, 1]

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/two-sum

int hash(int key, int mod)
{
    int re = key % mod;
    if (re < 0)
        re = re + mod;
    return re;
}
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *ret = (int *)malloc(2 * sizeof(int));
    int mod = numsSize * 2 - 1;
    int *hashtable = (int *)malloc(mod * sizeof(int));
    int *tag = (int *)malloc(mod * sizeof(int));
    int i, j, index, t;
    for (i = 0; i < mod; i++)
        tag[i] = 0;

    for (i = 0; i < numsSize; i++)
    {
        t = target - nums[i];
        index = hash(t, mod);
        while (tag[index] == 1)
        {
            if (hashtable[index] == t)
            {
                for (j = 0; nums[j] != t; j++)
                    ;
                ret[0] = j;
                ret[1] = i;
                *returnSize = 2;
                free(hashtable);
                free(tag);
                return ret;
            }
            index = (index + 1) % mod;
        }

        index = hash(nums[i], mod);
        while (tag[index] == 1)
            index = (index + 1) % mod;
        hashtable[index] = nums[i];
        tag[index] = 1;
    }
    *returnSize = 0;
    free(hashtable);
    free(tag);
    return ret;
}