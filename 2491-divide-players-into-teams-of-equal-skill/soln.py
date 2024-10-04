
class Solution:
    # pretty elementary approach
    # in-place sort, so nlogn time, 1 space
    def dividePlayers(self, skill: list[int]) -> int:
        skill.sort()
        sl = len(skill)
        total_chem = 0
        avg_team_skill = -1
        for i in range((sl // 2) - 1, -1, -1):
            team_skill = skill[i] + skill[sl - i - 1]
            team_chem = skill[i] * skill[sl - i - 1]
            if avg_team_skill == -1:
                avg_team_skill = team_skill
            elif team_skill != avg_team_skill:
                return -1
            total_chem += team_chem
        return total_chem
	# could go for a hashmap/dict approach