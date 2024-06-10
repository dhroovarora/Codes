https : // my.newtonschool.co/playground/code/2hn0a48o3no1




#include <iostream>
        using namespace std;

// Function to find the depth of a node
int findDepth(int x)
{
    int depth = 0;
    while (x > 1)
    {
        x /= 2;
        depth++;
    }
    return depth;
}

// Function to find the lowest common ancestor (LCA) and calculate the distance
int shortestPathLength(int x, int y)
{
    int depthX = findDepth(x);
    int depthY = findDepth(y);
    int distance = 0;

    // Bring both nodes to the same depth
    while (depthX > depthY)
    {
        x /= 2;
        depthX--;
        distance++;
    }
    while (depthY > depthX)
    {
        y /= 2;
        depthY--;
        distance++;
    }

    // Move both nodes up together until they meet
    while (x != y)
    {
        x /= 2;
        y /= 2;
        distance += 2;
    }

    return distance;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << shortestPathLength(x, y);
    return 0;
}