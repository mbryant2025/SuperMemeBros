#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000015 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000017 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000018 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000019 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001B System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000001C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001E System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001F System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000020 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000021 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000023 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000024 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000025 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000026 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000028 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000029 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002E System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000030 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000032 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000033 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000034 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000035 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000036 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000039 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003C System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003D System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003E System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000041 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000042 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000043 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000044 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000045 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000046 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000047 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000048 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000049 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000004A TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000004B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000004C System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000004D System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000004E System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000004F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000050 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000051 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000052 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000053 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000054 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000055 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000056 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000057 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000058 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000059 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000005A System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000005B System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000005C System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000005D System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000005E System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000005F System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000060 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000061 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000062 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000063 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000064 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000065 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000066 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000067 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000068 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000069 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000006A System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000006B System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000006C System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000006D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000006E System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000006F System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000070 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000071 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000072 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000073 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000074 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000075 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000076 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000077 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000078 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000079 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000007A System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000007C System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000007D System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000007E System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000007F System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000080 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000081 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000082 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000083 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[131] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[131] = 
{
	3060,
	3177,
	3177,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[43] = 
{
	{ 0x02000004, { 65, 4 } },
	{ 0x02000005, { 69, 9 } },
	{ 0x02000006, { 80, 7 } },
	{ 0x02000007, { 89, 10 } },
	{ 0x02000008, { 101, 11 } },
	{ 0x02000009, { 115, 9 } },
	{ 0x0200000A, { 127, 12 } },
	{ 0x0200000B, { 142, 1 } },
	{ 0x0200000C, { 143, 2 } },
	{ 0x0200000D, { 145, 12 } },
	{ 0x0200000F, { 157, 3 } },
	{ 0x02000010, { 162, 5 } },
	{ 0x02000011, { 167, 7 } },
	{ 0x02000012, { 174, 3 } },
	{ 0x02000013, { 177, 7 } },
	{ 0x02000014, { 184, 4 } },
	{ 0x02000015, { 188, 21 } },
	{ 0x02000017, { 209, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 1 } },
	{ 0x06000009, { 31, 2 } },
	{ 0x0600000A, { 33, 2 } },
	{ 0x0600000B, { 35, 1 } },
	{ 0x0600000C, { 36, 3 } },
	{ 0x0600000D, { 39, 2 } },
	{ 0x0600000E, { 41, 4 } },
	{ 0x0600000F, { 45, 4 } },
	{ 0x06000010, { 49, 3 } },
	{ 0x06000011, { 52, 1 } },
	{ 0x06000012, { 53, 3 } },
	{ 0x06000013, { 56, 2 } },
	{ 0x06000014, { 58, 2 } },
	{ 0x06000015, { 60, 5 } },
	{ 0x06000025, { 78, 2 } },
	{ 0x0600002A, { 87, 2 } },
	{ 0x0600002F, { 99, 2 } },
	{ 0x06000035, { 112, 3 } },
	{ 0x0600003A, { 124, 3 } },
	{ 0x0600003F, { 139, 3 } },
	{ 0x06000053, { 160, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[211] = 
{
	{ (Il2CppRGCTXDataType)2, 1485 },
	{ (Il2CppRGCTXDataType)3, 5618 },
	{ (Il2CppRGCTXDataType)2, 2484 },
	{ (Il2CppRGCTXDataType)2, 2134 },
	{ (Il2CppRGCTXDataType)3, 11011 },
	{ (Il2CppRGCTXDataType)2, 1569 },
	{ (Il2CppRGCTXDataType)2, 2141 },
	{ (Il2CppRGCTXDataType)3, 11040 },
	{ (Il2CppRGCTXDataType)2, 2136 },
	{ (Il2CppRGCTXDataType)3, 11023 },
	{ (Il2CppRGCTXDataType)2, 1486 },
	{ (Il2CppRGCTXDataType)3, 5619 },
	{ (Il2CppRGCTXDataType)2, 2508 },
	{ (Il2CppRGCTXDataType)2, 2143 },
	{ (Il2CppRGCTXDataType)3, 11052 },
	{ (Il2CppRGCTXDataType)2, 1586 },
	{ (Il2CppRGCTXDataType)2, 2151 },
	{ (Il2CppRGCTXDataType)3, 11082 },
	{ (Il2CppRGCTXDataType)2, 2147 },
	{ (Il2CppRGCTXDataType)3, 11066 },
	{ (Il2CppRGCTXDataType)2, 525 },
	{ (Il2CppRGCTXDataType)3, 24 },
	{ (Il2CppRGCTXDataType)3, 25 },
	{ (Il2CppRGCTXDataType)2, 963 },
	{ (Il2CppRGCTXDataType)3, 4168 },
	{ (Il2CppRGCTXDataType)2, 526 },
	{ (Il2CppRGCTXDataType)3, 30 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)2, 971 },
	{ (Il2CppRGCTXDataType)3, 4170 },
	{ (Il2CppRGCTXDataType)3, 12971 },
	{ (Il2CppRGCTXDataType)2, 529 },
	{ (Il2CppRGCTXDataType)3, 50 },
	{ (Il2CppRGCTXDataType)2, 1900 },
	{ (Il2CppRGCTXDataType)3, 8872 },
	{ (Il2CppRGCTXDataType)3, 4630 },
	{ (Il2CppRGCTXDataType)2, 593 },
	{ (Il2CppRGCTXDataType)3, 665 },
	{ (Il2CppRGCTXDataType)3, 666 },
	{ (Il2CppRGCTXDataType)2, 1570 },
	{ (Il2CppRGCTXDataType)3, 6121 },
	{ (Il2CppRGCTXDataType)2, 1413 },
	{ (Il2CppRGCTXDataType)2, 1091 },
	{ (Il2CppRGCTXDataType)2, 1176 },
	{ (Il2CppRGCTXDataType)2, 1253 },
	{ (Il2CppRGCTXDataType)2, 1414 },
	{ (Il2CppRGCTXDataType)2, 1092 },
	{ (Il2CppRGCTXDataType)2, 1177 },
	{ (Il2CppRGCTXDataType)2, 1254 },
	{ (Il2CppRGCTXDataType)2, 1178 },
	{ (Il2CppRGCTXDataType)2, 1255 },
	{ (Il2CppRGCTXDataType)3, 4169 },
	{ (Il2CppRGCTXDataType)2, 1169 },
	{ (Il2CppRGCTXDataType)2, 1170 },
	{ (Il2CppRGCTXDataType)2, 1251 },
	{ (Il2CppRGCTXDataType)3, 4167 },
	{ (Il2CppRGCTXDataType)2, 1090 },
	{ (Il2CppRGCTXDataType)2, 1175 },
	{ (Il2CppRGCTXDataType)2, 1089 },
	{ (Il2CppRGCTXDataType)3, 12947 },
	{ (Il2CppRGCTXDataType)3, 3677 },
	{ (Il2CppRGCTXDataType)2, 857 },
	{ (Il2CppRGCTXDataType)2, 1172 },
	{ (Il2CppRGCTXDataType)2, 1252 },
	{ (Il2CppRGCTXDataType)2, 1316 },
	{ (Il2CppRGCTXDataType)3, 5620 },
	{ (Il2CppRGCTXDataType)3, 5622 },
	{ (Il2CppRGCTXDataType)2, 378 },
	{ (Il2CppRGCTXDataType)3, 5621 },
	{ (Il2CppRGCTXDataType)3, 5630 },
	{ (Il2CppRGCTXDataType)2, 1489 },
	{ (Il2CppRGCTXDataType)2, 2137 },
	{ (Il2CppRGCTXDataType)3, 11024 },
	{ (Il2CppRGCTXDataType)3, 5631 },
	{ (Il2CppRGCTXDataType)2, 1216 },
	{ (Il2CppRGCTXDataType)2, 1276 },
	{ (Il2CppRGCTXDataType)3, 4177 },
	{ (Il2CppRGCTXDataType)3, 12936 },
	{ (Il2CppRGCTXDataType)2, 2148 },
	{ (Il2CppRGCTXDataType)3, 11067 },
	{ (Il2CppRGCTXDataType)3, 5623 },
	{ (Il2CppRGCTXDataType)2, 1488 },
	{ (Il2CppRGCTXDataType)2, 2135 },
	{ (Il2CppRGCTXDataType)3, 11012 },
	{ (Il2CppRGCTXDataType)3, 4176 },
	{ (Il2CppRGCTXDataType)3, 5624 },
	{ (Il2CppRGCTXDataType)3, 12935 },
	{ (Il2CppRGCTXDataType)2, 2144 },
	{ (Il2CppRGCTXDataType)3, 11053 },
	{ (Il2CppRGCTXDataType)3, 5637 },
	{ (Il2CppRGCTXDataType)2, 1490 },
	{ (Il2CppRGCTXDataType)2, 2142 },
	{ (Il2CppRGCTXDataType)3, 11041 },
	{ (Il2CppRGCTXDataType)3, 6173 },
	{ (Il2CppRGCTXDataType)3, 2950 },
	{ (Il2CppRGCTXDataType)3, 4178 },
	{ (Il2CppRGCTXDataType)3, 2949 },
	{ (Il2CppRGCTXDataType)3, 5638 },
	{ (Il2CppRGCTXDataType)3, 12937 },
	{ (Il2CppRGCTXDataType)2, 2152 },
	{ (Il2CppRGCTXDataType)3, 11083 },
	{ (Il2CppRGCTXDataType)3, 5651 },
	{ (Il2CppRGCTXDataType)2, 1492 },
	{ (Il2CppRGCTXDataType)2, 2150 },
	{ (Il2CppRGCTXDataType)3, 11069 },
	{ (Il2CppRGCTXDataType)3, 5652 },
	{ (Il2CppRGCTXDataType)2, 1219 },
	{ (Il2CppRGCTXDataType)2, 1279 },
	{ (Il2CppRGCTXDataType)3, 4182 },
	{ (Il2CppRGCTXDataType)3, 4181 },
	{ (Il2CppRGCTXDataType)2, 2139 },
	{ (Il2CppRGCTXDataType)3, 11026 },
	{ (Il2CppRGCTXDataType)3, 12941 },
	{ (Il2CppRGCTXDataType)2, 2149 },
	{ (Il2CppRGCTXDataType)3, 11068 },
	{ (Il2CppRGCTXDataType)3, 5644 },
	{ (Il2CppRGCTXDataType)2, 1491 },
	{ (Il2CppRGCTXDataType)2, 2146 },
	{ (Il2CppRGCTXDataType)3, 11055 },
	{ (Il2CppRGCTXDataType)3, 4180 },
	{ (Il2CppRGCTXDataType)3, 4179 },
	{ (Il2CppRGCTXDataType)3, 5645 },
	{ (Il2CppRGCTXDataType)2, 2138 },
	{ (Il2CppRGCTXDataType)3, 11025 },
	{ (Il2CppRGCTXDataType)3, 12940 },
	{ (Il2CppRGCTXDataType)2, 2145 },
	{ (Il2CppRGCTXDataType)3, 11054 },
	{ (Il2CppRGCTXDataType)3, 5658 },
	{ (Il2CppRGCTXDataType)2, 1493 },
	{ (Il2CppRGCTXDataType)2, 2154 },
	{ (Il2CppRGCTXDataType)3, 11085 },
	{ (Il2CppRGCTXDataType)3, 6174 },
	{ (Il2CppRGCTXDataType)3, 2952 },
	{ (Il2CppRGCTXDataType)3, 4184 },
	{ (Il2CppRGCTXDataType)3, 4183 },
	{ (Il2CppRGCTXDataType)3, 2951 },
	{ (Il2CppRGCTXDataType)3, 5659 },
	{ (Il2CppRGCTXDataType)2, 2140 },
	{ (Il2CppRGCTXDataType)3, 11027 },
	{ (Il2CppRGCTXDataType)3, 12942 },
	{ (Il2CppRGCTXDataType)2, 2153 },
	{ (Il2CppRGCTXDataType)3, 11084 },
	{ (Il2CppRGCTXDataType)3, 4173 },
	{ (Il2CppRGCTXDataType)3, 4174 },
	{ (Il2CppRGCTXDataType)3, 4185 },
	{ (Il2CppRGCTXDataType)3, 53 },
	{ (Il2CppRGCTXDataType)3, 52 },
	{ (Il2CppRGCTXDataType)2, 1211 },
	{ (Il2CppRGCTXDataType)2, 1272 },
	{ (Il2CppRGCTXDataType)3, 4175 },
	{ (Il2CppRGCTXDataType)2, 1225 },
	{ (Il2CppRGCTXDataType)2, 1290 },
	{ (Il2CppRGCTXDataType)3, 55 },
	{ (Il2CppRGCTXDataType)2, 485 },
	{ (Il2CppRGCTXDataType)2, 530 },
	{ (Il2CppRGCTXDataType)3, 51 },
	{ (Il2CppRGCTXDataType)3, 54 },
	{ (Il2CppRGCTXDataType)2, 527 },
	{ (Il2CppRGCTXDataType)3, 36 },
	{ (Il2CppRGCTXDataType)3, 8859 },
	{ (Il2CppRGCTXDataType)2, 1901 },
	{ (Il2CppRGCTXDataType)3, 8873 },
	{ (Il2CppRGCTXDataType)2, 594 },
	{ (Il2CppRGCTXDataType)3, 667 },
	{ (Il2CppRGCTXDataType)3, 8865 },
	{ (Il2CppRGCTXDataType)3, 2927 },
	{ (Il2CppRGCTXDataType)2, 398 },
	{ (Il2CppRGCTXDataType)3, 8860 },
	{ (Il2CppRGCTXDataType)2, 1897 },
	{ (Il2CppRGCTXDataType)3, 693 },
	{ (Il2CppRGCTXDataType)2, 606 },
	{ (Il2CppRGCTXDataType)2, 840 },
	{ (Il2CppRGCTXDataType)3, 2933 },
	{ (Il2CppRGCTXDataType)3, 8861 },
	{ (Il2CppRGCTXDataType)3, 2922 },
	{ (Il2CppRGCTXDataType)3, 2923 },
	{ (Il2CppRGCTXDataType)3, 2921 },
	{ (Il2CppRGCTXDataType)3, 2924 },
	{ (Il2CppRGCTXDataType)2, 836 },
	{ (Il2CppRGCTXDataType)2, 2553 },
	{ (Il2CppRGCTXDataType)3, 4172 },
	{ (Il2CppRGCTXDataType)3, 2926 },
	{ (Il2CppRGCTXDataType)2, 1157 },
	{ (Il2CppRGCTXDataType)3, 2925 },
	{ (Il2CppRGCTXDataType)2, 1093 },
	{ (Il2CppRGCTXDataType)2, 2511 },
	{ (Il2CppRGCTXDataType)2, 1191 },
	{ (Il2CppRGCTXDataType)2, 1256 },
	{ (Il2CppRGCTXDataType)3, 3693 },
	{ (Il2CppRGCTXDataType)2, 865 },
	{ (Il2CppRGCTXDataType)3, 4480 },
	{ (Il2CppRGCTXDataType)3, 4481 },
	{ (Il2CppRGCTXDataType)3, 4486 },
	{ (Il2CppRGCTXDataType)2, 1324 },
	{ (Il2CppRGCTXDataType)3, 4483 },
	{ (Il2CppRGCTXDataType)3, 13351 },
	{ (Il2CppRGCTXDataType)2, 841 },
	{ (Il2CppRGCTXDataType)3, 2943 },
	{ (Il2CppRGCTXDataType)1, 1154 },
	{ (Il2CppRGCTXDataType)2, 2521 },
	{ (Il2CppRGCTXDataType)3, 4482 },
	{ (Il2CppRGCTXDataType)1, 2521 },
	{ (Il2CppRGCTXDataType)1, 1324 },
	{ (Il2CppRGCTXDataType)2, 2567 },
	{ (Il2CppRGCTXDataType)2, 2521 },
	{ (Il2CppRGCTXDataType)3, 4487 },
	{ (Il2CppRGCTXDataType)3, 4485 },
	{ (Il2CppRGCTXDataType)3, 4484 },
	{ (Il2CppRGCTXDataType)2, 280 },
	{ (Il2CppRGCTXDataType)3, 2953 },
	{ (Il2CppRGCTXDataType)2, 387 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	131,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	43,
	s_rgctxIndices,
	211,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
