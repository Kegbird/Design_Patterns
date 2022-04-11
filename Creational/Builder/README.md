# Builder

Builder pattern can be used when:

- The objects you have to build have way too many parameters.
- When you would like to provide different configurations for objects of the same class.
- When you want to limit the control over the construction phase.
- When you have many checks on the parameters given by the client.

In the example, the builder class provide an interface with which you can create objects of Person type, but with different parameters; for instance, an object of class person which represent a ninja has high speed and strength, while a nerd is smart but weak.
