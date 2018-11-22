## Part 1

Let S = it is sunny; C = camping is fun; H = the homework is done; M = mathematics is easy.
1.)(M->H)^(S->C)
```
If Mathematics is easy then the homework is done and If it is sunny then camping is fun.
```

2.)“Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”
```
(S^H)->(MvC)
```
## Part 2:

1.) (¬B → ¬A) → ((¬B → A) → B)
| A | B | ¬A | ¬B | ¬B → ¬A  | ¬B → A  | ((¬B → A) -> B | (¬B → ¬A) → ((¬B → A) → B)
|---|---|--- |--- | -------- | ------- | --------------- |--------------------------- 
| T | T | F  | F  | T        | T       |  T              | T
| T | F | F  | T  | F        | T       |  F              | T
| F | T | T  | F  | T        | T       |  T              | T
| F | F | T  | T  | T        | F       |  T              | T


Tautology

2.) ((A → B)∧(B → ¬A)) → A
| A | B | ¬A |  A → B  | B → ¬A  | ((A → B)∧(B → ¬A)) | ((A → B)∧(B → ¬A)) → A
|---|---|--- | ------- | ------- | ------------------ | ---------------------- 
| T | T | F  | T       | F       | F                  | T
| T | F | F  | F       | T       | F                  | T
| F | T | T  | T       | T       | T                  | F
| F | F | T  | T       | T       | T                  | F


Neither

## Part 3

1.)(p ∧ q) → r , p → (q → r )
```
(p ∧ q)->r   <=> p->(q->r)   Given    
(p ^ q)' v r <=> p->(q->r)   implication 
p' v q' v r  <=> p->(q->r)   De Morgans  
p' v (q->r)  <=> p->(q->r)   implication 
p->(q->r)    <=> p->(q->r)   implication 
```
2.)(p ∧ q) → r , p → (q → r )
```
(q->p)∧(r->p)       <=> (q ∨ r)->p   given        
(q' v p) ^ (r' v p) <=> (q ∨ r)->p   implication  
p v (q' ^ r')       <=> (q ∨ r)->p   distributive 
p v (q ^ r )'       <=> (q ∨ r)->p   De morgans   
(q ^ r)->p          <=> (q ∨ r)->p   implication  
```

### Part 4:
Let Loves(x,y) mean “x loves y,” Traveler(x) mean “x is a traveler,”
City(x) mean “x is a city,” Lives(x,y) mean “x lives in y.”

1.)∃x∀y∀z(City(x) ∧ Traveler (y)∧Li ves(z,x)) → (Loves(y,x)∧ ¬Loves(z,x))
```
If there exists some x for all y and all z where x is a city and y is a traveler and z lives in a city. 
Then a traveler loves the city and those who live in the city do not love the city. 
```
“No traveler loves the city they live in.”
```
∃x∀y(City(x) ∧ Traveler(y)) → (¬Loves(y,x) ∧ Lives(y,x))
```

### Part 5: 

1.)Assuming: p → (q ∧ r ), s → r , r → p
   Prove s → q
```
s      assumption    
r      mpp    
p      mpp    
q ^ r  mpp   
q      truth table
s → q  steps 1-5
```

1.)Assuming: ¬(r ∨ s), ¬p → s, p → q.
   Prove: q 
```
q   Prove
s'  De morgans  
p   mtt       
q   mpp        
```
