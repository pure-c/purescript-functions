#include <purescript.h>

#define MK_FN(N, SCOPE, ARG, ARGS)\
	static ANY _fun_##N(const struct purs_scope *, ANY, va_list);\
	PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn ## N, fn) {	\
		const struct purs_scope * scope = purs_scope_new(1, fn); \
		const purs_cont_t * cont = purs_cont_new(scope, _fun_ ## N); \
		PURS_RC_RELEASE(scope);					\
		return purs_any_cont(cont);				\
	}								\
	static ANY _fun_##N(const struct purs_scope * SCOPE, ANY ARG, va_list ARGS)


MK_FN(0, scope, a, args) {
	return purs_any_app(scope->bindings[0], purs_any_null);
}


MK_FN(2, scope, a, args) {
	purs_any_t fn1 = scope->bindings[0];
	purs_any_t fn2 = purs_any_app(fn1, a);
	purs_any_t ret = purs_any_app(fn2, va_arg(args, purs_any_t));
	PURS_ANY_RELEASE(fn2);
	return ret;
}

MK_FN(3, scope, a, args) {
	purs_any_t fn1 = scope->bindings[0];
	purs_any_t fn2 = purs_any_app(fn1, a);
	purs_any_t fn3 = purs_any_app(fn2, va_arg(args, purs_any_t));
	purs_any_t ret = purs_any_app(fn3, va_arg(args, purs_any_t));
	PURS_ANY_RELEASE(fn2);
	PURS_ANY_RELEASE(fn3);
	return ret;
}

MK_FN(4, scope, a, args) {
	purs_any_t fn1 = scope->bindings[0];
	purs_any_t fn2 = purs_any_app(fn1, a);
	purs_any_t fn3 = purs_any_app(fn2, va_arg(args, purs_any_t));
	purs_any_t fn4 = purs_any_app(fn3, va_arg(args, purs_any_t));
	purs_any_t ret = purs_any_app(fn4, va_arg(args, purs_any_t));
	PURS_ANY_RELEASE(fn2);
	PURS_ANY_RELEASE(fn3);
	PURS_ANY_RELEASE(fn4);
	return ret;
}

MK_FN(5, scope, a, args) {
	purs_any_t fn1 = scope->bindings[0];
	purs_any_t fn2 = purs_any_app(fn1, a);
	purs_any_t fn3 = purs_any_app(fn2, va_arg(args, purs_any_t));
	purs_any_t fn4 = purs_any_app(fn3, va_arg(args, purs_any_t));
	purs_any_t fn5 = purs_any_app(fn4, va_arg(args, purs_any_t));
	purs_any_t ret = purs_any_app(fn5, va_arg(args, purs_any_t));
	PURS_ANY_RELEASE(fn2);
	PURS_ANY_RELEASE(fn3);
	PURS_ANY_RELEASE(fn4);
	PURS_ANY_RELEASE(fn5);
	return ret;
}

MK_FN(6, scope, a, args) {
	purs_any_t fn1 = scope->bindings[0];
	purs_any_t fn2 = purs_any_app(fn1, a);
	purs_any_t fn3 = purs_any_app(fn2, va_arg(args, purs_any_t));
	purs_any_t fn4 = purs_any_app(fn3, va_arg(args, purs_any_t));
	purs_any_t fn5 = purs_any_app(fn4, va_arg(args, purs_any_t));
	purs_any_t fn6 = purs_any_app(fn5, va_arg(args, purs_any_t));
	purs_any_t ret = purs_any_app(fn6, va_arg(args, purs_any_t));
	PURS_ANY_RELEASE(fn2);
	PURS_ANY_RELEASE(fn3);
	PURS_ANY_RELEASE(fn4);
	PURS_ANY_RELEASE(fn5);
	PURS_ANY_RELEASE(fn6);
	return ret;
}

MK_FN(7, scope, a, args) {
	purs_any_t fn1 = scope->bindings[0];
	purs_any_t fn2 = purs_any_app(fn1, a);
	purs_any_t fn3 = purs_any_app(fn2, va_arg(args, purs_any_t));
	purs_any_t fn4 = purs_any_app(fn3, va_arg(args, purs_any_t));
	purs_any_t fn5 = purs_any_app(fn4, va_arg(args, purs_any_t));
	purs_any_t fn6 = purs_any_app(fn5, va_arg(args, purs_any_t));
	purs_any_t fn7 = purs_any_app(fn6, va_arg(args, purs_any_t));
	purs_any_t ret = purs_any_app(fn7, va_arg(args, purs_any_t));
	PURS_ANY_RELEASE(fn2);
	PURS_ANY_RELEASE(fn3);
	PURS_ANY_RELEASE(fn4);
	PURS_ANY_RELEASE(fn5);
	PURS_ANY_RELEASE(fn6);
	PURS_ANY_RELEASE(fn7);
	return ret;
}

MK_FN(8, scope, a, args) {
	purs_any_t fn1 = scope->bindings[0];
	purs_any_t fn2 = purs_any_app(fn1, a);
	purs_any_t fn3 = purs_any_app(fn2, va_arg(args, purs_any_t));
	purs_any_t fn4 = purs_any_app(fn3, va_arg(args, purs_any_t));
	purs_any_t fn5 = purs_any_app(fn4, va_arg(args, purs_any_t));
	purs_any_t fn6 = purs_any_app(fn5, va_arg(args, purs_any_t));
	purs_any_t fn7 = purs_any_app(fn6, va_arg(args, purs_any_t));
	purs_any_t fn8 = purs_any_app(fn7, va_arg(args, purs_any_t));
	purs_any_t ret = purs_any_app(fn8, va_arg(args, purs_any_t));
	PURS_ANY_RELEASE(fn2);
	PURS_ANY_RELEASE(fn3);
	PURS_ANY_RELEASE(fn4);
	PURS_ANY_RELEASE(fn5);
	PURS_ANY_RELEASE(fn6);
	PURS_ANY_RELEASE(fn7);
	PURS_ANY_RELEASE(fn8);
	return ret;
}

MK_FN(9, scope, a, args) {
	purs_any_t fn1 = scope->bindings[0];
	purs_any_t fn2 = purs_any_app(fn1, a);
	purs_any_t fn3 = purs_any_app(fn2, va_arg(args, purs_any_t));
	purs_any_t fn4 = purs_any_app(fn3, va_arg(args, purs_any_t));
	purs_any_t fn5 = purs_any_app(fn4, va_arg(args, purs_any_t));
	purs_any_t fn6 = purs_any_app(fn5, va_arg(args, purs_any_t));
	purs_any_t fn7 = purs_any_app(fn6, va_arg(args, purs_any_t));
	purs_any_t fn8 = purs_any_app(fn7, va_arg(args, purs_any_t));
	purs_any_t fn9 = purs_any_app(fn8, va_arg(args, purs_any_t));
	purs_any_t ret = purs_any_app(fn9, va_arg(args, purs_any_t));
	PURS_ANY_RELEASE(fn2);
	PURS_ANY_RELEASE(fn3);
	PURS_ANY_RELEASE(fn4);
	PURS_ANY_RELEASE(fn5);
	PURS_ANY_RELEASE(fn6);
	PURS_ANY_RELEASE(fn7);
	PURS_ANY_RELEASE(fn8);
	PURS_ANY_RELEASE(fn9);
	return ret;
}

MK_FN(10, scope, a, args) {
	purs_any_t fn1  = scope->bindings[0];
	purs_any_t fn2  = purs_any_app(fn1, va_arg(args, purs_any_t));
	purs_any_t fn3  = purs_any_app(fn2, va_arg(args, purs_any_t));
	purs_any_t fn4  = purs_any_app(fn3, va_arg(args, purs_any_t));
	purs_any_t fn5  = purs_any_app(fn4, va_arg(args, purs_any_t));
	purs_any_t fn6  = purs_any_app(fn5, va_arg(args, purs_any_t));
	purs_any_t fn7  = purs_any_app(fn6, va_arg(args, purs_any_t));
	purs_any_t fn8  = purs_any_app(fn7, va_arg(args, purs_any_t));
	purs_any_t fn9  = purs_any_app(fn8, va_arg(args, purs_any_t));
	purs_any_t fn10 = purs_any_app(fn9, va_arg(args, purs_any_t));
	purs_any_t ret  = purs_any_app(fn10, va_arg(args, purs_any_t));
	PURS_ANY_RELEASE(fn2);
	PURS_ANY_RELEASE(fn3);
	PURS_ANY_RELEASE(fn4);
	PURS_ANY_RELEASE(fn5);
	PURS_ANY_RELEASE(fn6);
	PURS_ANY_RELEASE(fn7);
	PURS_ANY_RELEASE(fn8);
	PURS_ANY_RELEASE(fn9);
	PURS_ANY_RELEASE(fn10);
	return ret;
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_runFn0, fn) {
	return purs_any_app(fn, purs_any_null);
}

PURS_FFI_FUNC_3(Data_Function_Uncurried_runFn2, fn, a, b) {
	return purs_any_app(fn, a, b);
}

PURS_FFI_FUNC_4(Data_Function_Uncurried_runFn3, fn, a, b, c) {
	return purs_any_app(fn, a, b, c);
}

PURS_FFI_FUNC_5(Data_Function_Uncurried_runFn4, fn, a, b, c, d) {
	return purs_any_app(fn, a, b, c, d);
}

PURS_FFI_FUNC_6(Data_Function_Uncurried_runFn5, fn, a, b, c, d, e) {
	return purs_any_app(fn, a, b, c, d, e);
}

PURS_FFI_FUNC_7(Data_Function_Uncurried_runFn6, fn, a, b, c, d, e, f) {
	return purs_any_app(fn, a, b, c, d, e, f);
}

PURS_FFI_FUNC_8(Data_Function_Uncurried_runFn7, fn, a, b, c, d, e, f, g) {
	return purs_any_app(fn, a, b, c, d, e, f, g);
}

PURS_FFI_FUNC_9(Data_Function_Uncurried_runFn8, fn, a, b, c, d, e, f, g, h) {
	return purs_any_app(fn, a, b, c, d, e, f, g, h);
}

PURS_FFI_FUNC_10(Data_Function_Uncurried_runFn9, fn, a, b, c, d, e, f, g, h, i) {
	return purs_any_app(fn, a, b, c, d, e, f, g, h, i);
}

PURS_FFI_FUNC_11(Data_Function_Uncurried_runFn10, fn, a, b, c, d, e, f, g, h, i, j) {
	return purs_any_app(fn, a, b, c, d, e, f, g, h, i, j);
}
