import math

factorialN = math.factorial(500)
factorialY1 = math.factorial(100)
factorialY2 = math.factorial(200)

rightside = factorialN / (factorialY1 * factorialY2 *factorialY2)

prob1 = math.pow(0.18, 100)
prob2 = math.pow(0.23, 200)
prob3 = math.pow(0.27, 200)

leftside = prob1 * prob2 * prob3

result = rightside * leftside

print(f"result: {result:.10e}")