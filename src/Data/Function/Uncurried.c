#include <purescript.h>

const ANY * _fun_0 (const void * ctx, const ANY * _, va_list __) {
	const ANY * fn = (const ANY *) ctx;
	return purs_any_app(fn, NULL);
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn0, fn, {
	return purs_any_cont_new(fn, _fun_0);
});

const ANY * _fun_2 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(fn, a), b);
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn2, fn, {
	return purs_any_cont_new(fn, _fun_2);
});

const ANY * _fun_3 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);

	const ANY * c = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c);
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn3, fn, {
	return purs_any_cont_new(fn, _fun_3);
});

const ANY * _fun_4 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d);
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn4, fn, {
	return purs_any_cont_new(fn, _fun_4);
});

const ANY * _fun_5 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), e);
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn5, fn, {
	return purs_any_cont_new(fn, _fun_5);
});

const ANY * _fun_6 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	const ANY * f = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), e), f);
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn6, fn, {
	return purs_any_cont_new(fn, _fun_6);
});

const ANY * _fun_7 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	const ANY * f = va_arg(args, const ANY *);
	const ANY * g = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), e), f), g);
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn7, fn, {
	return purs_any_cont_new(fn, _fun_7);
});

const ANY * _fun_8 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	const ANY * f = va_arg(args, const ANY *);
	const ANY * g = va_arg(args, const ANY *);
	const ANY * h = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), e), f), g), h);
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn8, fn, {
	return purs_any_cont_new(fn, _fun_8);
});

const ANY * _fun_9 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	const ANY * f = va_arg(args, const ANY *);
	const ANY * g = va_arg(args, const ANY *);
	const ANY * h = va_arg(args, const ANY *);
	const ANY * i = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), e), f), g), h), i);
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn9, fn, {
	return purs_any_cont_new(fn, _fun_9);
});

const ANY * _fun_10 (const void * ctx, const ANY * a, va_list args) {
	const ANY * fn = (const ANY *) ctx;
	const ANY * b = va_arg(args, const ANY *);
	const ANY * c = va_arg(args, const ANY *);
	const ANY * d = va_arg(args, const ANY *);
	const ANY * e = va_arg(args, const ANY *);
	const ANY * f = va_arg(args, const ANY *);
	const ANY * g = va_arg(args, const ANY *);
	const ANY * h = va_arg(args, const ANY *);
	const ANY * i = va_arg(args, const ANY *);
	const ANY * j = va_arg(args, const ANY *);
	return purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(
		purs_any_app(fn, a), b), c), d), e), f), g), h), i), j);
}

PURS_FFI_FUNC_1(Data_Function_Uncurried_mkFn10, fn, {
	return purs_any_cont_new(fn, _fun_10);
});

PURS_FFI_FUNC_1(Data_Function_Uncurried_runFn0, fn, {
	return purs_any_app(fn, NULL);
});

PURS_FFI_FUNC_3(Data_Function_Uncurried_runFn2, fn, a, b, {
	return purs_any_app(fn, a, b);
});

PURS_FFI_FUNC_4(Data_Function_Uncurried_runFn3, fn, a, b, c, {
	return purs_any_app(fn, a, b, c);
});

PURS_FFI_FUNC_5(Data_Function_Uncurried_runFn4, fn, a, b, c, d, {
	return purs_any_app(fn, a, b, c, d);
});

PURS_FFI_FUNC_6(Data_Function_Uncurried_runFn5, fn, a, b, c, d, e, {
	return purs_any_app(fn, a, b, c, d, e);
});

PURS_FFI_FUNC_7(Data_Function_Uncurried_runFn6, fn, a, b, c, d, e, f, {
	return purs_any_app(fn, a, b, c, d, e, f);
});

PURS_FFI_FUNC_8(Data_Function_Uncurried_runFn7, fn, a, b, c, d, e, f, g, {
	return purs_any_app(fn, a, b, c, d, e, f, g);
});

PURS_FFI_FUNC_9(Data_Function_Uncurried_runFn8, fn, a, b, c, d, e, f, g, h, {
	return purs_any_app(fn, a, b, c, d, e, f, g, h);
});

PURS_FFI_FUNC_10(Data_Function_Uncurried_runFn9, fn, a, b, c, d, e, f, g, h, i, {
	return purs_any_app(fn, a, b, c, d, e, f, g, h, i);
});

PURS_FFI_FUNC_11(Data_Function_Uncurried_runFn10, fn, a, b, c, d, e, f, g, h, i, j, {
	return purs_any_app(fn, a, b, c, d, e, f, g, h, i, j);
});
