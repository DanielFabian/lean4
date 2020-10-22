// Lean compiler output
// Module: Init.Control.Option
// Imports: Init.Control.Alternative Init.Control.MonadLift Init.Control.Except
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_OptionT_MonadFunctor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_Alternative(lean_object*);
lean_object* l_OptionT_MonadExceptOf___rarg(lean_object*);
lean_object* l_OptionT_orelse(lean_object*);
lean_object* l_OptionT_MonadExceptOf___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_monadMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_bind___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_Monad___rarg(lean_object*);
lean_object* l_OptionT_orelse___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_bind(lean_object*);
lean_object* l_OptionT_run___rarg(lean_object*);
lean_object* l_OptionT_MonadLift___rarg(lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__10(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_lift(lean_object*);
lean_object* l_OptionT_run(lean_object*, lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_catch___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_orelse___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_optional___rarg___closed__1;
lean_object* l_OptionT_bind___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_run___rarg___boxed(lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__9(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__8(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__7(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_MonadFunctor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_MonadExceptOf(lean_object*);
lean_object* l_OptionT_Alternative___rarg(lean_object*);
lean_object* l_OptionT_lift___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_pure(lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_pure___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__3(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__9___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_Monad(lean_object*);
lean_object* l_OptionT_Monad___rarg___lambda__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_catch(lean_object*);
lean_object* l_OptionT_catch___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_orelse___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_MonadLift(lean_object*);
lean_object* l_OptionT_MonadFunctor___rarg(lean_object*, lean_object*);
lean_object* l_OptionT_MonadExceptOf___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_fail(lean_object*);
lean_object* l_OptionT_monadMap___rarg(lean_object*, lean_object*);
lean_object* l_OptionT_monadMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_fail___rarg(lean_object*, lean_object*);
lean_object* l_OptionT_run___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_OptionT_run(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_OptionT_run___rarg___boxed), 1, 0);
return x_3;
}
}
lean_object* l_OptionT_run___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_OptionT_run___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_OptionT_bind___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_1);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
lean_dec(x_3);
x_9 = lean_apply_1(x_2, x_8);
return x_9;
}
}
}
lean_object* l_OptionT_bind___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_OptionT_bind___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_5);
x_8 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_4, x_7);
return x_8;
}
}
lean_object* l_OptionT_bind(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_bind___rarg), 5, 0);
return x_2;
}
}
lean_object* l_OptionT_pure___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_6, 0, x_3);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_OptionT_pure(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_pure___rarg), 3, 0);
return x_2;
}
}
lean_object* l_OptionT_Monad___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_apply_1(x_2, x_9);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
lean_ctor_set(x_3, 0, x_10);
x_13 = lean_apply_2(x_12, lean_box(0), x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
lean_dec(x_3);
x_15 = lean_apply_1(x_2, x_14);
x_16 = lean_ctor_get(x_1, 0);
lean_inc(x_16);
lean_dec(x_1);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_15);
x_19 = lean_apply_2(x_17, lean_box(0), x_18);
return x_19;
}
}
}
}
lean_object* l_OptionT_Monad___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__1), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_5, x_7);
return x_8;
}
}
lean_object* l_OptionT_Monad___rarg___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_3, 0);
lean_dec(x_9);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 1);
lean_inc(x_11);
lean_dec(x_10);
lean_ctor_set(x_3, 0, x_2);
x_12 = lean_apply_2(x_11, lean_box(0), x_3);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_2);
x_16 = lean_apply_2(x_14, lean_box(0), x_15);
return x_16;
}
}
}
}
lean_object* l_OptionT_Monad___rarg___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__3), 3, 2);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_4);
x_8 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_5, x_7);
return x_8;
}
}
lean_object* l_OptionT_Monad___rarg___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__1), 3, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_3, x_10);
return x_11;
}
}
}
lean_object* l_OptionT_Monad___rarg___lambda__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_6);
x_7 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__5), 4, 3);
lean_closure_set(x_7, 0, x_1);
lean_closure_set(x_7, 1, x_6);
lean_closure_set(x_7, 2, x_5);
x_8 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_4, x_7);
return x_8;
}
}
lean_object* l_OptionT_Monad___rarg___lambda__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
lean_dec(x_5);
x_7 = lean_box(0);
x_8 = lean_apply_2(x_6, lean_box(0), x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_4, 0);
lean_inc(x_9);
lean_dec(x_4);
x_10 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__3), 3, 2);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_apply_4(x_2, lean_box(0), lean_box(0), x_3, x_10);
return x_11;
}
}
}
lean_object* l_OptionT_Monad___rarg___lambda__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__7), 4, 3);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_5);
lean_closure_set(x_6, 2, x_4);
x_7 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_3, x_6);
return x_7;
}
}
lean_object* l_OptionT_Monad___rarg___lambda__9(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
else
{
lean_dec(x_1);
lean_inc(x_2);
return x_2;
}
}
}
lean_object* l_OptionT_Monad___rarg___lambda__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__9___boxed), 3, 2);
lean_closure_set(x_6, 0, x_1);
lean_closure_set(x_6, 1, x_4);
x_7 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_3, x_6);
return x_7;
}
}
lean_object* l_OptionT_Monad___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__2), 5, 1);
lean_closure_set(x_2, 0, x_1);
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__4), 5, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_OptionT_pure___rarg), 3, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc(x_1);
x_6 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__6), 5, 1);
lean_closure_set(x_6, 0, x_1);
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__8), 4, 1);
lean_closure_set(x_7, 0, x_1);
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg___lambda__10), 4, 1);
lean_closure_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_5);
lean_ctor_set(x_9, 2, x_6);
lean_ctor_set(x_9, 3, x_7);
lean_ctor_set(x_9, 4, x_8);
x_10 = lean_alloc_closure((void*)(l_OptionT_bind___rarg), 5, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
lean_object* l_OptionT_Monad(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_Monad___rarg), 1, 0);
return x_2;
}
}
lean_object* l_OptionT_Monad___rarg___lambda__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OptionT_Monad___rarg___lambda__9(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_OptionT_orelse___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_2);
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_apply_2(x_5, lean_box(0), x_3);
return x_6;
}
}
}
lean_object* l_OptionT_orelse___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_OptionT_orelse___rarg___lambda__1___boxed), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_1);
x_7 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_3, x_6);
return x_7;
}
}
lean_object* l_OptionT_orelse(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_orelse___rarg), 4, 0);
return x_2;
}
}
lean_object* l_OptionT_orelse___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OptionT_orelse___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_OptionT_fail___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
lean_dec(x_1);
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_2(x_4, lean_box(0), x_5);
return x_6;
}
}
lean_object* l_OptionT_fail(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_fail___rarg), 2, 0);
return x_2;
}
}
lean_object* l_OptionT_Alternative___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_inc(x_1);
x_2 = l_OptionT_Monad___rarg(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(l_OptionT_fail___rarg), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_alloc_closure((void*)(l_OptionT_orelse___rarg), 4, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
lean_ctor_set(x_6, 2, x_5);
return x_6;
}
}
lean_object* l_OptionT_Alternative(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_Alternative___rarg), 1, 0);
return x_2;
}
}
lean_object* l_OptionT_lift___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
x_7 = l_optional___rarg___closed__1;
x_8 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_7, x_3);
return x_8;
}
}
lean_object* l_OptionT_lift(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_lift___rarg), 3, 0);
return x_2;
}
}
lean_object* l_OptionT_MonadLift___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_lift___rarg), 3, 1);
lean_closure_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_OptionT_MonadLift(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_MonadLift___rarg), 1, 0);
return x_2;
}
}
lean_object* l_OptionT_monadMap___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_OptionT_monadMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OptionT_monadMap___rarg), 2, 0);
return x_6;
}
}
lean_object* l_OptionT_monadMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OptionT_monadMap(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_OptionT_MonadFunctor___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_1, lean_box(0), x_2);
return x_3;
}
}
lean_object* l_OptionT_MonadFunctor(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_OptionT_MonadFunctor___rarg), 2, 0);
return x_6;
}
}
lean_object* l_OptionT_MonadFunctor___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_OptionT_MonadFunctor(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_OptionT_catch___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_1);
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_apply_2(x_8, lean_box(0), x_3);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_ctor_get(x_2, 0);
lean_inc(x_11);
lean_dec(x_2);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_10);
x_14 = lean_apply_2(x_12, lean_box(0), x_13);
return x_14;
}
}
}
}
lean_object* l_OptionT_catch___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_alloc_closure((void*)(l_OptionT_catch___rarg___lambda__1), 3, 2);
lean_closure_set(x_6, 0, x_4);
lean_closure_set(x_6, 1, x_1);
x_7 = lean_apply_4(x_5, lean_box(0), lean_box(0), x_3, x_6);
return x_7;
}
}
lean_object* l_OptionT_catch(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_catch___rarg), 4, 0);
return x_2;
}
}
lean_object* l_OptionT_MonadExceptOf___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_box(0);
x_7 = lean_apply_2(x_5, lean_box(0), x_6);
return x_7;
}
}
lean_object* l_OptionT_MonadExceptOf___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_2 = lean_alloc_closure((void*)(l_OptionT_MonadExceptOf___rarg___lambda__1___boxed), 3, 1);
lean_closure_set(x_2, 0, x_1);
x_3 = lean_alloc_closure((void*)(l_OptionT_catch___rarg), 4, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* l_OptionT_MonadExceptOf(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_OptionT_MonadExceptOf___rarg), 1, 0);
return x_2;
}
}
lean_object* l_OptionT_MonadExceptOf___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_OptionT_MonadExceptOf___rarg___lambda__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* initialize_Init_Control_Alternative(lean_object*);
lean_object* initialize_Init_Control_MonadLift(lean_object*);
lean_object* initialize_Init_Control_Except(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Control_Option(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Control_Alternative(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_MonadLift(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Except(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
