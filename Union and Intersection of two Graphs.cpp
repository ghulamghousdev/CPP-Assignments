// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find union of two graphs
void find_union(
	vector<tuple<string, int, int> > G1,
	vector<tuple<string, int, int> > G2)
{
	// Stores an edge of the graph G1
	map<string, pair<int, int> > added;

	// Stores the unioun graph G1
	vector<tuple<string, int, int> > G;

	// Iterate over the edges
	// of the graph G1
	for (auto p : G1) {

		string a = get<0>(p);

		// Get the edges
		int b = get<1>(p);
		int c = get<2>(p);

		// Insert the current
		// edges into graph G
		G.push_back(
			make_tuple(a, b, c));
		added[a] = { b, c };
	}

	// Iterate over the edges
	// of the graph G1
	for (auto p : G2) {

		string a = get<0>(p);
		int b = get<1>(p);
		int c = get<2>(p);

		pair<int, int> x = { b, c };
		pair<int, int> y = { c, b };

		// If either edge x or
		// y is already added
		if (added[a] == x || added[a] == y)
			continue;

		// Otherwise
		G.push_back(make_tuple(a, b, c));
	}

	// Print the unioun
	cout << "G1 union G2 is\n";

	for (auto p : G) {

		string a = get<0>(p);
		int b = get<1>(p);
		int c = get<2>(p);
		cout << a << " " << b << " "
			<< c << endl;
	}
}

// Function to find intersection of two graphs
void find_intersection(
	vector<tuple<string, int, int> > G1,
	vector<tuple<string, int, int> > G2)
{
	// Stores an edge
	map<string, pair<int, int> > added;

	// Stores the graph of intersection
	vector<tuple<string, int, int> > G;

	// Iterate over edges of graph G1
	for (auto p : G1) {
		string a = get<0>(p);
		int b = get<1>(p);
		int c = get<2>(p);

		added[a] = { b, c };
	}

	// Iterate over edges of graph G2
	for (auto p : G2) {

		string a = get<0>(p);
		int b = get<1>(p);
		int c = get<2>(p);

		pair<int, int> x = { b, c };
		pair<int, int> y = { c, b };

		// If either edge x or
		// y is already added
		if (added[a] == x || added[a] == y)
			G.push_back(make_tuple(a, b, c));
	}

	// Print the graph G
	cout << "G1 intersection G2 is\n";

	for (auto p : G) {

		string a = get<0>(p);
		int b = get<1>(p);
		int c = get<2>(p);

		cout << a << " " << b
			<< " " << c << endl;
	}
}

// Driver Code
int main()
{
	vector<tuple<string, int, int> > G1
		= { make_tuple("e1", 1, 2),
			make_tuple("e2", 1, 3),
			make_tuple("e3", 3, 4),
			make_tuple("e4", 2, 4) };

	vector<tuple<string, int, int> > G2
		= { make_tuple("e4", 2, 4),
			make_tuple("e5", 2, 5),
			make_tuple("e6", 4, 5) };

	// Function call for finding the
	// Union of the given graph
	find_union(G1, G2);

	// Function call for finding the
	// Intersection of the given graph
	find_intersection(G1, G2);

	return 0;
}
