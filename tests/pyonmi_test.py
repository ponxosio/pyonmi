import unittest
# import our `pybind11`-based extension module from package python_cpp_example
from pyonmi import oNMI

class MainTest(unittest.TestCase):
    def test_max_oNMI(self):
        # test oNMI of two equal sets is 1.0
        g1 = [set(["1","2"]), set(["3","4"])]
        g2 = [set(["1","2"]), set(["3","4"])]
        self.assertEqual(oNMI(g1, g2, False), 1.0)

if __name__ == '__main__':
    unittest.main()
