# Copy an extension from one file to another.
#
# See the Tests subsection of the manual for a complete explanation
# (in the Installing gnuastro section).
#
# Original author:
#     Mohammad Akhlaghi <akhlaghi@gnu.org>
# Contributing author(s):
#
# Copying and distribution of this file, with or without modification,
# are permitted in any medium without royalty provided the copyright
# notice and this notice are preserved.  This file is offered as-is,
# without any warranty.





# Preliminaries
# =============
#
# Set the variabels (The executable is in the build tree). Do the
# basic checks to see if the executable is made or if the defaults
# file exists (basicchecks.sh is in the source tree).
prog=fits
img1=fitstest.fits
img2=mkprofcat2.fits
execname=../bin/$prog/ast$prog





# Skip?
# =====
#
# If the dependencies of the test don't exist, then skip it. There are two
# types of dependencies:
#
#   - The executable was not made (for example due to a configure option),
#
#   - The input data was not made (for example the test that created the
#     data file failed).
if [ ! -f $execname ]; then echo "$execname doesn't exist."; exit 77; fi
if [ ! -f $img1     ]; then echo "$img1 doesn't exist.";     exit 77; fi
if [ ! -f $img2     ]; then echo "$img2 doesn't exist.";     exit 77; fi





# Actual test script
# ==================
$execname $img2 --copy="Mock profiles" --output=$img1
