# Convolution

## Understanding 1D Convolution (Linear Convolution)

### What Is Convolution?

Convolution is a fundamental mathematical operation used in signal processing and deep learning to combine two functions (or sequences):  
- an **input signal** (often called the *input*), and  
- a **kernel/filter** (often called the *filter* or *mask*).  

It helps detect patterns, smooth data, or extract features.

---

## ⚙️ 1D Convolution Definition

For two discrete sequences:
- Input signal: `x[n]`
- Filter (kernel): `h[n]`
- 
where:
- `y[n]` is the output (the convolved signal)
- `K` is the length of the filter `h[n]`
- We flip the filter and slide it across the input, multiplying and summing at each step.

---
