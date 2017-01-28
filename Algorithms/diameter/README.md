# Tree Diameter (4 points)

## Instructions
Given a binary tree, efficiently determine the diameter of the tree.

The diameter is defined as the greatest distance between two nodes.

Complete the function `calcDiameter`. The function should return the diameter of the input tree. 

Assume the tree structure has the following syntax (you may change this structure to fit the language you are using):

```
Node {
	Node left;
	Node right;
}
```

`calcDiameter` should follow this function prototype:

```
int calcDiameter(Node node);
```

Use one of the following languages (C/C++, Python, Java). Template code is provided in C. Please include a file that compiles your code.

## Example
Consider the following tree:

```
     o   
   /   \   
  o     o   
 / \     \   
o   o     o
```

The diameter of this tree would be 4.
