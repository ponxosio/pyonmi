# include <set>
# include <string>
# include <vector>

typedef std::string Node;
typedef std::vector< std::set< Node > > Grouping;

float oNMI(const Grouping g1, const Grouping g2);
