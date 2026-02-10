// 📘 Problem: Vehicle Entry Tracking System

// You are designing a backend system for a parking management / toll booth service.

// The system needs to track vehicle entries efficiently while preserving the order of entry based on time.

// Each vehicle is identified by a unique vehicle number, and every entry has a timestamp.

// 🔧 Functional Requirements

// You must support the following operations:

// 1️⃣ Log Entry

// When a vehicle enters the premises, record:

// Vehicle Number (unique ID)

// Timestamp of entry

// ⚠️ If the same vehicle enters again, do not duplicate the vehicle entry.
// Instead, update its timestamp to the latest one.

// 2️⃣ Get Recent Entries

// Retrieve the last K vehicles that entered the premises,

// Sorted by most recent timestamp

// Fast response is critical (this operation is called very frequently)

// 3️⃣ Check Vehicle Entry

// Check whether a specific vehicle has already entered the premises.

// ⚠️ Technical Constraints

// The system should remain fast as the number of vehicles grows.

// Re-sorting the entire data on every query is not allowed.

// Insert and lookup operations should be close to O(1).

// Order of vehicles must be maintained by timestamp.

#include <iostream>
#include <list>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

struct VehicleRecord {
    string vehicleId;
    long long timestamp;
};

class VehicleEntrySystem {
private:
    // List maintains the chronological order (Front = Most Recent)
    list<VehicleRecord> entryList;

    // Map stores the 'Bookmark' (iterator) for each vehicle for O(1) access
    unordered_map<string, list<VehicleRecord>::iterator> entryMap;      // m individually VehRecord b le skta hu!!

public:
    // 1. Log Entry: Records or updates a vehicle's entry
    void logEntry(string vehicleId, long long timestamp) {
        // If vehicle already exists, we 'pluck' it out of its old spot in O(1)
        if (entryMap.find(vehicleId) != entryMap.end()) {
            entryList.erase(entryMap[vehicleId]);
        }

        // Add the new record to the very front of the list
        entryList.push_front({vehicleId, timestamp});
        
        // Update the map to point to the new front position
        entryMap[vehicleId] = entryList.begin();
    }

    // 2. Get Recent Entries: Returns the last K entries
    vector<VehicleRecord> getRecent(int k) {
        vector<VehicleRecord> recent;
        auto it = entryList.begin();
        
        // Only loop K times—efficiency doesn't drop as the list grows
        for (int i = 0; i < k && it != entryList.end(); ++i) {
            recent.push_back(*it);
            ++it;
        }
        return recent;
    }

    // 3. Check Vehicle Entry: Quick existence check
    bool checkEntry(string vehicleId) {
        return entryMap.find(vehicleId) != entryMap.end();
    }
};

int main() {
    VehicleEntrySystem system;
    
    system.logEntry("KA-01-1234", 1707310000);
    system.logEntry("MH-12-5678", 1707310500);
    system.logEntry("KA-01-1234", 1707311000); // Re-entry: moves to front

    cout << "Is MH-12-5678 inside? " << (system.checkEntry("MH-12-5678") ? "Yes" : "No") << endl;
    
    return 0;
}