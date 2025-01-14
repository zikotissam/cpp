#include <vector>
#include <queue>
#include <set>
#include <utility>
using namespace std;

struct State {
    vector<vector<char>> map;
    int points;
    vector<pair<int, int>> path;
    set<pair<int, int>> visited;
    
    State(const vector<vector<char>>& m, int p) : map(m), points(p) {}
};

struct Result {
    vector<pair<int, int>> bestPath;
    int maxPoints;
    
    Result() : maxPoints(0) {}
};

// Direction arrays for moving in 4 directions
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};

bool isValid(const vector<vector<char>>& map, int x, int y) {
    return x >= 0 && x < map.size() && y >= 0 && y < map[0].size() && map[x][y] != '1';
}

Result findBestExpansionPath(vector<vector<char>>& map) {
    Result result;
    pair<int, int> start;
    
    // Find starting position 'M'
    for (int i = 0; i < map.size(); i++) {
        for (int j = 0; j < map[0].size(); j++) {
            if (map[i][j] == 'M') {
                start = {i, j};
                break;
            }
        }
    }
    
    // Queue for BFS
    queue<State> q;
    State initial(map, 0);
    initial.visited.insert(start);
    initial.path.push_back(start);
    q.push(initial);
    
    while (!q.empty()) {
        State current = q.front();
        q.pop();
        
        // If this path is better than our current best, update result
        if (current.points > result.maxPoints) {
            result.maxPoints = current.points;
            result.bestPath = current.path;
        }
        
        // Try expanding in all four directions
        for (int dir = 0; dir < 4; dir++) {
            int newX = current.path.back().first + dx[dir];
            int newY = current.path.back().second + dy[dir];
            
            if (!isValid(current.map, newX, newY)) continue;
            if (current.visited.count({newX, newY})) continue;
            
            // Create new state
            State newState = current;
            newState.path.push_back({newX, newY});
            newState.visited.insert({newX, newY});
            
            // Calculate points for this move
            if (current.map[newX][newY] == 'A') {
                newState.points += 3;  // Collecting points
            }
            newState.points -= 1;  // Cost of expansion
            
            // Only continue if we have positive points
            if (newState.points >= 0) {
                newState.map[newX][newY] = 'm';  // Mark as expanded
                q.push(newState);
            }
        }
    }
    
    return result;
}

// Helper function to print the path
void printPath(const vector<vector<char>>& map, const vector<pair<int, int>>& path) {
    vector<vector<char>> display = map;
    for (const auto& pos : path) {
        if (display[pos.first][pos.second] != 'M') {
            display[pos.first][pos.second] = 'm';
        }
    }
    
    for (const auto& row : display) {
        for (char c : row) {
            cout << c << ' ';
        }
        cout << endl;
    }
}

// Example usage
int main() {
    vector<vector<char>> map = {
        {'1', '0', 'A', '0', '1'},
        {'0', 'M', '0', '0', '0'},
        {'0', '0', 'A', '1', '0'},
        {'1', '0', '0', '0', 'A'},
        {'0', '1', '0', '1', '0'}
    };
    
    Result result = findBestExpansionPath(map);
    cout << "Maximum points: " << result.maxPoints << endl;
    cout << "Path visualization:" << endl;
    printPath(map, result.bestPath);
    
    return 0;
}