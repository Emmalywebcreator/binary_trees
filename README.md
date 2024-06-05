Binary Tree Project
	
Overview
This project involves the implementation and testing of a Binary Tree data structure in C. A Binary Tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child. This implementation supports common binary tree operations such as insertion, deletion, searching, traversal, and more.
	
Features
>	Insertion: Add a node to the tree while maintaining the binary tree properties.
>	Deletion: Remove a node from the tree and reorganize to preserve the tree structure.
>	Searching: Find a node with a specific value.
Traversal:
>	In-order
>	Pre-order
>	Post-order

Level-order
>	Height Calculation: Determine the height of the tree.
>	Balancing: Optional feature for balancing the tree.
>	Getting Started

Prerequisites
Ensure you have the following installed:

GCC (GNU Compiler Collection)
A code editor (e.g., VSCode, vim, emacs etc)

Installation
Clone the repository:

	git clone https://github.com/yourusername/binary-tree-project.git
	cd binary-tree-project

Building the Project
To build the project, compile the source files using GCC:

bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node

Running the Project
To run the project, execute the compiled binary:

bash
./0-node

Usage
Below is a basic example of how to use the Binary Tree functions in C:


#include <stdio.h>
#include "binary_tree.h"

int main() {
    // Initialize the binary tree
    BinaryTree *bt = create_binary_tree();

    // Insert nodes
    insert(bt, 10);
    insert(bt, 5);
    insert(bt, 15);

    // Search for a node
    Node *node = search(bt, 10);
    if (node) {
        printf("Node found: %d\n", node->value);
    } else {
        printf("Node not found\n");
    }

    // Traverse the tree
    printf("In-order traversal:\n");
    in_order_traversal(bt->root);

    // Delete a node
    delete(bt, 10);

    // Check the height of the tree
    printf("Height of the tree: %d\n", height(bt->root));

    // Clean up
    free_binary_tree(bt);

    return 0;
}
Contributing
Contributions are welcome! Please follow these steps:

Fork the repository.
Create a new branch (git checkout -b feature/your-feature-name).
Commit your changes (git commit -m 'Add some feature').
Push to the branch (git push origin feature/your-feature-name).
Open a pull request.
License
This project is licensed under the Alx License. See the LICENSE file for details.

Acknowledgments
Inspiration and resources from Alx_swe programme and various data structure and algorithm courses.

Community contributions.
For any questions or issues, please open an issue in the GitHub repository.

Authors:
Emmanuel Ohwoka <emmyprime2015@gmail.com>
