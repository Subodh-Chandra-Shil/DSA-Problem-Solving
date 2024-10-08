import math


class Solution:
    def reverse(self, x: int) -> int:
        if x == 0:
            return 0
        countDigit = int(math.log10(abs(x))) + 1
        reversedNumber = 0

        # absolute if user inputs a negative value
        temp = abs(x)

        while temp != 0:
            lastDigit = temp % 10
            reversedNumber += lastDigit * (10**(countDigit - 1))
            temp = temp // 10
            countDigit -= 1

        return (-reversedNumber) if x < 0 else reversedNumber

    # one liner solution
    def oneLinerNumberReverse(self, x: int):
        print(int(x[::-1]))

    def reverseSolution2(self, x: int) -> int:
        reverseNumber = 0

        # absolute if user inputs a negative value
        temp = abs(x)

        while temp:
            lastDigit = temp % 10
            temp = int(temp/10)
            reverseNumber = (reverseNumber * 10) + lastDigit

        return (-reverseNumber) if x < 0 else reverseNumber


yourNumber = Solution()
# print(yourNumber.reverse(int(input())))
# yourNumber.oneLinerNumberReverse(input())
print(yourNumber.reverseSolution2(int(input())))
