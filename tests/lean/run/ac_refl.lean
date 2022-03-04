import Lean
open Lean

instance : IsAssociative (α := Nat) HAdd.hAdd := ⟨Nat.add_assoc⟩
instance : IsCommutative (α := Nat) HAdd.hAdd := ⟨Nat.add_comm⟩
instance : IsNeutral HAdd.hAdd 0 := ⟨Nat.zero_add, Nat.add_zero⟩

instance : IsAssociative (α := Nat) HMul.hMul := ⟨Nat.mul_assoc⟩
instance : IsCommutative (α := Nat) HMul.hMul := ⟨Nat.mul_comm⟩
instance : IsNeutral HMul.hMul 1 := ⟨Nat.one_mul, Nat.mul_one⟩

theorem max_assoc (n m k : Nat) : max (max n m) k = max n (max m k) := by
  simp [max]; split <;> split <;> try split <;> try rfl
  case inl hmn nhkn hkm => exact False.elim $ nhkn $ Nat.lt_trans hkm hmn
  . rfl
  case inl nhmn nhkm hkn => apply absurd hkn; simp [Nat.not_lt_eq] at *; exact Nat.le_trans nhmn nhkm

theorem max_comm (n m : Nat) : max n m = max m n := by
  simp [max]; split <;> split <;> try rfl
  case inl h₁ h₂ => apply absurd (Nat.lt_trans h₁ h₂); apply Nat.lt_irrefl
  case inr h₁ h₂ => simp [Nat.not_lt_eq] at *; apply Nat.le_antisymm <;> assumption

theorem max_idem (n : Nat) : max n n = n := by
  simp [max]

theorem Nat.zero_max (n : Nat) : max 0 n = n := by
  simp [max]; rfl

theorem Nat.max_zero (n : Nat) : max n 0 = n := by
  rw [max_comm, Nat.zero_max]

instance : IsAssociative (α := Nat) max := ⟨max_assoc⟩
instance : IsCommutative (α := Nat) max := ⟨max_comm⟩
instance : IsIdempotent (α := Nat) max := ⟨max_idem⟩
instance : IsNeutral max 0 := ⟨Nat.zero_max, Nat.max_zero⟩

example (x y z : Nat) : x + y + 0 + z = z + (x + y) := by ac_refl

example (x y z : Nat) : (x + y) * (0 + z) = (x + y) * z:= by ac_refl

example (x y z : Nat) : (x + y) * (0 + z) = 1 * z * (y + 0 + x) := by ac_refl

example (x y z : Nat) : max (0 + (max x (max z (max (0 + 0) ((max 1 0) + 0 + 0) * y)))) y = max (max x y) z := by ac_refl

example (x y : Nat) : 1 + 0 + 0 = 0 + 1 := by ac_refl

example (x y : Nat) : (x + y = 42) = (y + x = 42) := by ac_refl

example (x y : Nat) (P : Prop) : (x + y = 42 → P) = (y + x = 42 → P) := by ac_refl
