#include "soln.hpp"

int Solution::numIslands(vector<vector<char>> &grid)
{
	// queue<pair<int,int>> current_island{pair<int,int>{0,0}};
	int islands = 0;
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[0].size(); j++)
		{
			// found land
			if (grid[i][j] == '1')
			{
				islands++;
				grid[i][j] = '0';
				queue<pair<int, int>> adjs;
				adjs.push({i, j});
				while (!adjs.empty())
				{
					pair<int, int> adj = adjs.front();
					adjs.pop();
					if (adj.first + 1 < grid.size() && grid[adj.first + 1][adj.second] == '1')
					{
						grid[adj.first + 1][adj.second] = '0';
						adjs.push({adj.first + 1, adj.second});
					}
					if (adj.first > 0 && grid[adj.first - 1][adj.second] == '1')
					{
						grid[adj.first - 1][adj.second] = '0';
						adjs.push({adj.first - 1, adj.second});
					}
					if (adj.second + 1 < grid[0].size() && grid[adj.first][adj.second + 1] == '1')
					{
						grid[adj.first][adj.second + 1] = '0';
						adjs.push({adj.first, adj.second + 1});
					}
					if (adj.second > 0 && grid[adj.first][adj.second - 1] == '1')
					{
						grid[adj.first][adj.second - 1] = '0';
						adjs.push({adj.first, adj.second - 1});
					}
				}
			}
		}
	}
	return islands;
}

bool Solution::test(vector<vector<char>> &grid, int answer)
{
	return numIslands(grid) == answer;
}
