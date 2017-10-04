# OFC - Open Fortran Compiler

## DO NOT BUILD ofc/src/sema_pass

The package ofc/src/sema_pass contains an untracked copy of the OFC code
originally in ofc/src/sema/pass.

In an initial attempt to refactor the OFC code, the git-tracked code has been
modified, renamed to *sema_passxxxx* (where *xxxx* is the original name of the
.c file), and repatriated to ofc/src/sema.  The code in this directory,
*ofc/src/sema_pass*, is untracked code maintained here while we think about
what to do with it.

At present, there are no proper component headers for any of the files in
ofc/src/sema/sema_pass... moved as described above, so at a later date proper
headers for the new components will be created, and all function declarations
will be rationalized per proper component rules.


## Contact

You can contact Tom Marshall at tmarshall2@bloomberg.net

