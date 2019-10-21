//
// Created by maffey on 21.10.2019.
//

#ifndef SANDBOX_TREE_H
#define SANDBOX_TREE_H


class Tree {
private:
    bool has_roots{};
    int branches{};
    bool has_leaves{};
    float tree_height{};
    float trunk_diameter{};

public:
    Tree(bool hasRoots = true, int branches = 0, bool hasLeaves = true);

    Tree(bool hasRoots = true, int branches = 0, bool hasLeaves = true, float tree_height = 10,
         float trunk_diameter = 1);

    bool isHasRoots() const;

    void setHasRoots(bool hasRoots);

    int getBranches() const;

    void setBranches(int branches);

    bool isHasLeaves() const;

    void setHasLeaves(bool hasLeaves);

    float getTreeHeight() const;

    void setTreeHeight(float treeHeight);

    float getTrunkDiameter() const;

    void setTrunkDiameter(float trunkDiameter);
};


#endif //SANDBOX_TREE_H
