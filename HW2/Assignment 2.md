## Part:1
```
p->q <=> q'->p'       Given
p->q <=> (q')' v p'   Implication
p->q <=> q v p	      Double Negation
p->q <=> p'v q        Commutative
p->q <=> p->q	        Implication
```
```
(p v q)->r <=> (p->r)^(q->r)      Given
(p v q)->r <=> (p' v r)^(q' v r)  Implication
(p v q)->r <=> (p' ^ q') v r      Distributive 
(p v q)->r <=> (p v q)' v r       De Morgan's Law
(p v q)->r <=> (p v q)->r         Implication
```
```
(Ǝx)A(x) ^ (Ǝx)B(x) -> (Ǝx)(A(x) ^ B(x))

x = animals 
A(x) = humans
B(x) = cows

If there exists some animals that are humans and there exists some animals that are cows,
then there exists some animals that are humans and cows.
```
