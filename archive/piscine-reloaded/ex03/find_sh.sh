#!/usr/bin/env bash
find . -name "*.sh" | sed 's/\.sh$//' | rev | cut -d'/' -f1 | rev
