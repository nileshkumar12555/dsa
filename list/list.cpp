SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);  // Create a new node
    newNode->data = data;  // Set the data for the new node
    newNode->next = NULL;  // Set the next pointer to nullptr

    // If the linked list is empty, make the new node the head
    if (head == NULL) {
        head = newNode;
    } else {
        // Traverse to the last node
        SinglyLinkedListNode* current = head;
        while (current->next != NULL) {
            current = current->next;
        }

        // Attach the new node to the last node
        current->next = newNode;
    }

    return head;
}

// Function to print the linked list
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current = head;
    while (current != NULL) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
