## Part:1

p->q <=> q'->p'       Given
p->q <=> (q')' v p'	  Implication
p->q <=> q v p	      Double Negation
p->q <=> p'v q        Commutative
p->q <=> p->q	        Implication


(p->r)^(q->r)	    <=>	(p v q)->r	Given
(p' v r)^(q' v r)	<=>	(p v q)->r  Implication
(p' ^ q') v r	    <=>	(p v q)->r  Distributive
(p v q)' v r      <=>	(p v q)->r  De Morgan's Law
(p v q)->r        <=>	(p v q)->r	Implication
