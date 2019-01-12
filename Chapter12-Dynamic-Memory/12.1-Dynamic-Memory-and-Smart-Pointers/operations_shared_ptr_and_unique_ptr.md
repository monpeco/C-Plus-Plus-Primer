### Operations common to shared_ptr and unique_ptr

> * `shared_ptr<T> sp`    Null smart pointer that can point to objects of type T
> * `unique_ptr<T> up`    
> * `p`                   Use p as a condition; true if p points to an object
> * `*p`                  Defererence p to get teh object to which p points
> * `p->mem`              Synonym for (*p).mem
> * `p.get()`             Returns the pointer in p. Use with caution; the object
>                         to which the returned pointer points will disappear when
>                         the smart pointer deletes it
> * `swap(p, q)`          Swaps the pointers is p and q
> * `p.swap(q)`

### Operations specific to shared_ptr

> * `make_shared<T>(args)`     Returns a shared_ptr pointing to a dynamically allocated
>                              object of type T. Uses args to initialize that object
> * `shared_ptr<T>p(q)`        p is a copy of the shared_ptr q; increments the count in q.
>                              The pointer in q must be convertible to T*
> * `p = q`                    p and q are shared_ptrs holding pointers that can be converted
>                              to another. Decrements p's reference count and increments q's 
>                              count; deletes p's existing memory if p's counts goes to 0
> * `p.unique()`               Returns true if p.use_count() is one; false otherwise
> * `p.use_count()`            Returns the number of objects sharing with p; may be a slow 
>                             operation, intended primarily for debugging purposes
