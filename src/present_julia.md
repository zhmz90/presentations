% Introduction to julia
% Lanting Guo
% \today

### Why julia? 

Maximimze Utilities: money, knowlege, fun, ... \newline

- opportunity cost \newline
    In the existing languages no one is better. 
- limited time \newline
    Quick to learn, Quick to programming, Quick to dig
- Investment: Foucus on one area \newline
    more time, more Utilities  \newline
    But with the speed of Log , Linear, or Exponential?
- Speculation: multi-area \newline
    Arbitrage \newline
    A lot of state-of-art techs in julia

### Summary of Features
- Good performance
- Powerful shell-like capabilities for managing other processes
- Designed for parallelism and distributed computation
- Call C functions directly: no wrappers or special APIs
- Call Python functions: use the PyCall package
- Lisp-like macros and other metaprogramming facilities

### High-Performance JIT Compiler
- LLVM-based just-in-time (JIT) compiler: PyPy,Swift
- the design of language
\begin{center}
    \includegraphics[width=4in,height=2.5in]{images/benchmark.png}
\end{center}

### Parallelism and Cloud Computing
- SIMD
- multi-process
- Shared Arrays
- Cluster Managers
- more importantly easy to program

### Parallelism and Cloud Computing {.fragile}

\begin{verbatim}

julia> nheads = @parallel (+) for i=1:200000000
  Int(rand(Bool))
end

julia> r = @spawn rand(2,2)
RemoteRef(1,1,0)

julia> s = @spawn 1 .+ fetch(r)
RemoteRef(1,1,1)

julia> texfetch(s)
1.10824216411304866 1.13798233877923116
1.12376292706355074 1.18750497916607167

\end{verbatim}

### quickly to protype, Metaprogramming ...
- friendly syntax for Python, R, Matlab, Octave users
- Metaprogramming 
    Like Lisp, Julia represents its own code as a data structure of the language itself.

### Biojulia
\begin{center}
    \includegraphics[width=4in,height=3in]{images/BioJulia.png}
\end{center}


### Powerful shell-like capabilities for managing other processes
\begin{center}
    \includegraphics[width=4in,height=3in]{images/pipeline_julia.png}
\end{center}


### Oops
- not perfect as your first language \newline
    0.3 is table but less new features \newline
    The newest is untable and maybe has bugs \newline
- The official docs, Stackoverflow and source code are the three sources to solve toyour problem

- But if your are an old soldier, everything will be fine.

### Julia: part of Haplox tech infrastructure

- interactive DNA analysis tools specialized with DNA analysis tools
- key part visual to developer


