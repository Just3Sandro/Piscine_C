#!/bin/sh

find . -iname "*.sh" | xargs -L1 -I{} basename "{}" .sh
