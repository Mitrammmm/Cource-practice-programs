#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

class WatchHistoryManager {
private:
    // Stores the chronological order of movies for each user
    // Key: UserID, Value: Vector of MovieIDs
    std::unordered_map<int, std::vector<int>> userChronology;

    // Stores unique movies watched by each user for O(1) lookup
    // Key: UserID, Value: Set of MovieIDs
    std::unordered_map<int, std::unordered_set<int>> userMovieSets;

public:
    // 1. Log Watch: Add a movie to a user's history
    void logWatch(int userId, int movieId) {
        userChronology[userId].push_back(movieId);
        userMovieSets[userId].insert(movieId);
    }

    // 2. Get Recent: Retrieve the last K movies (in order)
    std::vector<int> getRecent(int userId, int k) {
        std::vector<int> recentMovies;
        
        // Check if user exists
        if (userChronology.find(userId) == userChronology.end()) {
            return recentMovies;
        }

        const auto& history = userChronology[userId];
        int historySize = history.size();
        
        // Determine how many items to actually fetch (handle cases where history < K)
        int countToFetch = std::min(k, historySize);

        // Get the last 'countToFetch' elements
        for (int i = 0; i < countToFetch; ++i) {
            recentMovies.push_back(history[historySize - 1 - i]);
        }

        return recentMovies;
    }

    // 3. Find Common: Check if two users have a specific movie in common
    bool findCommon(int user1, int user2, int movieId) {
        // Check if movie exists in user1's set AND user2's set
        bool inUser1 = (userMovieSets[user1].count(movieId));
        bool inUser2 = (userMovieSets[user2].count(movieId));

        return inUser1 && inUser2;
    }
};

int main() {
    WatchHistoryManager manager;

    // Example Usage
    manager.logWatch(101, 500);
    manager.logWatch(101, 501);
    manager.logWatch(101, 502);
    manager.logWatch(102, 502);

    // Get 2 most recent for user 101
    std::vector<int> recent = manager.getRecent(101, 2); // Should return [502, 501]
    
    // Find common movie 502 between user 101 and 102
    bool common = manager.findCommon(101, 102, 502); // Returns true

    return 0;
}


// Log Watch$O(1)$Amortized constant time for vector push and hash set insertion.
// Get Recent$O(K)$Direct index access from the end of the vector.
// Find Common$O(1)$Hash table lookup for both users.


// Step-by-Step Explanation1. Choosing the Data StructuresTo meet the constraints,
//  we use two separate maps to store history in 
//  two different "views":unordered_map<int, vector<int>>: We use a vector to store the order. 
//  Adding a movie to the end of a vector is $O(1)$ (constant time).
//   This makes "Log Watch" extremely fast.unordered_map<int, unordered_set<int>>: We use a 
//   set (hash table) to store the IDs. Checking if an item exists in a hash set is $O(1)$.
//    This makes "Find Common" fast.