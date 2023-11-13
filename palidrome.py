class Solution(object):
    def isPalindrome(self, x):
        temp = x
        while (temp >0):
            num2 = temp%10
            num3 = temp/10
            num4 = temp%100
            print(num2, num3, num4)
            value = (num2*num2) + (num3*num3) + (num4*num4)
            if (x == value):
                return True
            else:
                return False

x = int(input("Enter the number :"))
obj = Solution()
obj.isPalindrome(x)
