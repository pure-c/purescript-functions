#include <purescript.h>

#define DFU_IMPL_FN(N)\
    PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn ## N, fn) {\
	    const purs_scope_t *scope = purs_scope_new(1, fn);\
	    purs_any_t ret = purs_any_cont(purs_cont_new(scope, _fun_ ## N));\
	    PURS_RC_RELEASE(scope);\
	    return ret;\
    }

static purs_any_t _fun_0 (const purs_scope_t *scope, purs_any_t _, va_list __) {
	purs_any_t fn = purs_scope_binding_at(scope, 0);
	return purs_any_app(fn, purs_any_null);
}

DFU_IMPL_FN(0)

static purs_any_t _fun_2 (const purs_scope_t *scope, purs_any_t a, va_list args) {
	purs_any_t
		fn = purs_scope_binding_at(scope, 0),
		b = va_arg(args, purs_any_t),
		tmp1 = purs_any_app(fn,   a),
		ret  = purs_any_app(tmp1, b);
	PURS_ANY_RELEASE(tmp1);
	return ret;
}

DFU_IMPL_FN(2)

static purs_any_t _fun_3 (const purs_scope_t *scope, purs_any_t a, va_list args) {
	purs_any_t
		fn = purs_scope_binding_at(scope, 0),
		b = va_arg(args, purs_any_t),
		c = va_arg(args, purs_any_t),
		tmp1 = purs_any_app(fn,   a),
		tmp2 = purs_any_app(tmp1, b),
		ret  = purs_any_app(tmp2, c);
	PURS_ANY_RELEASE(tmp2);
	PURS_ANY_RELEASE(tmp1);
	return ret;
}

DFU_IMPL_FN(3)

static purs_any_t _fun_4 (const purs_scope_t *scope, purs_any_t a, va_list args) {
	purs_any_t
		fn = purs_scope_binding_at(scope, 0),
		b = va_arg(args, purs_any_t),
		c = va_arg(args, purs_any_t),
		d = va_arg(args, purs_any_t),
		tmp1 = purs_any_app(fn,   a),
		tmp2 = purs_any_app(tmp1, b),
		tmp3 = purs_any_app(tmp2, c),
		ret  = purs_any_app(tmp3, d);
	PURS_ANY_RELEASE(tmp3);
	PURS_ANY_RELEASE(tmp2);
	PURS_ANY_RELEASE(tmp1);
	return ret;
}

DFU_IMPL_FN(4)

static purs_any_t _fun_5 (const purs_scope_t *scope, purs_any_t a, va_list args) {
	purs_any_t
		fn = purs_scope_binding_at(scope, 0),
		b = va_arg(args, purs_any_t),
		c = va_arg(args, purs_any_t),
		d = va_arg(args, purs_any_t),
		e = va_arg(args, purs_any_t),
		tmp1 = purs_any_app(fn,   a),
		tmp2 = purs_any_app(tmp1, b),
		tmp3 = purs_any_app(tmp2, c),
		tmp4 = purs_any_app(tmp3, d),
		ret  = purs_any_app(tmp4, e);
	PURS_ANY_RELEASE(tmp4);
	PURS_ANY_RELEASE(tmp3);
	PURS_ANY_RELEASE(tmp2);
	PURS_ANY_RELEASE(tmp1);
	return ret;
}

DFU_IMPL_FN(5)

static purs_any_t _fun_6 (const purs_scope_t *scope, purs_any_t a, va_list args) {
	purs_any_t
		fn = purs_scope_binding_at(scope, 0),
		b = va_arg(args, purs_any_t),
		c = va_arg(args, purs_any_t),
		d = va_arg(args, purs_any_t),
		e = va_arg(args, purs_any_t),
		f = va_arg(args, purs_any_t),
		tmp1 = purs_any_app(fn,   a),
		tmp2 = purs_any_app(tmp1, b),
		tmp3 = purs_any_app(tmp2, c),
		tmp4 = purs_any_app(tmp3, d),
		tmp5 = purs_any_app(tmp4, e),
		ret  = purs_any_app(tmp5, f);
	PURS_ANY_RELEASE(tmp5);
	PURS_ANY_RELEASE(tmp4);
	PURS_ANY_RELEASE(tmp3);
	PURS_ANY_RELEASE(tmp2);
	PURS_ANY_RELEASE(tmp1);
	return ret;
}

DFU_IMPL_FN(6)

static purs_any_t _fun_7 (const purs_scope_t *scope, purs_any_t a, va_list args) {
	purs_any_t
		fn = purs_scope_binding_at(scope, 0),
		b = va_arg(args, purs_any_t),
		c = va_arg(args, purs_any_t),
		d = va_arg(args, purs_any_t),
		e = va_arg(args, purs_any_t),
		f = va_arg(args, purs_any_t),
		g = va_arg(args, purs_any_t),
		tmp1 = purs_any_app(fn,   a),
		tmp2 = purs_any_app(tmp1, b),
		tmp3 = purs_any_app(tmp2, c),
		tmp4 = purs_any_app(tmp3, d),
		tmp5 = purs_any_app(tmp4, e),
		tmp6 = purs_any_app(tmp5, f),
		ret  = purs_any_app(tmp6, g);
	PURS_ANY_RELEASE(tmp6);
	PURS_ANY_RELEASE(tmp5);
	PURS_ANY_RELEASE(tmp4);
	PURS_ANY_RELEASE(tmp3);
	PURS_ANY_RELEASE(tmp2);
	PURS_ANY_RELEASE(tmp1);
	return ret;
}

DFU_IMPL_FN(7)

static purs_any_t _fun_8 (const purs_scope_t *scope, purs_any_t a, va_list args) {
	purs_any_t
		fn = purs_scope_binding_at(scope, 0),
		b = va_arg(args, purs_any_t),
		c = va_arg(args, purs_any_t),
		d = va_arg(args, purs_any_t),
		e = va_arg(args, purs_any_t),
		f = va_arg(args, purs_any_t),
		g = va_arg(args, purs_any_t),
		h = va_arg(args, purs_any_t),
		tmp1 = purs_any_app(fn,   a),
		tmp2 = purs_any_app(tmp1, b),
		tmp3 = purs_any_app(tmp2, c),
		tmp4 = purs_any_app(tmp3, d),
		tmp5 = purs_any_app(tmp4, e),
		tmp6 = purs_any_app(tmp5, f),
		tmp7 = purs_any_app(tmp6, g),
		ret  = purs_any_app(tmp7, h);
	PURS_ANY_RELEASE(tmp7);
	PURS_ANY_RELEASE(tmp6);
	PURS_ANY_RELEASE(tmp5);
	PURS_ANY_RELEASE(tmp4);
	PURS_ANY_RELEASE(tmp3);
	PURS_ANY_RELEASE(tmp2);
	PURS_ANY_RELEASE(tmp1);
	return ret;
}

DFU_IMPL_FN(8)

static purs_any_t _fun_9 (const purs_scope_t *scope, purs_any_t a, va_list args) {
	purs_any_t
		fn = purs_scope_binding_at(scope, 0),
		b = va_arg(args, purs_any_t),
		c = va_arg(args, purs_any_t),
		d = va_arg(args, purs_any_t),
		e = va_arg(args, purs_any_t),
		f = va_arg(args, purs_any_t),
		g = va_arg(args, purs_any_t),
		h = va_arg(args, purs_any_t),
		i = va_arg(args, purs_any_t),
		tmp1 = purs_any_app(fn,   a),
		tmp2 = purs_any_app(tmp1, b),
		tmp3 = purs_any_app(tmp2, c),
		tmp4 = purs_any_app(tmp3, d),
		tmp5 = purs_any_app(tmp4, e),
		tmp6 = purs_any_app(tmp5, f),
		tmp7 = purs_any_app(tmp6, g),
		tmp8 = purs_any_app(tmp7, h),
		ret  = purs_any_app(tmp8, i);
	PURS_ANY_RELEASE(tmp8);
	PURS_ANY_RELEASE(tmp7);
	PURS_ANY_RELEASE(tmp6);
	PURS_ANY_RELEASE(tmp5);
	PURS_ANY_RELEASE(tmp4);
	PURS_ANY_RELEASE(tmp3);
	PURS_ANY_RELEASE(tmp2);
	PURS_ANY_RELEASE(tmp1);
	return ret;
}

DFU_IMPL_FN(9)

static purs_any_t _fun_10 (const purs_scope_t *scope, purs_any_t a, va_list args) {
	purs_any_t
		fn = purs_scope_binding_at(scope, 0),
		b = va_arg(args, purs_any_t),
		c = va_arg(args, purs_any_t),
		d = va_arg(args, purs_any_t),
		e = va_arg(args, purs_any_t),
		f = va_arg(args, purs_any_t),
		g = va_arg(args, purs_any_t),
		h = va_arg(args, purs_any_t),
		i = va_arg(args, purs_any_t),
		k = va_arg(args, purs_any_t),
		tmp1 = purs_any_app(fn,   a),
		tmp2 = purs_any_app(tmp1, b),
		tmp3 = purs_any_app(tmp2, c),
		tmp4 = purs_any_app(tmp3, d),
		tmp5 = purs_any_app(tmp4, e),
		tmp6 = purs_any_app(tmp5, f),
		tmp7 = purs_any_app(tmp6, g),
		tmp8 = purs_any_app(tmp7, h),
		tmp9 = purs_any_app(tmp8, i),
		ret  = purs_any_app(tmp9, k);
	PURS_ANY_RELEASE(tmp9);
	PURS_ANY_RELEASE(tmp8);
	PURS_ANY_RELEASE(tmp7);
	PURS_ANY_RELEASE(tmp6);
	PURS_ANY_RELEASE(tmp5);
	PURS_ANY_RELEASE(tmp4);
	PURS_ANY_RELEASE(tmp3);
	PURS_ANY_RELEASE(tmp2);
	PURS_ANY_RELEASE(tmp1);
	return ret;
}

DFU_IMPL_FN(10)


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

PURS_FFI_FUNC_11(Data_Function_Uncurried_runFn10, fn, a, b, c, d, e, f, g, h, i, k) {
	return purs_any_app(fn, a, b, c, d, e, f, g, h, i, k);
}
