class Solution:
    def canArrange(self, arr: list[int], k: int) -> bool:
        # DEBUG = False
        # dbg_print = lambda *x: print(f"[DEBUG] {x}") if DEBUG else print("", end="")

        # # brute force, TLE
        # result = []
        # for num in arr:
        #     found_pair = False
        #     for existing in result:
        #         if (num+existing) % k == 0:
        #             found_pair = True
        #             result.remove(existing)
        #             break
        #     if not found_pair:
        #         result.append(num)

        # return not len(result) > 0

        # idea: sum of remainders will be divisible too
        rems = [x % k for x in arr]
        # dbg_print("rems", rems)
        zeros = 0
        for rem in rems:
            if rem == 0:
                zeros += 1
        if zeros % 2:
            return False
        rems[:] = [x for x in rems if x]
        # dbg_print("rems without zeros", rems)

        result = {}
        for rem in rems:
            if k - rem in result.keys() and result[k - rem] > 0:
                result[k - rem] -= 1
                # dbg_print("pop", k-rem)
            else:
                result[rem] = result.get(rem, 0) + 1
                # dbg_print("insert", rem)
        for x in result.keys():
            if result[x]:
                return False

        return True


if __name__ == "__main__":
    soln = Solution()
    print(soln.canArrange([1, 2, 3, 4, 5, 10, 6, 7, 8, 9], 5))
