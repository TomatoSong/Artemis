#!/bin/sh

# Run CVC4 with a 10 minute timeout.

timeout 600 ${ARTEMISDIR}/contrib/CVC4/cvc4-2014-05-14-x86_64-linux-opt "$@"
