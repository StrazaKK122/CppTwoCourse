//
// Created by maffey on 21.10.2019.
//

#include "Tree.h"

Tree::Tree(bool hasRoots, int branches, bool hasLeaves) {
    Tree::has_roots = hasRoots;
    Tree::branches = branches;
    Tree::has_leaves = hasLeaves;
}

Tree::Tree(bool hasRoots, int branches, bool hasLeaves, float treeHeight, float trunkDiameter) {
    Tree::has_roots = hasRoots;
    Tree::branches = branches;
    Tree::has_leaves = hasLeaves;
    Tree::tree_height = treeHeight;
    Tree::trunk_diameter = trunkDiameter;

}

bool Tree::isHasRoots() const {
    return has_roots;
}

void Tree::setHasRoots(bool hasRoots) {
    has_roots = hasRoots;
}

int Tree::getBranches() const {
    return branches;
}

void Tree::setBranches(int branches) {
    if (branches >= 0) {
        Tree::branches = branches;
    }
}

bool Tree::isHasLeaves() const {
    return has_leaves;
}

void Tree::setHasLeaves(bool hasLeaves) {
    has_leaves = hasLeaves;
}

float Tree::getTreeHeight() const {
    return tree_height;
}

void Tree::setTreeHeight(float treeHeight) {
    if (treeHeight > 0) {
        tree_height = treeHeight;
    }
}

float Tree::getTrunkDiameter() const {
    return trunk_diameter;
}

void Tree::setTrunkDiameter(float trunkDiameter) {
    if (trunkDiameter > 0) {
        trunk_diameter = trunkDiameter;
    }
}
