/*
** Just Some Ideas:
**
**  - Predictive Optimisation. Check all first character of all possible roots. If no conflict then predictive.
**  - Or Optimisation. Check if any terminal parsers are _ored_ together. If so condence into single large range.
**  - And Optimisation. Check if any terminal parsers are _anded_ together. If so condence into single large string.
**  - Not Optimisation. Similar to the above. Convert _nots_ into positive cases by inverting full range of characters.
**  - Also Optimisation. Two Character parsers together can be condensed to a single string parser.
**  - Lookup Optimisation. Finite State Machine Parser.
**  - Or Fail Removal.
**
*/