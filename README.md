# pyonmi

This repository provides a python wrapper of the Overlapping Normalized Mutual Information function implemented in https://github.com/aaronmcdaid/Overlapping-NMI. The code use in the wrapper is the one from the comit "eace2d6" done on Oct 24, 2016. Please notice that the some changes has been done to the original code in order to avoid reading the data from files so the package is fully integrated as a python package. Nevertheless, the logic that calculates the Overlapping NMI is untouched and remains the same as the one from the original repository.

Overlapping NMI description in:
   "Normalized Mutual Information to evaluate overlapping community finding algorithms"
   by Aaron F. McDaid, Derek Greene, Neil Hurley
   http://arxiv.org/abs/1110.2515

Our method is based on the method described in Appendix B at the end of:
  "Detecting the overlapping and hierarchical community structure in complex networks"
  by Andrea Lancichinetti, Santo Fortunato and János Kertész
  http://iopscience.iop.org/1367-2630/11/3/033015/
  
# Dependencies
  
# How to install
  
# How to use

```
  import pyonmi
  
  grouping_1 = [set(["1", "2", "3"]),set(["4", "5", "6"])]
  grouping_2 = [set(["1", "2", "3", "7"]),set(["4", "5", "6"])]
  
  max_overlapping_nmi = pyonmi.oNMI(grouping_1, grouping_2)
```
  
  
# Credit
  
For credit, please cite the original authors of the function:

== Citation for Bibtex ==

@article{McDaidNMI,
    abstract = {Given the increasing popularity of algorithms for overlapping clustering, in
particular in social network analysis, quantitative measures are needed to
measure the accuracy of a method. Given a set of true clusters, and the set of
clusters found by an algorithm, these sets of clusters must be compared to see
how similar or different the sets are. A normalized measure is desirable in
many contexts, for example assigning a value of 0 where the two sets are
totally dissimilar, and 1 where they are identical. A measure based on
normalized mutual information, [1], has recently become popular. We demonstrate
unintuitive behaviour of this measure, and show how this can be corrected by
using a more conventional normalization. We compare the results to that of
other measures, such as the Omega index [2].},
    archivePrefix = {arXiv},
    author = {McDaid, Aaron F. and Greene, Derek and Hurley, Neil},
    citeulike-article-id = {9896732},
    citeulike-linkout-0 = {http://arxiv.org/abs/1110.2515},
    citeulike-linkout-1 = {http://arxiv.org/pdf/1110.2515},
    day = {11},
    eprint = {1110.2515},
    month = oct,
    posted-at = {2011-10-13 02:42:56},
    priority = {0},
    title = {Normalized Mutual Information to evaluate overlapping community finding algorithms},
    url = {http://arxiv.org/abs/1110.2515},
    year = {2011}
}
