# Facade pattern

The chain of responsability pattern comes handy in processes that handles a request, which must be checked/processed
multiple times (perhaps with a different logic, depending by the request itself).
Each element of the chain can:

- Take care of the request
- Ask to the successor of the chain, whenever it can handle the request

In this silly example, the chain is composed by three elements: waiter, chef and pastry chef.
The waiter can handles drinks and wine orders, the chef can prepare meal and appetizer, while the pastry chef only desserts.
