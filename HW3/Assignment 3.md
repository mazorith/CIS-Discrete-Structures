## Part 1
```
Let S = it is sunny; C = camping is fun; H = the homework is done; M = mathematics is easy.

(M->H)^(S->C)
If Mathematics is easy then the homework is done and If it is sunny then camping is fun.
```
```
“Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”
(S^H)->(MvC)
```
## Part 2:

| A | B | ¬A | ¬B | ¬B → ¬A  | ¬B → A  | ((¬B → A) -> B | (¬B → ¬A) → ((¬B → A) → B)
|---|---|--- |--- | -------- | ------- | --------------- |--------------------------- 
| T | T | F  | F  | T        | T       |  T              | T
| T | F | F  | T  | F        | T       |  F              | T
| F | T | T  | F  | T        | T       |  T              | T
| F | F | T  | T  | T        | F       |  T              | T


TAUTOLOGY


| A | B | ¬A |  A → B  | B → ¬A  | ((A → B)∧(B → ¬A)) | ((A → B)∧(B → ¬A)) → A
|---|---|--- | ------- | ------- | ------------------ | ---------------------- 
| T | T | F  | T       | F       | F                  | T
| T | F | F  | F       | T       | F                  | T
| F | T | T  | T       | T       | T                  | F
| F | F | T  | T       | T       | T                  | F


NEITHER

## Part 3

```
(p ∧ q)->r   <=> p->(q->r)   Given    
(p ^ q)' v r <=> p->(q->r)   implication 
p' v q' v r  <=> p->(q->r)   De Morgans  
p' v (q->r)  <=> p->(q->r)   implication 
p->(q->r)    <=> p->(q->r)   implication 


(q->p)∧(r->p)       <=> (q ∨ r)->p   given        
(q' v p) ^ (r' v p) <=> (q ∨ r)->p   implication  
p v (q' ^ r')       <=> (q ∨ r)->p   distributive 
p v (q ^ r )'       <=> (q ∨ r)->p   De morgans   
(q ^ r)->p          <=> (q ∨ r)->p   implication  
```
