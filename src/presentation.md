% Compiler, Heterogeneous Parallel Computing and Mathematical Optimization
% Lanting Guo
% \today

## Background
- Foucus on machine learning 
  Data Exploration ==> Model ==> Loss Function
      /\                           ||
      ||      Iterative            ||
      ||                           \/
  Accuracy <== code <==  Optimization Algorithm
                        
- three mountatians ==> one mountatian
- MLer() = compute_ability(HPC) + algorithm(OPT) + model(DL, PGM, ML, Boosting, Ensemble etc) 
- iterative, coordinate ascent and active learning:
    + iterative: again, again, again, ....  
    + coordinate ascent: a simple heuristic algorithm, optimize one while fixed the others.
    + active learning: learn what you like, learn what you are capable of, and valuable of...

- minimize: the height of three mountatians
    subject to: sum(time_i) = 10000hours  
    keep other states relatively stable and persistant

## Compiler
- Why Compiler?
    + deeper understanding about programming languages
    + part of it related to convex optimization and DL softwares: theano, MShadow
    + coding better

- LLVM
- kaleidoscope
- Julia
- Cxx.jl

## LLVM
\begin{center}
    \includegraphics[width=4in,height=3in]{images/llvm_tk1.jpg}
\end{center}

## Classical compiler design -1
\begin{center}
    \includegraphics[width=4in,height=3in]{images/llvm_tk2.jpg}
\end{center}

## Classical compiler design -2
\begin{center}
    \includegraphics[width=4in,height=3in]{images/llvm_tk3.jpg}
\end{center}

## kaleidoscope

[kaleidoscope at my Github](http://dllab.org/kaleidoscope)


## introduction to Julia internal
    
  

## Heterogeneous Parallel Computing
- julia: multi-thread, multi-task MC demo
- CUDA C: Monto Caro demo
- ClusterManagement.jl

## Mathematical Optimization
- SVM
- L1 regulation

## an machine learning example
- First kaggle TOP10%


