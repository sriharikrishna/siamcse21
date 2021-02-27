# AD microbenchmark

This program applies Tapenade in forward and reverse mode to the function
`fun`.

The function takes a vector of length `n` as an input and produces a vector of
length `n` as an output. Currently, the function is just a dummy that does some
arbitrary work (it sums all entries of the input vector, and assigns that sum
to each individual entry of the output vector).

We then use AD to compute a Jacobian-vector product using the forward mode, a
vector-Jacobian product using reverse mode, and finally we use both modes to
obtain two (hopefully identical) copies of the entire Jacobian matrix, by
iterating over the `n` cartesian basis vectors for the forward mode, and the
`m` cartesian basis vectors for the reverse mode.

Absolute run times, and "overheads" (which is the slowdown factor of the
derivative computation compared to the primal computation) are measured and
displayed.

# Running the benchmark

Simply type `make` and the benchmark is compiled and run for two test settings.
You can also try your own input/output sizes to observe the run times and
overhead factors for other values of `n` and `m`, simply call the driver using
something like `./driver 1000 30000`.

# Changing the benchmark

You can change the function `fun` to compute whatever you like. As long as the
function signature remains the same, the benchmark should still work.  You will
have to obtain the derivative functions yourself, either through the Tapenade
command line or the web interface, then copy and paste them into `fun.c`.

# Missing adBuffer.h or similar files?

Tapenade has a run time support library that is needed for non-trivial reverse-
mode programs. These files are contained in the ADFirstAidKit, which can be
downloaded from the Tapenade website.

# Mismatch between forward and reverse mode Jacobians reported?

Try printing the offending values. The two modes can differ due to roundoff,
and the current driver tests for exact equality. Depending on the function,
it may be necessary to allow some tolerance instead.
