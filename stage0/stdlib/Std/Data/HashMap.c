// Lean compiler output
// Module: Std.Data.HashMap
// Imports: Init Std.Data.AssocList
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
lean_object* l_Std_HashMapImp_erase_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMap_foldM_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toList___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x3f_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
uint8_t l_Std_HashMap_isEmpty___rarg(lean_object*);
lean_object* l_Std_HashMapImp_moveEntries___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_fold___spec__2___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_HashMapImp_erase_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_fold(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f_match__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_empty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_size_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_foldBucketsM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Std_HashMapImp_reinsertAux(lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x21(lean_object*, lean_object*);
lean_object* l_Std_HashMap_toList(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_contains___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_getOp___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_foldBuckets___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_erase___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_numBuckets___rarg___boxed(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_moveEntries___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Std_mkHashMap___rarg(lean_object*);
lean_object* l_Std_AssocList_replace___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toList___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l_Std_HashMapImp_find_x3f_match__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_toArray___rarg(lean_object*);
lean_object* l_Std_AssocList_foldlM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapBucket_update___rarg(lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Std_HashMap_size_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_reinsertAux_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_contains_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Std_HashMap_size(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBuckets___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapBucket_update___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_toList___rarg(lean_object*);
lean_object* l_Std_HashMap_foldM_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_fold___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert_match__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_insert_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_reinsertAux_match__1___rarg(size_t, lean_object*);
lean_object* l_Std_HashMapImp_erase_match__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_erase(lean_object*, lean_object*);
lean_object* l_Std_HashMap_isEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_fold___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_numBuckets___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_size_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabitedHashMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_getOp(lean_object*, lean_object*);
lean_object* l_Std_AssocList_erase___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_reinsertAux___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_contains(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_reinsertAux_match__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_erase___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toArray___spec__1(lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x21_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toArray___spec__2___rarg(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_HashMapImp_reinsertAux_match__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_findEntry_x3f_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMap_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp(lean_object*, lean_object*);
lean_object* l_Std_HashMap_numBuckets___rarg(lean_object*);
lean_object* l_Std_HashMapImp_foldBuckets___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_fold___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_toList___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapBucket_update(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_erase_match__2(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Std_HashMap_findEntry_x3f___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_HashMap_foldM_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toList___spec__2(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_foldM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x3f(lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_moveEntries___spec__1(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert(lean_object*, lean_object*);
lean_object* l_Std_HashMap_findD___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_foldBuckets___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert_match__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Std_HashMap_numBuckets(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_foldBuckets(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_contains_match__1___rarg(size_t, lean_object*);
lean_object* l_Std_HashMapImp_foldBuckets___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_Std_HashMapImp_contains___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_findD___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_fold___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_insert_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_fold___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_toArray___rarg___boxed(lean_object*);
uint8_t l_Std_HashMap_contains___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_insert(lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x21___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_fold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_fold___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_toList___rarg___boxed(lean_object*);
lean_object* l_Std_HashMap_isEmpty___rarg___boxed(lean_object*);
lean_object* l_Std_mkHashMapImp___rarg___closed__2;
lean_object* l_Std_HashMap_size___rarg___boxed(lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_fold___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_contains_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toList___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x21___rarg___closed__3;
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f_match__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_findEntry_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_mkHashMapImp___rarg___closed__1;
size_t lean_usize_modn(size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x3f___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_fold_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_findEntry_x3f(lean_object*, lean_object*);
lean_object* l_Std_HashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_contains_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Std_mkHashMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_fold___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_toArray___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toList___spec__1(lean_object*, lean_object*);
uint8_t l_Std_AssocList_contains___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabitedHashMap(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_foldM(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_contains(lean_object*, lean_object*);
lean_object* l_Std_mkHashMap(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_erase_match__1___rarg(size_t, lean_object*);
lean_object* l_Std_HashMapImp_insert_match__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_findEntry_x3f_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_findEntry_x3f_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_findEntry_x3f_match__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_contains_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_erase_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_fold___spec__2___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_HashMapImp_findEntry_x3f___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_size___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_fold_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_foldM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_fold___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toList___spec__2___rarg(lean_object*, size_t, size_t, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Std_HashMap_erase_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x21_match__1(lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x21___rarg___closed__1;
lean_object* l_Std_HashMap_find_x21___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x21___rarg___closed__2;
lean_object* l_Std_HashMap_findEntry_x3f_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_fold___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_contains_match__2___rarg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_HashMap_toArray(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_fold___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_erase_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_contains_match__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instEmptyCollectionHashMap(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_fold___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f_match__1___rarg(size_t, lean_object*);
lean_object* l_Std_AssocList_find_x3f___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBuckets___spec__2___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_HashMap_instEmptyCollectionHashMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_findEntry_x3f_match__1(lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_Std_HashMapImp_mkIdx(lean_object*, lean_object*, size_t);
lean_object* l_Std_HashMapImp_findEntry_x3f_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg___lambda__1(size_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
lean_object* l_Std_HashMap_find_x21___rarg___closed__4;
lean_object* l_Std_HashMap_instInhabitedHashMap___closed__1;
lean_object* l_Std_HashMapImp_foldBucketsM(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toArray___spec__2(lean_object*, lean_object*);
lean_object* l_Std_AssocList_findEntry_x3f___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_erase(lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toArray___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMap_foldM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_findD(lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x3f_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert_match__1___rarg(size_t, lean_object*);
lean_object* l_Std_HashMapImp_contains___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMap_insert_match__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_findEntry_x3f_match__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_expand(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_findEntry_x3f_match__1___rarg(size_t, lean_object*);
lean_object* l_Std_HashMapImp_moveEntries(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_isEmpty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_foldM___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_contains_match__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toArray___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_fold_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toArray___spec__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_getOp___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_find_x3f_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_findEntry_x3f(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_contains_match__1___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBuckets___spec__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_findEntry_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_find_x3f_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_erase_match__1___rarg___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_HashMapImp_mkIdx___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_size___rarg(lean_object*);
lean_object* l_Std_HashMapBucket_update___rarg(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_array_uset(x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Std_HashMapBucket_update(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMapBucket_update___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMapBucket_update___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; lean_object* x_6; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Std_HashMapBucket_update___rarg(x_1, x_5, x_3, x_4);
return x_6;
}
}
static lean_object* _init_l_Std_mkHashMapImp___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_unsigned_to_nat(8u);
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Std_mkHashMapImp___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Std_mkHashMapImp___rarg___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Std_mkHashMapImp___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_box(0);
x_5 = lean_mk_array(x_1, x_4);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_1);
x_7 = l_Std_mkHashMapImp___rarg___closed__2;
return x_7;
}
}
}
lean_object* l_Std_mkHashMapImp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_mkHashMapImp___rarg), 1, 0);
return x_3;
}
}
size_t l_Std_HashMapImp_mkIdx(lean_object* x_1, lean_object* x_2, size_t x_3) {
_start:
{
size_t x_4; 
x_4 = lean_usize_modn(x_3, x_1);
return x_4;
}
}
lean_object* l_Std_HashMapImp_mkIdx___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_5 = l_Std_HashMapImp_mkIdx(x_1, x_2, x_4);
lean_dec(x_1);
x_6 = lean_box_usize(x_5);
return x_6;
}
}
lean_object* l_Std_HashMapImp_reinsertAux_match__1___rarg(size_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box_usize(x_1);
x_4 = lean_apply_2(x_2, x_3, lean_box(0));
return x_4;
}
}
lean_object* l_Std_HashMapImp_reinsertAux_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMapImp_reinsertAux_match__1___rarg___boxed), 2, 0);
return x_5;
}
}
lean_object* l_Std_HashMapImp_reinsertAux_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = l_Std_HashMapImp_reinsertAux_match__1___rarg(x_3, x_2);
return x_4;
}
}
lean_object* l_Std_HashMapImp_reinsertAux_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_reinsertAux_match__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMapImp_reinsertAux___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_array_get_size(x_2);
lean_inc(x_3);
x_6 = lean_apply_1(x_1, x_3);
x_7 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_8 = lean_usize_modn(x_7, x_5);
lean_dec(x_5);
x_9 = lean_array_uget(x_2, x_8);
x_10 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_4);
lean_ctor_set(x_10, 2, x_9);
x_11 = lean_array_uset(x_2, x_8, x_10);
return x_11;
}
}
lean_object* l_Std_HashMapImp_reinsertAux(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMapImp_reinsertAux___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Std_AssocList_foldlM___rarg(x_1, x_2, x_6, x_9);
x_11 = lean_box_usize(x_4);
x_12 = lean_box_usize(x_5);
x_13 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_12);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_10, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_6);
return x_17;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg___boxed), 6, 0);
return x_5;
}
}
lean_object* l_Std_HashMapImp_foldBucketsM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_array_get_size(x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_apply_2(x_9, lean_box(0), x_3);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = lean_nat_dec_le(x_5, x_5);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
lean_dec(x_1);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_apply_2(x_13, lean_box(0), x_3);
return x_14;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = 0;
x_16 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_17 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg(x_1, x_4, x_2, x_15, x_16, x_3);
return x_17;
}
}
}
}
lean_object* l_Std_HashMapImp_foldBucketsM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMapImp_foldBucketsM___rarg), 4, 0);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBucketsM___spec__1___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_foldBuckets___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = lean_apply_3(x_1, x_2, x_4, x_5);
x_2 = x_7;
x_3 = x_6;
goto _start;
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_foldBuckets___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_AssocList_foldlM___at_Std_HashMapImp_foldBuckets___spec__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBuckets___spec__2___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_8 = l_Std_AssocList_foldlM___at_Std_HashMapImp_foldBuckets___spec__1___rarg(x_1, x_5, x_7);
x_9 = 1;
x_10 = x_3 + x_9;
x_3 = x_10;
x_5 = x_8;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBuckets___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBuckets___spec__2___rarg___boxed), 5, 0);
return x_4;
}
}
lean_object* l_Std_HashMapImp_foldBuckets___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
lean_dec(x_3);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBuckets___spec__2___rarg(x_3, x_1, x_8, x_9, x_2);
return x_10;
}
}
}
}
lean_object* l_Std_HashMapImp_foldBuckets(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_HashMapImp_foldBuckets___rarg___boxed), 3, 0);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBuckets___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldBuckets___spec__2___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_HashMapImp_foldBuckets___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_HashMapImp_foldBuckets___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Std_AssocList_foldlM___rarg(x_1, x_2, x_6, x_9);
x_11 = lean_box_usize(x_4);
x_12 = lean_box_usize(x_5);
x_13 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_12);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_10, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_6);
return x_17;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg___boxed), 6, 0);
return x_5;
}
}
lean_object* l_Std_HashMapImp_foldM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_3);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_6, x_6);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_2(x_14, lean_box(0), x_3);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_18 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg(x_1, x_2, x_5, x_16, x_17, x_3);
return x_18;
}
}
}
}
lean_object* l_Std_HashMapImp_foldM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMapImp_foldM___rarg), 4, 0);
return x_5;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_foldM___spec__1___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_fold___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = lean_apply_3(x_1, x_2, x_4, x_5);
x_2 = x_7;
x_3 = x_6;
goto _start;
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_fold___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_AssocList_foldlM___at_Std_HashMapImp_fold___spec__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_fold___spec__2___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_8 = l_Std_AssocList_foldlM___at_Std_HashMapImp_fold___spec__1___rarg(x_1, x_5, x_7);
x_9 = 1;
x_10 = x_3 + x_9;
x_3 = x_10;
x_5 = x_8;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_fold___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_fold___spec__2___rarg___boxed), 5, 0);
return x_4;
}
}
lean_object* l_Std_HashMapImp_fold___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 1);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_fold___spec__2___rarg(x_1, x_4, x_9, x_10, x_2);
return x_11;
}
}
}
}
lean_object* l_Std_HashMapImp_fold(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_HashMapImp_fold___rarg___boxed), 3, 0);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_fold___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Std_HashMapImp_fold___spec__2___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_HashMapImp_fold___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_HashMapImp_fold___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Std_HashMapImp_findEntry_x3f_match__1___rarg(size_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box_usize(x_1);
x_4 = lean_apply_2(x_2, x_3, lean_box(0));
return x_4;
}
}
lean_object* l_Std_HashMapImp_findEntry_x3f_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMapImp_findEntry_x3f_match__1___rarg___boxed), 2, 0);
return x_5;
}
}
lean_object* l_Std_HashMapImp_findEntry_x3f_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = l_Std_HashMapImp_findEntry_x3f_match__1___rarg(x_3, x_2);
return x_4;
}
}
lean_object* l_Std_HashMapImp_findEntry_x3f_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_findEntry_x3f_match__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMapImp_findEntry_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_HashMapImp_findEntry_x3f_match__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_HashMapImp_findEntry_x3f_match__2___rarg), 2, 0);
return x_4;
}
}
lean_object* l_Std_HashMapImp_findEntry_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_array_get_size(x_5);
lean_inc(x_4);
x_7 = lean_apply_1(x_2, x_4);
x_8 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_5, x_9);
x_11 = l_Std_AssocList_findEntry_x3f___rarg(x_1, x_4, x_10);
return x_11;
}
}
lean_object* l_Std_HashMapImp_findEntry_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMapImp_findEntry_x3f___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMapImp_findEntry_x3f___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_findEntry_x3f___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMapImp_find_x3f_match__1___rarg(size_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box_usize(x_1);
x_4 = lean_apply_2(x_2, x_3, lean_box(0));
return x_4;
}
}
lean_object* l_Std_HashMapImp_find_x3f_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMapImp_find_x3f_match__1___rarg___boxed), 2, 0);
return x_5;
}
}
lean_object* l_Std_HashMapImp_find_x3f_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = l_Std_HashMapImp_find_x3f_match__1___rarg(x_3, x_2);
return x_4;
}
}
lean_object* l_Std_HashMapImp_find_x3f_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_find_x3f_match__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMapImp_find_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_HashMapImp_find_x3f_match__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_HashMapImp_find_x3f_match__2___rarg), 2, 0);
return x_4;
}
}
lean_object* l_Std_HashMapImp_find_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_array_get_size(x_5);
lean_inc(x_4);
x_7 = lean_apply_1(x_2, x_4);
x_8 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_5, x_9);
x_11 = l_Std_AssocList_find_x3f___rarg(x_1, x_4, x_10);
return x_11;
}
}
lean_object* l_Std_HashMapImp_find_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMapImp_find_x3f___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMapImp_find_x3f___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_find_x3f___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMapImp_contains_match__1___rarg(size_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box_usize(x_1);
x_4 = lean_apply_2(x_2, x_3, lean_box(0));
return x_4;
}
}
lean_object* l_Std_HashMapImp_contains_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMapImp_contains_match__1___rarg___boxed), 2, 0);
return x_5;
}
}
lean_object* l_Std_HashMapImp_contains_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = l_Std_HashMapImp_contains_match__1___rarg(x_3, x_2);
return x_4;
}
}
lean_object* l_Std_HashMapImp_contains_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_contains_match__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMapImp_contains_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_HashMapImp_contains_match__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_HashMapImp_contains_match__2___rarg), 2, 0);
return x_4;
}
}
uint8_t l_Std_HashMapImp_contains___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; uint8_t x_11; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_array_get_size(x_5);
lean_inc(x_4);
x_7 = lean_apply_1(x_2, x_4);
x_8 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_9 = lean_usize_modn(x_8, x_6);
lean_dec(x_6);
x_10 = lean_array_uget(x_5, x_9);
x_11 = l_Std_AssocList_contains___rarg(x_1, x_4, x_10);
return x_11;
}
}
lean_object* l_Std_HashMapImp_contains(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMapImp_contains___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMapImp_contains___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Std_HashMapImp_contains___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_moveEntries___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 2);
x_7 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_5);
x_8 = lean_apply_1(x_1, x_5);
x_9 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_10 = lean_usize_modn(x_9, x_7);
lean_dec(x_7);
x_11 = lean_array_uget(x_2, x_10);
lean_ctor_set(x_3, 2, x_11);
x_12 = lean_array_uset(x_2, x_10, x_3);
x_2 = x_12;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_14 = lean_ctor_get(x_3, 0);
x_15 = lean_ctor_get(x_3, 1);
x_16 = lean_ctor_get(x_3, 2);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_3);
x_17 = lean_array_get_size(x_2);
lean_inc(x_1);
lean_inc(x_14);
x_18 = lean_apply_1(x_1, x_14);
x_19 = lean_unbox_usize(x_18);
lean_dec(x_18);
x_20 = lean_usize_modn(x_19, x_17);
lean_dec(x_17);
x_21 = lean_array_uget(x_2, x_20);
x_22 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_15);
lean_ctor_set(x_22, 2, x_21);
x_23 = lean_array_uset(x_2, x_20, x_22);
x_2 = x_23;
x_3 = x_16;
goto _start;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMapImp_moveEntries___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_AssocList_foldlM___at_Std_HashMapImp_moveEntries___spec__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Std_HashMapImp_moveEntries___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_array_get_size(x_3);
x_6 = lean_nat_dec_lt(x_2, x_5);
lean_dec(x_5);
if (x_6 == 0)
{
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_array_fget(x_3, x_2);
x_8 = lean_box(0);
x_9 = lean_array_fset(x_3, x_2, x_8);
lean_inc(x_1);
x_10 = l_Std_AssocList_foldlM___at_Std_HashMapImp_moveEntries___spec__1___rarg(x_1, x_4, x_7);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_2, x_11);
lean_dec(x_2);
x_2 = x_12;
x_3 = x_9;
x_4 = x_10;
goto _start;
}
}
}
lean_object* l_Std_HashMapImp_moveEntries(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMapImp_moveEntries___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMapImp_expand___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(2u);
x_6 = lean_nat_mul(x_4, x_5);
lean_dec(x_4);
x_7 = lean_box(0);
x_8 = lean_mk_array(x_6, x_7);
x_9 = lean_unsigned_to_nat(0u);
x_10 = l_Std_HashMapImp_moveEntries___rarg(x_1, x_9, x_3, x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_2);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
lean_object* l_Std_HashMapImp_expand(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMapImp_expand___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Std_HashMapImp_insert_match__1___rarg(size_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box_usize(x_1);
x_4 = lean_apply_2(x_2, x_3, lean_box(0));
return x_4;
}
}
lean_object* l_Std_HashMapImp_insert_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMapImp_insert_match__1___rarg___boxed), 2, 0);
return x_5;
}
}
lean_object* l_Std_HashMapImp_insert_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = l_Std_HashMapImp_insert_match__1___rarg(x_3, x_2);
return x_4;
}
}
lean_object* l_Std_HashMapImp_insert_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_insert_match__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMapImp_insert_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_HashMapImp_insert_match__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_HashMapImp_insert_match__2___rarg), 2, 0);
return x_4;
}
}
lean_object* l_Std_HashMapImp_insert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; uint8_t x_14; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
x_9 = lean_array_get_size(x_8);
lean_inc(x_2);
lean_inc(x_4);
x_10 = lean_apply_1(x_2, x_4);
x_11 = lean_unbox_usize(x_10);
lean_dec(x_10);
x_12 = lean_usize_modn(x_11, x_9);
x_13 = lean_array_uget(x_8, x_12);
lean_inc(x_13);
lean_inc(x_4);
lean_inc(x_1);
x_14 = l_Std_AssocList_contains___rarg(x_1, x_4, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_1);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_add(x_7, x_15);
lean_dec(x_7);
x_17 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_17, 0, x_4);
lean_ctor_set(x_17, 1, x_5);
lean_ctor_set(x_17, 2, x_13);
x_18 = lean_array_uset(x_8, x_12, x_17);
x_19 = lean_nat_dec_le(x_16, x_9);
lean_dec(x_9);
if (x_19 == 0)
{
lean_object* x_20; 
lean_free_object(x_3);
x_20 = l_Std_HashMapImp_expand___rarg(x_2, x_16, x_18);
return x_20;
}
else
{
lean_dec(x_2);
lean_ctor_set(x_3, 1, x_18);
lean_ctor_set(x_3, 0, x_16);
return x_3;
}
}
else
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_9);
lean_dec(x_2);
x_21 = l_Std_AssocList_replace___rarg(x_1, x_4, x_5, x_13);
x_22 = lean_array_uset(x_8, x_12, x_21);
lean_ctor_set(x_3, 1, x_22);
return x_3;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; size_t x_27; size_t x_28; lean_object* x_29; uint8_t x_30; 
x_23 = lean_ctor_get(x_3, 0);
x_24 = lean_ctor_get(x_3, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_3);
x_25 = lean_array_get_size(x_24);
lean_inc(x_2);
lean_inc(x_4);
x_26 = lean_apply_1(x_2, x_4);
x_27 = lean_unbox_usize(x_26);
lean_dec(x_26);
x_28 = lean_usize_modn(x_27, x_25);
x_29 = lean_array_uget(x_24, x_28);
lean_inc(x_29);
lean_inc(x_4);
lean_inc(x_1);
x_30 = l_Std_AssocList_contains___rarg(x_1, x_4, x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_1);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_add(x_23, x_31);
lean_dec(x_23);
x_33 = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(x_33, 0, x_4);
lean_ctor_set(x_33, 1, x_5);
lean_ctor_set(x_33, 2, x_29);
x_34 = lean_array_uset(x_24, x_28, x_33);
x_35 = lean_nat_dec_le(x_32, x_25);
lean_dec(x_25);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = l_Std_HashMapImp_expand___rarg(x_2, x_32, x_34);
return x_36;
}
else
{
lean_object* x_37; 
lean_dec(x_2);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_34);
return x_37;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_25);
lean_dec(x_2);
x_38 = l_Std_AssocList_replace___rarg(x_1, x_4, x_5, x_29);
x_39 = lean_array_uset(x_24, x_28, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_23);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
lean_object* l_Std_HashMapImp_insert(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMapImp_insert___rarg), 5, 0);
return x_3;
}
}
lean_object* l_Std_HashMapImp_erase_match__1___rarg(size_t x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_box_usize(x_1);
x_4 = lean_apply_2(x_2, x_3, lean_box(0));
return x_4;
}
}
lean_object* l_Std_HashMapImp_erase_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMapImp_erase_match__1___rarg___boxed), 2, 0);
return x_5;
}
}
lean_object* l_Std_HashMapImp_erase_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
size_t x_3; lean_object* x_4; 
x_3 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_4 = l_Std_HashMapImp_erase_match__1___rarg(x_3, x_2);
return x_4;
}
}
lean_object* l_Std_HashMapImp_erase_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_erase_match__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMapImp_erase_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_HashMapImp_erase_match__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_HashMapImp_erase_match__2___rarg), 2, 0);
return x_4;
}
}
lean_object* l_Std_HashMapImp_erase___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; lean_object* x_11; uint8_t x_12; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
x_7 = lean_array_get_size(x_6);
lean_inc(x_4);
x_8 = lean_apply_1(x_2, x_4);
x_9 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_10 = lean_usize_modn(x_9, x_7);
lean_dec(x_7);
x_11 = lean_array_uget(x_6, x_10);
lean_inc(x_11);
lean_inc(x_4);
lean_inc(x_1);
x_12 = l_Std_AssocList_contains___rarg(x_1, x_4, x_11);
if (x_12 == 0)
{
lean_dec(x_11);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_3;
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_3);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_3, 1);
lean_dec(x_14);
x_15 = lean_ctor_get(x_3, 0);
lean_dec(x_15);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_5, x_16);
lean_dec(x_5);
x_18 = l_Std_AssocList_erase___rarg(x_1, x_4, x_11);
x_19 = lean_array_uset(x_6, x_10, x_18);
lean_ctor_set(x_3, 1, x_19);
lean_ctor_set(x_3, 0, x_17);
return x_3;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_3);
x_20 = lean_unsigned_to_nat(1u);
x_21 = lean_nat_sub(x_5, x_20);
lean_dec(x_5);
x_22 = l_Std_AssocList_erase___rarg(x_1, x_4, x_11);
x_23 = lean_array_uset(x_6, x_10, x_22);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_21);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
}
}
lean_object* l_Std_HashMapImp_erase(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMapImp_erase___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_mkHashMap___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Std_mkHashMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_mkHashMap___rarg), 1, 0);
return x_5;
}
}
lean_object* l_Std_mkHashMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_mkHashMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_Std_HashMap_instInhabitedHashMap___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = l_Std_mkHashMapImp___rarg(x_1);
return x_2;
}
}
lean_object* l_Std_HashMap_instInhabitedHashMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_instInhabitedHashMap___closed__1;
return x_5;
}
}
lean_object* l_Std_HashMap_instInhabitedHashMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_instInhabitedHashMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMap_instEmptyCollectionHashMap(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_instInhabitedHashMap___closed__1;
return x_5;
}
}
lean_object* l_Std_HashMap_instEmptyCollectionHashMap___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_instEmptyCollectionHashMap(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMap_insert_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
lean_object* l_Std_HashMap_insert_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_HashMap_insert_match__1___rarg), 2, 0);
return x_6;
}
}
lean_object* l_Std_HashMap_insert_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_insert_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_HashMap_insert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMapImp_insert___rarg(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Std_HashMap_insert(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMap_insert___rarg), 5, 0);
return x_3;
}
}
lean_object* l_Std_HashMap_erase_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
lean_object* l_Std_HashMap_erase_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_HashMap_erase_match__1___rarg), 2, 0);
return x_6;
}
}
lean_object* l_Std_HashMap_erase_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_erase_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_HashMap_erase___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_erase___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_HashMap_erase(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMap_erase___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMap_findEntry_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
lean_object* l_Std_HashMap_findEntry_x3f_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_HashMap_findEntry_x3f_match__1___rarg), 2, 0);
return x_6;
}
}
lean_object* l_Std_HashMap_findEntry_x3f_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_findEntry_x3f_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_HashMap_findEntry_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_findEntry_x3f___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_HashMap_findEntry_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMap_findEntry_x3f___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMap_findEntry_x3f___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_findEntry_x3f___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMap_find_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
lean_object* l_Std_HashMap_find_x3f_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_HashMap_find_x3f_match__1___rarg), 2, 0);
return x_6;
}
}
lean_object* l_Std_HashMap_find_x3f_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_find_x3f_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_HashMap_find_x3f___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_find_x3f___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_HashMap_find_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMap_find_x3f___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMap_find_x3f___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_find_x3f___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMap_findD___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMapImp_find_x3f___rarg(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_6) == 0)
{
lean_inc(x_5);
return x_5;
}
else
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
return x_7;
}
}
}
lean_object* l_Std_HashMap_findD(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMap_findD___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Std_HashMap_findD___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_findD___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_HashMap_find_x21_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Std_HashMap_find_x21_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMap_find_x21_match__1___rarg), 3, 0);
return x_3;
}
}
static lean_object* _init_l_Std_HashMap_find_x21___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Std.Data.HashMap");
return x_1;
}
}
static lean_object* _init_l_Std_HashMap_find_x21___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Std.HashMap.find!");
return x_1;
}
}
static lean_object* _init_l_Std_HashMap_find_x21___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("key is not in the map");
return x_1;
}
}
static lean_object* _init_l_Std_HashMap_find_x21___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Std_HashMap_find_x21___rarg___closed__1;
x_2 = l_Std_HashMap_find_x21___rarg___closed__2;
x_3 = lean_unsigned_to_nat(153u);
x_4 = lean_unsigned_to_nat(14u);
x_5 = l_Std_HashMap_find_x21___rarg___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Std_HashMap_find_x21___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMapImp_find_x3f___rarg(x_1, x_2, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Std_HashMap_find_x21___rarg___closed__4;
x_8 = lean_panic_fn(x_3, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_3);
x_9 = lean_ctor_get(x_6, 0);
lean_inc(x_9);
lean_dec(x_6);
return x_9;
}
}
}
lean_object* l_Std_HashMap_find_x21(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMap_find_x21___rarg___boxed), 5, 0);
return x_3;
}
}
lean_object* l_Std_HashMap_find_x21___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_find_x21___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Std_HashMap_getOp___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMapImp_find_x3f___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_HashMap_getOp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMap_getOp___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMap_getOp___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_getOp___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMap_contains_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
lean_object* l_Std_HashMap_contains_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_HashMap_contains_match__1___rarg), 2, 0);
return x_6;
}
}
lean_object* l_Std_HashMap_contains_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_contains_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
uint8_t l_Std_HashMap_contains___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l_Std_HashMapImp_contains___rarg(x_1, x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Std_HashMap_contains(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_HashMap_contains___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMap_contains___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = l_Std_HashMap_contains___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_Std_HashMap_foldM_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
lean_object* l_Std_HashMap_foldM_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_HashMap_foldM_match__1___rarg), 2, 0);
return x_6;
}
}
lean_object* l_Std_HashMap_foldM_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_foldM_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg___lambda__1(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = 1;
x_8 = x_1 + x_7;
x_9 = l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg(x_2, x_3, x_4, x_8, x_5, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_4 == x_5;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_array_uget(x_3, x_4);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Std_AssocList_foldlM___rarg(x_1, x_2, x_6, x_9);
x_11 = lean_box_usize(x_4);
x_12 = lean_box_usize(x_5);
x_13 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg___lambda__1___boxed), 6, 5);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_1);
lean_closure_set(x_13, 2, x_2);
lean_closure_set(x_13, 3, x_3);
lean_closure_set(x_13, 4, x_12);
x_14 = lean_apply_4(x_8, lean_box(0), lean_box(0), x_10, x_13);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_ctor_get(x_1, 0);
lean_inc(x_15);
lean_dec(x_1);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_apply_2(x_16, lean_box(0), x_6);
return x_17;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg___boxed), 6, 0);
return x_5;
}
}
lean_object* l_Std_HashMap_foldM___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_3);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = lean_nat_dec_le(x_6, x_6);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_apply_2(x_14, lean_box(0), x_3);
return x_15;
}
else
{
size_t x_16; size_t x_17; lean_object* x_18; 
x_16 = 0;
x_17 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_18 = l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg(x_1, x_2, x_5, x_16, x_17, x_3);
return x_18;
}
}
}
}
lean_object* l_Std_HashMap_foldM(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_closure((void*)(l_Std_HashMap_foldM___rarg), 4, 0);
return x_7;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg___lambda__1(x_7, x_2, x_3, x_4, x_8, x_6);
return x_9;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_9 = l_Array_foldlMUnsafe_fold___at_Std_HashMap_foldM___spec__1___rarg(x_1, x_2, x_3, x_7, x_8, x_6);
return x_9;
}
}
lean_object* l_Std_HashMap_foldM___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_HashMap_foldM(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Std_HashMap_fold_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_2, x_1, lean_box(0));
return x_3;
}
}
lean_object* l_Std_HashMap_fold_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_HashMap_fold_match__1___rarg), 2, 0);
return x_6;
}
}
lean_object* l_Std_HashMap_fold_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_fold_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_fold___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 2);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
x_7 = lean_apply_3(x_1, x_2, x_4, x_5);
x_2 = x_7;
x_3 = x_6;
goto _start;
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_fold___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Std_AssocList_foldlM___at_Std_HashMap_fold___spec__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_fold___spec__2___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
lean_inc(x_1);
x_8 = l_Std_AssocList_foldlM___at_Std_HashMap_fold___spec__1___rarg(x_1, x_5, x_7);
x_9 = 1;
x_10 = x_3 + x_9;
x_3 = x_10;
x_5 = x_8;
goto _start;
}
else
{
lean_dec(x_1);
return x_5;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_fold___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMap_fold___spec__2___rarg___boxed), 5, 0);
return x_4;
}
}
lean_object* l_Std_HashMap_fold___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 1);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_8; 
x_8 = lean_nat_dec_le(x_5, x_5);
if (x_8 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_2;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_11 = l_Array_foldlMUnsafe_fold___at_Std_HashMap_fold___spec__2___rarg(x_1, x_4, x_9, x_10, x_2);
return x_11;
}
}
}
}
lean_object* l_Std_HashMap_fold(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_HashMap_fold___rarg___boxed), 3, 0);
return x_6;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_fold___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Std_HashMap_fold___spec__2___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_Std_HashMap_fold___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_HashMap_fold___rarg(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Std_HashMap_fold___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_fold(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_HashMap_size_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_3(x_2, x_3, x_4, lean_box(0));
return x_5;
}
}
lean_object* l_Std_HashMap_size_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Std_HashMap_size_match__1___rarg), 2, 0);
return x_6;
}
}
lean_object* l_Std_HashMap_size_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Std_HashMap_size_match__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Std_HashMap_size___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Std_HashMap_size(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMap_size___rarg___boxed), 1, 0);
return x_5;
}
}
lean_object* l_Std_HashMap_size___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_HashMap_size___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_HashMap_size___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_size(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
uint8_t l_Std_HashMap_isEmpty___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
return x_4;
}
}
lean_object* l_Std_HashMap_isEmpty(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMap_isEmpty___rarg___boxed), 1, 0);
return x_5;
}
}
lean_object* l_Std_HashMap_isEmpty___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Std_HashMap_isEmpty___rarg(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Std_HashMap_isEmpty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_isEmpty(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMap_empty(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_instInhabitedHashMap___closed__1;
return x_5;
}
}
lean_object* l_Std_HashMap_empty___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_empty(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toList___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_1);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toList___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_AssocList_foldlM___at_Std_HashMap_toList___spec__1___rarg___boxed), 2, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toList___spec__2___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_AssocList_foldlM___at_Std_HashMap_toList___spec__1___rarg(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = x_2 + x_8;
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toList___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMap_toList___spec__2___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMap_toList___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_2 = lean_box(0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_array_get_size(x_3);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_lt(x_5, x_4);
if (x_6 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_4, x_4);
if (x_7 == 0)
{
lean_dec(x_4);
return x_2;
}
else
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = 0;
x_9 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_10 = l_Array_foldlMUnsafe_fold___at_Std_HashMap_toList___spec__2___rarg(x_3, x_8, x_9, x_2);
return x_10;
}
}
}
}
lean_object* l_Std_HashMap_toList(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMap_toList___rarg___boxed), 1, 0);
return x_5;
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toList___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_foldlM___at_Std_HashMap_toList___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toList___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Std_HashMap_toList___spec__2___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_HashMap_toList___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_HashMap_toList___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_HashMap_toList___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_toList(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toArray___spec__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_ctor_get(x_2, 2);
lean_inc(x_4);
lean_inc(x_3);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_3);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_array_push(x_1, x_6);
x_1 = x_7;
x_2 = x_5;
goto _start;
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toArray___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Std_AssocList_foldlM___at_Std_HashMap_toArray___spec__1___rarg___boxed), 2, 0);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toArray___spec__2___rarg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_2 == x_3;
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_2);
x_7 = l_Std_AssocList_foldlM___at_Std_HashMap_toArray___spec__1___rarg(x_4, x_6);
lean_dec(x_6);
x_8 = 1;
x_9 = x_2 + x_8;
x_2 = x_9;
x_4 = x_7;
goto _start;
}
else
{
return x_4;
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toArray___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Std_HashMap_toArray___spec__2___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_Std_HashMap_toArray___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_array_get_size(x_2);
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_lt(x_4, x_3);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = l_Array_empty___closed__1;
return x_6;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_le(x_3, x_3);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_3);
x_8 = l_Array_empty___closed__1;
return x_8;
}
else
{
size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; 
x_9 = 0;
x_10 = lean_usize_of_nat(x_3);
lean_dec(x_3);
x_11 = l_Array_empty___closed__1;
x_12 = l_Array_foldlMUnsafe_fold___at_Std_HashMap_toArray___spec__2___rarg(x_2, x_9, x_10, x_11);
return x_12;
}
}
}
}
lean_object* l_Std_HashMap_toArray(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMap_toArray___rarg___boxed), 1, 0);
return x_5;
}
}
lean_object* l_Std_AssocList_foldlM___at_Std_HashMap_toArray___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Std_AssocList_foldlM___at_Std_HashMap_toArray___spec__1___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Std_HashMap_toArray___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_foldlMUnsafe_fold___at_Std_HashMap_toArray___spec__2___rarg(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Std_HashMap_toArray___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_HashMap_toArray___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_HashMap_toArray___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_toArray(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Std_HashMap_numBuckets___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_array_get_size(x_2);
return x_3;
}
}
lean_object* l_Std_HashMap_numBuckets(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Std_HashMap_numBuckets___rarg___boxed), 1, 0);
return x_5;
}
}
lean_object* l_Std_HashMap_numBuckets___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Std_HashMap_numBuckets___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Std_HashMap_numBuckets___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Std_HashMap_numBuckets(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Std_Data_AssocList(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Std_Data_HashMap(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_AssocList(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Std_mkHashMapImp___rarg___closed__1 = _init_l_Std_mkHashMapImp___rarg___closed__1();
lean_mark_persistent(l_Std_mkHashMapImp___rarg___closed__1);
l_Std_mkHashMapImp___rarg___closed__2 = _init_l_Std_mkHashMapImp___rarg___closed__2();
lean_mark_persistent(l_Std_mkHashMapImp___rarg___closed__2);
l_Std_HashMap_instInhabitedHashMap___closed__1 = _init_l_Std_HashMap_instInhabitedHashMap___closed__1();
lean_mark_persistent(l_Std_HashMap_instInhabitedHashMap___closed__1);
l_Std_HashMap_find_x21___rarg___closed__1 = _init_l_Std_HashMap_find_x21___rarg___closed__1();
lean_mark_persistent(l_Std_HashMap_find_x21___rarg___closed__1);
l_Std_HashMap_find_x21___rarg___closed__2 = _init_l_Std_HashMap_find_x21___rarg___closed__2();
lean_mark_persistent(l_Std_HashMap_find_x21___rarg___closed__2);
l_Std_HashMap_find_x21___rarg___closed__3 = _init_l_Std_HashMap_find_x21___rarg___closed__3();
lean_mark_persistent(l_Std_HashMap_find_x21___rarg___closed__3);
l_Std_HashMap_find_x21___rarg___closed__4 = _init_l_Std_HashMap_find_x21___rarg___closed__4();
lean_mark_persistent(l_Std_HashMap_find_x21___rarg___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif