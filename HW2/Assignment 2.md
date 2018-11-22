## Part:1
```
p->q <=> q'->p'       Given
p->q <=> (q')' v p'   Implication
p->q <=> q v p	      Double Negation
p->q <=> p'v q        Commutative
p->q <=> p->q	        Implication
```
```
(p->r)^(q->r)     <=>	(p v q)->r	Given
(p' v r)^(q' v r) <=>	(p v q)->r  Implication
(p' ^ q') v r     <=> (p v q)->r  Distributive
(p v q)' v r      <=> (p v q)->r  De Morgan's Law
(p v q)->r        <=> (p v q)->r	Implication
```
```
(Ǝx)A(x) ^ (Ǝx)B(x) -> (Ǝx)(A(x) ^ B(x))

x = animals 
A(x) = humans
B(x) = cows

If there exists some animals that are humans and there exists some animals that 
are cows, then there exists some animals that are humans and cows.
```
