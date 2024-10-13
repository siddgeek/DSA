
def newton_raphson_method(f_str, df_str, x0, tol=1e-6, max_iter=100):
    f = lambda x: eval(f_str)
    df = lambda x: eval(df_str)

    x = x0

    for i in range(max_iter):
        fx = f(x)
        dfx = df(x)

        if abs(fx) < tol:
            return x

        if dfx == 0:
            raise ZeroDivisionError("Derivative is zero. No solution found.")

        x_new = x - fx / dfx

        print(f"Iteration {i}: x = {x_new}, f(x) = {f(x_new)}")

        if abs(x_new - x) < tol:
            return x_new

        x = x_new

    return x  

f_str = input("Enter the function (): ")
df_str = input("Enter the derivative of the function (): ")
x0 = float(input("Enter the initial guess: "))

root = newton_raphson_method(f_str, df_str, x0)
print(f"The root found by Newton-Raphson method is: {root}")