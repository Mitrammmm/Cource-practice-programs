// 💼 DSA Context :
// This question looks like a basic subset selection, but it forces you to compare the sum of chosen elements with the max of the unchosen ones, which traps most people into incorrect greedy reasoning.

// Follow-ups push the candidate into subset-sum DP, counting, weighted counting, and product-DP — all in one go.

//  Many candidates underestimated the constraints and wrote brute force or sorting tricks — instant WA/TLE.

// 🧩 Problem (short)
// You are given an array a of size n.
// Pick any subset S of indices.
//  Let T be all indices not chosen.
// A subset S is special if:

// For every j in T:
//  sum(S) ≥ a[j]
// You must count how many such subsets exist.

// 🔥 Follow-up 1
// Find the sum of sums of all special subsets.

// 🔥 Follow-up 2
// Find the sum of products of all special subsets (mod 1e9+7).