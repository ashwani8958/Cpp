//
//  0_Basic
//
//  Created by Ashwani on 06/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

/*
 
 1. https://www.geeksforgeeks.org/find-four-points-such-that-they-form-a-square-whose-sides-are-parallel-to-x-and-y-axes/?ref=rp
 2. https://www.geeksforgeeks.org/maximum-squares-possible-parallel-to-both-axes-from-n-distinct-points/?ref=rp
 3. https://www.geeksforgeeks.org/find-minimum-area-of-rectangle-with-given-set-of-coordinates/?ref=rp
 Problem: - Find Four points such that they form a square whose sides are parallel to x and y axes.

 Simple approach:
 Choose all possible pairs of points with four nested loops and then see if the points form a square which is parallel to principal axes. If yes then check if it is the largest square so far in terms of the area and store the result, and then display the result at the end of the program.
 Time Complexity: O(N^4)

 Efficient Approach:
 Create a nested loop for top right and bottom left corner of the square and form a square with those two points, then check if the other two points which were assumed actually exist. To check if a point exists or not, create a map and store the points in the map to reduce the time to check whether the points exist. Also, keep in check the largest square by area so far and print it in the end.
 */


//#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <set>

using namespace std;

// find the largest square
void findLargestSquare(long long int points[][2], int n)
{
    // map to store which points exist
    map<pair<long long int, long long int>, int> m;

    // mark the available points
    for (int i = 0; i < n; i++)
    {
        m[make_pair(points[i][0], points[i][1])]++;
    }
    long long int side = -1, x = -1, y = -1;

    // a nested loop to choose the opposite corners of square
    for (int i = 0; i < n; i++) {

        // remove the chosen point
        m[make_pair(points[i][0], points[i][1])]--;
        for (int j = 0; j < n; j++) {

            // remove the chosen point
            m[make_pair(points[j][0], points[j][1])]--;

            // check if the other two points exist
            if (i != j
                && (points[i][0]-points[j][0]) == (points[i][1]-points[j][1])){
                if (m[make_pair(points[i][0], points[j][1])] > 0
                    && m[make_pair(points[j][0], points[i][1])] > 0) {

                    // if the square is largest then store it
                    if (side < abs(points[i][0] - points[j][0])
                        || (side == abs(points[i][0] - points[j][0])
                            && ((points[i][0] * points[i][0]
                                + points[i][1] * points[i][1])
                                    < (x * x + y * y)))) {
                        x = points[i][0];
                        y = points[i][1];
                        side = abs(points[i][0] - points[j][0]);
                    }
                }
            }

            // add the removed point
            m[make_pair(points[j][0], points[j][1])]++;
        }

        // add the removed point
        m[make_pair(points[i][0], points[i][1])]++;
    }

    // display the largest square
    if (side != -1)
        cout << "Side of the square is : " << side
            << ", \npoints of the square are " << x << ", " << y
            << " "
            << (x + side) << ", " << y
            << " "
            << (x) << ", " << (y + side)
            << " "
            << (x + side) << ", " << (y + side) << endl;
    else
        cout << "No such square" << endl;
}

//Driver code
int main()
{
    int n = 6;

    // given points
    long long int points[n][2]
    = { { 1, 1 }, { 4, 4 }, { 3, 4 }, { 4, 3 }, { 1, 4 }, { 4, 1 } };

    // find the largest square
    findLargestSquare(points, n);

    return 0;
}

