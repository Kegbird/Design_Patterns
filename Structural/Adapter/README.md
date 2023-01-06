# Adapter pattern

The adapter pattern can be used when:

- You want to use an existing class, but its interface does not match the one you need.
- You need a reusable class that deal with unrelated classes.
- You cannot implement an interface in all subclasses of a base class.

In this example there are two classes: Person and PoliceMan. For unknown reasons, PoliceMan cannot implement the interface Greet; to overcome this limitation, there are two ways: ObjectAdapter or ClassAdapter. They are basically two wrappers that allows to integrate the interface, without touching the PoliceMan class.


