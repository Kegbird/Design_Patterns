# Composite pattern

Composite pattern can be useful when there is a hierarchy of parts in your problem, each one that can be used indipendently from the others.

In this example, the hierarchy is structured with 3 classes: House, Room and Furniture, all subclasses of HouseElement.
Each instance of HouseElement can contains other HouseElement.
The operation shared by all HouseElements is cleaning: calling it from the top of the hierarchy (the house) will propagate the call to all its children rooms and furnitures.
This is another key point of this pattern: the propagation of tasks to all elements of the hierarchy.