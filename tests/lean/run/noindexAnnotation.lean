structure Fin2 (n : Nat) :=
  (val  : Nat)
  (isLt : Less val n)

protected def Fin2.ofNat {n : Nat} (a : Nat) : Fin2 (Nat.succ n) :=
  ⟨a % Nat.succ n, Nat.mod_lt _ (Nat.zeroLtSucc _)⟩

instance : OfNat (Fin2 (no_index (n+1))) i where
  ofNat := Fin2.ofNat i

def ex1 : Fin2 (9 + 1) :=
  0

def ex2 : Fin2 10 :=
  0
